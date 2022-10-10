/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
/*!
 * DynamicLutLoadDemo
 * The demo demostrates how to interface to a ColorBox device via the REST API and WebSockets to upload 1D and 3D Luts to ColorBox.
 *
 * The demo builds up a RGB 12 bit 1DLUT based on the UI lift/gamma/gain parameters...If the desired upload is a 3DLUT the 1DLUT gets converted
 * just for the demonstartions sake.
 *
 * To build and upload 12 bit 1D LUT:
 * -Use REST API to enable the chosen LUT and set it to Dynamic Mode(see dynmicLutChoiceChanged()).
 * -Fill in lutValues1D
 * -Use WebSocket to send lutValues1D. To direct Websocket data to correct LUT
 *   prepend the 1D lutValues1D with "1DL1", "1DL2","1DL3","1DL3" to data sent(see updateColorBox())
 *
 * To build and upload 3D LUT:
 * -Use REST API to enable the 3D LUT and set it to Dynamic Mode(see dynmicLutChoiceChanged()).
 * -Fill in lutValues3D
 * -Use WebSocket to send lutValues3D. To direct Websocket data to correct LUT
 *   prepend the lutValues3D with "3DL1"(see updateColorBox())
 *
 * see dynmicLutChoiceChanged() for details on using OpenAPI for the REST interface.
 *
 * handleGetStages() shows how to put the box in LUT("AJA Color") mode which is needed for
 * dynamic LUT loading. If the ColorBox is not already in that mode it takes a few seconds
 * for the mode change.
 *
 */

#include "dialog.h"
#include "ui_dialog.h"
#include <QFileDialog>
#include <QDebug>
#include <QTimer>
#include <QElapsedTimer>
#include <QKeyEvent>
#include "colorboxdemocommon.h"

static RGB12BitIntLutValues lutValues1D;             // 1DLUT
static RGB16BitIntCoefs lutValues3D[33][33][33]; // 3DLUT in [B][G][R]

using namespace OpenAPI;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent),
	  _cbConnected(false),
	  _ui(new Ui::Dialog)
{
    _ui->setupUi(this);

	setWindowFlags(Qt::WindowMinMaxButtonsHint | Qt::WindowCloseButtonHint);

    _webSocketThread = new QThread;
    _webSocktLoader = new AJAWebSocketInterface();
    _webSocktLoader->moveToThread(_webSocketThread);

    // Web Socket Boiler Plate Signals/Slots
    connect(_webSocketThread, &QThread::finished, _webSocktLoader, &QObject::deleteLater);
    connect(_webSocktLoader, &AJAWebSocketInterface::connected, this, &Dialog::onConnected);
    connect(_webSocktLoader, &AJAWebSocketInterface::disconnected, this, &Dialog::onDisconnected);
    connect(_webSocktLoader, &AJAWebSocketInterface::error, this, &Dialog::onError);
	connect(this, &Dialog::load, _webSocktLoader, &AJAWebSocketInterface::sendBinaryMessage);
	connect(this, &Dialog::connectColorBoxWebSocket, _webSocktLoader, &AJAWebSocketInterface::connectColorBoxWebSocket);

    // UI related Signals/Slots
    connect(_ui->ipAddressLineEdit,&QLineEdit::editingFinished,this, &Dialog::ipAddressEdited);
    connect(_ui->resetPushButton,&QPushButton::pressed,this,&Dialog::resetParameters);

    // API related slots
    connect(&_api, &OAIDefaultApi::getPipelineStagesSignal, this, &Dialog::handleGetStages);
    connect(&_api, &OAIDefaultApi::getPipelineStagesSignalE, this, &Dialog::handleGetStagesError);

    connect(_ui->lutChoiceComboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(dynmicLutChoiceChanged(int)));

	connect(_ui->rCheckBox,SIGNAL(stateChanged(int)),this,SLOT(updateColorBox(int)));
	connect(_ui->gCheckBox,SIGNAL(stateChanged(int)),this,SLOT(updateColorBox(int)));
	connect(_ui->bCheckBox,SIGNAL(stateChanged(int)),this,SLOT(updateColorBox(int)));

    _webSocketThread->start();

    recallSettings();
    ipAddressEdited();

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Dialog::updateTimer);
    timer->start(50);

	this->setWindowTitle("ColorBox Dynamic LUT Load Demo");
    this->setFocus();
}

Dialog::~Dialog()
{
    saveSettings();
    delete _ui;
}


void Dialog::recallSettings()
{
	QSettings settings(QSettings::UserScope, "aja", "ColorBoxDynamicLutLoad");
    _ui->ipAddressLineEdit->setText(settings.value("IPAddress").toString());

}

void Dialog::saveSettings()
{
	QSettings settings(QSettings::UserScope, "aja", "ColorBoxDynamicLutLoad");
    settings.setValue("IPAddress",_ui->ipAddressLineEdit->text());

}

void Dialog::updateTimer()
{
	updateColorBox(0);
}

void Dialog::ipAddressEdited()
{
    qDebug() << "IP Address" << _ui->ipAddressLineEdit->displayText().simplified();

    if ( _currentIPAddress == _ui->ipAddressLineEdit->displayText().simplified())
        return; // unchanged

	_cbConnected = false;

    _currentIPAddress = _ui->ipAddressLineEdit->displayText().simplified();
    _api.setUrlForServers(_currentIPAddress);

    // Just call this to see if we can connect to that Address.
    _api.getPipelineStages();
}

void Dialog::handleGetStages(OpenAPI::OAIPipelineStages stages)
{
    Q_UNUSED(stages)

	_cbConnected = true;
    _ui->connectLabel->setText("CONNECTED");

    // Get Web Socket Going.
	// don't want any port number from URL
	QString webSocketIP = _currentIPAddress.split(":").at(0);
    emit connectColorBoxWebSocket(webSocketIP);
    dynmicLutChoiceChanged(_ui->lutChoiceComboBox->currentIndex());

    // Now put the ColorBox in LUT mode. Note: if it was in Orion Mode it will be ~2 seconds before LUT mode is ready as it needs to change firmware.
    OAITransformMode transformMode;
    transformMode.setValue(OAITransformMode::eOAITransformMode::LUT);
    OAISystemConfig systemConfig;
    systemConfig.setTransformMode(transformMode);
    _api.setSystemConfig(systemConfig);
}


void Dialog::handleGetStagesError(OpenAPI::OAIPipelineStages summary, QNetworkReply::NetworkError error_type, QString error_str)
{
    Q_UNUSED(summary)
    Q_UNUSED(error_type)

    qDebug() << error_str;
    _ui->connectLabel->setText("NOT CONNECTED");
	_cbConnected = false;

}

void Dialog::onConnected()
{
    qDebug() << "Connected Web Socket";
}

void Dialog::onDisconnected()
{
    qDebug() << "DisConnected Web Socket";
}

void Dialog::onError(QString msg)
{
    qDebug() << msg;
}

void Dialog::dynmicLutChoiceChanged(int index)
{
	if ( !_cbConnected )
    {
        qDebug() << "Not Connected";
        return;
    }

    // For demo put the box in "Live" mode by disabling FrameStore...
    OAIFrameStore frameStore;
    frameStore.setEnabled(false);
   // _api.setFrameStore(frameStore);

    // Enable current Choice and disable all others.
    OAIPipelineStages stages;
    OAIStage lutStage;
    switch ( index )
    {
    case 1: // "1DL1"

        lutStage.setDynamic(true);
        lutStage.setEnabled(true);
        stages.setLut1d1(lutStage);
        lutStage.setEnabled(false);
        lutStage.setDynamic(false);
        stages.setLut1d2(lutStage);
        stages.setLut3d1(lutStage);
        stages.setLut1d3(lutStage);
        stages.setLut1d4(lutStage);
        break;
    case 2: // "1DL2"

        lutStage.setDynamic(true);
        lutStage.setEnabled(true);
        stages.setLut1d2(lutStage);
        lutStage.setEnabled(false);
        lutStage.setDynamic(false);
        stages.setLut1d1(lutStage);
        stages.setLut3d1(lutStage);
        stages.setLut1d3(lutStage);
        stages.setLut1d4(lutStage);
        break;
    case 3: // "3DL1"

        lutStage.setDynamic(true);
        lutStage.setEnabled(true);
        stages.setLut3d1(lutStage);
        lutStage.setEnabled(false);
        lutStage.setDynamic(false);
        stages.setLut1d1(lutStage);
        stages.setLut1d2(lutStage);
        stages.setLut1d3(lutStage);
        stages.setLut1d4(lutStage);
        break;
    case 4: // "1DL3"

        lutStage.setDynamic(true);
        lutStage.setEnabled(true);
        stages.setLut1d3(lutStage);
        lutStage.setEnabled(false);
        lutStage.setDynamic(false);
        stages.setLut1d1(lutStage);
        stages.setLut1d2(lutStage);
        stages.setLut3d1(lutStage);
        stages.setLut1d4(lutStage);
        break;
    case 5:// "1DL4"

        lutStage.setDynamic(true);
        lutStage.setEnabled(true);
        stages.setLut1d4(lutStage);
        lutStage.setEnabled(false);
        lutStage.setDynamic(false);
        stages.setLut1d1(lutStage);
        stages.setLut1d2(lutStage);
        stages.setLut3d1(lutStage);
        stages.setLut1d3(lutStage);
        break;
    default:
    case 0:  //NONE - Turn LUT Pipeline to passthru

        lutStage.setEnabled(false);
        lutStage.setDynamic(false);
        stages.setLut1d1(lutStage);
        stages.setLut1d2(lutStage);
        stages.setLut3d1(lutStage);
        stages.setLut1d3(lutStage);
        stages.setLut1d4(lutStage);
        break;
    }

    // Handle Input and Output CSC Settings and output Transfer Characteristic.
    // inColorimetry and InRange choose the correct input CSC.
    // OutColorimetry and OutRange choose the correct ouput CSC.
    // If it is an RGB workflow only the Range parameter is pertinent.
    // Range basically controls whether the pipeline uses 0-4095(SMPTEFULL) as 0-1 or 256-3760(SMPTENARROW) as 0-1.
    OAIColorimetry inColorimetry;
    inColorimetry.setValue(OAIColorimetry::eOAIColorimetry::BT_709);
    stages.setInColorimetry(inColorimetry);

    OAIPipelineRange inRange;
    inRange.setValue(OAIPipelineRange::eOAIPipelineRange::SMPTENARROW);
    stages.setInRange(inRange);

    OAIColorimetry outColorimetry;
    outColorimetry.setValue(OAIColorimetry::eOAIColorimetry::BT_709);
    stages.setOutColorimetry(outColorimetry);

    OAIPipelineRange outRange;
    outRange.setValue(OAIPipelineRange::eOAIPipelineRange::SMPTENARROW);
    stages.setInRange(outRange);

    OAITransfer outputTransferCharacteristics;
    outputTransferCharacteristics.setValue(OAITransfer::eOAITransfer::SDR);
    stages.setTransferCharacteristic(outputTransferCharacteristics);

    _api.setPipelineStages(stages);

    this->setFocus();
}


void Dialog::resetParameters()
{
    qDebug() << " resetting Parameters";
    _ui->liftSlider->setValue(0) ;
    _ui->gammaSlider->setValue(250);
    _ui->gainSlider->setValue(250);
    _ui->rCheckBox->setCheckState(Qt::Checked);
    _ui->gCheckBox->setCheckState(Qt::Checked);
    _ui->bCheckBox->setCheckState(Qt::Checked);
	updateColorBox(0);
}

void Dialog::updateColorBox(int value)
{
    // value not used

	if ( !_cbConnected )
    {
        qDebug() << "Waiting to Connect";
        return;
    }

    QString lutChoiceString = _ui->lutChoiceComboBox->currentText();
    if ( lutChoiceString.startsWith("NONE") )
        return;

    double lift = 0.0;
    double gamma = 1.0;
    double gain = 1.0;

    // All sliders just 0-1000 for simplicity
    int liftSlider = _ui->liftSlider->value();
    int gammaSlider = _ui->gammaSlider->value();
    int gainSlider = _ui->gainSlider->value();

    // Convert slider values to  LGG ranges
    lift = static_cast<double>(liftSlider)/1000.0;
    gamma = .5 + 2.0*static_cast<double>(gammaSlider)/1000.0;
    gain =  4.0*static_cast<double>(gainSlider)/1000.0;

    QString liftString = QString::number(lift,'f',3);
    QString gammaString = QString::number(gamma,'f',3);
    QString gainString = QString::number(gain,'f',3);

    _ui->label_Lift->setText(liftString.rightJustified(7));
    _ui->label_Gamma->setText(gammaString.rightJustified(7));
    _ui->label_Gain->setText(gainString.rightJustified(7));

    bool rChecked = _ui->rCheckBox->checkState();
    bool gChecked = _ui->gCheckBox->checkState();
    bool bChecked = _ui->bCheckBox->checkState();

    lutValues1D.resize(4096);
    for ( uint16_t i=0;i<4096;i++)
    {
        double currentInput = static_cast<double>(i)/4095.0;
        //output = (gain * (x + lift * (1-x)))^(1/gamma).
        // NOTE: only intended to show how to use our Dynamic LUT feature.
		// Best seen on ColorBox if the input to ColorBox is a Full Luma Ramp
        int16_t currentOutput = static_cast<int16_t>(4095.0*pow(currentInput*(gain-lift)+lift,(1.0/gamma)));
        if ( currentOutput > 4095 ) currentOutput = 4095;
        if ( currentOutput <  0 ) currentOutput = 0;

        RGB12BitIntValues  lutValue;
        lutValue.rValue = (rChecked)  ? currentOutput  : i;
        lutValue.gValue = (gChecked) ?  currentOutput : i;
        lutValue.bValue = (bChecked)  ? currentOutput : i;

        lutValues1D[i] = lutValue;

     }

    if ( lutChoiceString.startsWith("3DL1") )
    {
        // Build 3DLUT from 3x1DLUTs

        for ( int blue = 0; blue < 33; blue++)
            for ( int green = 0; green < 33; green++ )
                for ( int red = 0; red < 33; red++ )
                {
                    int index = red<<7;
                    if ( index > 4095 ) index = 4095;
                    lutValues3D[blue][green][red].rValue =  lutValues1D[index].rValue<<4;
                    index = green<<7;
                    if ( index > 4095 ) index = 4095;
                    lutValues3D[blue][green][red].gValue =  lutValues1D[index].gValue<<4;
                    index = blue<<7;
                    if ( index > 4095 ) index = 4095;
                    lutValues3D[blue][green][red].bValue =   lutValues1D[index].bValue<<4;

                }

        QByteArray ba(reinterpret_cast<const char*>(&lutValues3D[0][0][0]),33*33*33*6);
        ba.prepend("3DL1");
        emit load(ba);
    }
    else
    {
        QByteArray ba(reinterpret_cast<const char*>(&lutValues1D[0]),lutValues1D.size()*sizeof(RGB12BitIntValues));
        // Prepend ""1DL1" etc depending on UI choice
        ba.prepend(lutChoiceString.toUtf8());
        emit load(ba);
    }

}






