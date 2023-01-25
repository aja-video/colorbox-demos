/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
/*!
 * DynamicMatrixLoad
 * The demo demostrates how to interface to a ColorBox device via the REST API and WebSockets to upload a matrix to ColorBox.
 *
 * mtxChoiceChanged() shows how to use the OpenAPI to control the ColorBox for dynamic matrix loading.
 *
 * This demo builds a Qt QMatrix4x4 and then uses QMatrix4x4::copyDataTo to put it in row-major order to send
 * a ColorBoxDynamicMatrix to ColorBox.
 */

#include "dialog.h"
#include "ui_dialog.h"
#include <QFileDialog>
#include <QKeyEvent>
#include <QDebug>
#include <QTimer>
#include <QMatrix4x4>
#include <QVector4D>

#include <QElapsedTimer>

using namespace OpenAPI;

// This is needed to compile with older Qt versions like Qt 5.13.2
#if QT_VERSION < QT_VERSION_CHECK(5, 14, 0)
namespace Qt {
	QTextStream &endl(QTextStream &s)
	{
		return ::endl(s);
	}
}
#endif

Dialog::Dialog(QWidget *parent)
    : QDialog(parent),
	  _cbConnected(false),
      _printLoopTime(false),
      _printMatrix(false),
      _ui(new Ui::Dialog)
{
    _api.useBasicAuth("admin","admin");
    _ui->setupUi(this);

	setWindowFlags(Qt::WindowMinMaxButtonsHint | Qt::WindowCloseButtonHint);

    // Web Socket BoilerPlate Code
    _webSocketThread = new QThread;
    _webSocketLoad = new AJAWebSocketInterface();
    _webSocketLoad->moveToThread(_webSocketThread);
    connect(_webSocketThread, &QThread::finished, _webSocketLoad, &QObject::deleteLater);
    connect(_webSocketLoad, &AJAWebSocketInterface::connected, this, &Dialog::onConnected);
    connect(_webSocketLoad, &AJAWebSocketInterface::disconnected, this, &Dialog::onDisconnected);
    connect(_webSocketLoad, &AJAWebSocketInterface::error, this, &Dialog::onError);
	connect(this, &Dialog::load, _webSocketLoad, &AJAWebSocketInterface::sendBinaryMessage);
	connect(this, &Dialog::connectColorBoxWebSocket, _webSocketLoad, &AJAWebSocketInterface::connectColorBoxWebSocket);

    // UI related slots
    connect(_ui->ipAddressLineEdit,&QLineEdit::editingFinished,this, &Dialog::ipAddressEdited);
    connect(_ui->resetPushButton,&QPushButton::pressed,this,&Dialog::resetParameters);
    connect(_ui->mtxChoiceComboBox, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), this,  &Dialog::mtxChoiceChanged);

    // API related slots
    connect(&_api, &OAIDefaultApi::getPipelineStagesSignal, this, &Dialog::handleGetStages);
    connect(&_api, &OAIDefaultApi::getPipelineStagesSignalE, this, &Dialog::handleGetStagesError);

    _webSocketThread->start();

    recallSettings();
    ipAddressEdited();

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Dialog::updateTimer);
    timer->start(50);

	this->setWindowTitle("ColorBox Dynamic Matrix Load Demo");
    this->setFocus();
}

Dialog::~Dialog()
{
    saveSettings();
    delete _ui;
}

void Dialog::recallSettings()
{
	QSettings settings(QSettings::UserScope, "aja", "ColorBoxDynamicMatrixLoad");
    _ui->ipAddressLineEdit->setText(settings.value("IPAddress").toString());

}

void Dialog::updateTimer()
{
    updateProcAmp(0);
}

void Dialog::saveSettings()
{
	QSettings settings(QSettings::UserScope, "aja", "ColorBoxDynamicMatrixLoad");
    settings.setValue("IPAddress",_ui->ipAddressLineEdit->text());

}

void Dialog::ipAddressEdited()
{
    qDebug() << "IP Address" << _ui->ipAddressLineEdit->displayText().simplified();

    if ( _currentIPAddress == _ui->ipAddressLineEdit->displayText().simplified())
        return;

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
	connectColorBoxWebSocket(webSocketIP);
    mtxChoiceChanged(_ui->mtxChoiceComboBox->currentIndex());
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

void Dialog::mtxChoiceChanged(int index)
{
	if ( !_cbConnected )
    {
        qDebug() << "Not Connected";
        return;
    }

    // For demo put the box in "Live" mode by disabling FrameStore...
    OAIFrameStore frameStore;
    frameStore.setEnabled(false);
    _api.setFrameStore(frameStore);

    // Setup Correct Stage for Dynamic Update, or disable all matrices.
    OAIPipelineStages stages;
    OAIStage lutStage;
    switch ( index )
    {
    case 1: // "MTX2"
        lutStage.setEnabled(true);
        lutStage.setDynamic(true);
        stages.setM3x32(lutStage);
        lutStage.setEnabled(false);
        stages.setM3x33(lutStage);
        break;
    case 2: // "MTX3"
        lutStage.setEnabled(true);
        lutStage.setDynamic(true);
        stages.setM3x33(lutStage);
        lutStage.setEnabled(false);
        stages.setM3x32(lutStage);
        break;

    default:
    case 0:  //NONE - Turn both MTX to passthru
        lutStage.setEnabled(false);
        stages.setM3x32(lutStage);
        stages.setM3x33(lutStage);

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
    inRange.setValue(OAIPipelineRange::eOAIPipelineRange::SMPTEFULL);
    stages.setInRange(inRange);

    OAIColorimetry outColorimetry;
    outColorimetry.setValue(OAIColorimetry::eOAIColorimetry::BT_2020);
    stages.setOutColorimetry(outColorimetry);

    OAIPipelineRange outRange;
    outRange.setValue(OAIPipelineRange::eOAIPipelineRange::SMPTEFULL);
    stages.setInRange(outRange);

    OAITransfer outputTransferCharacteristics;
    outputTransferCharacteristics.setValue(OAITransfer::eOAITransfer::PQ);
    stages.setTransferCharacteristic(outputTransferCharacteristics);

    _api.setPipelineStages(stages);

	//Actually update the ColorBox with current settings.
    updateProcAmp(0);

}
void Dialog::updateProcAmp(int value)
{
    QElapsedTimer timer;
    timer.start();

	if ( !_cbConnected )
    {
        qDebug() << "Not Connected";
        return;
    }

    doProcAmp();

    if ( _printLoopTime )
    {
        qDebug() << timer.elapsed();
        _printLoopTime = false;
    }

}

void Dialog::resetParameters()
{
    double rotAngle = 0;
    _ui->procAmpHueSlider->setValue(0);
    _ui->procAmpBlackSlider->setValue(0);
    _ui->procAmpGainSlider->setValue(100);
    _ui->procAmpSaturationSlider->setValue(100);
    updateProcAmp(0);

}

void Dialog::mousePressEvent(QMouseEvent *event)
{
    QPoint mouseLocation(event->x(),event->y());

    setFocus();
}

void Dialog::keyPressEvent(QKeyEvent *event)
{
    // Press p to write matrix file.
    if(event->key() == Qt::Key_P )
    {
        _printMatrix = true;
        updateProcAmp(0);
    }
 
}


// Just come canned matrices to demostrate how to update matrix on ColorBox
static QMatrix4x4 qRGBSMPTEBlackNegativeOffsets(
            1,                             0,                           0,                -256 ,
            0,                             1,                           0,                -256 ,
            0,                             0,                           1,               -256 ,
            0,                             0,                           0,                1);

//NTV2_GBRSMPTE_to_YCbCr_Rec2020_Matrix
static QMatrix4x4 qRGBtoYCbCr2020SMPTENoOffset(
            .26270,   .67800,        .05930,   0 ,
            -0.142822,    -0.368591,      0.511414, 0,
             0.511414,   -0.470276,       -0.041138,      0 ,
            0,             0,                          0,                      1);

//NTV2_YCbCr_to_GBRSMPTE_Rec2020_Matrix:
static QMatrix4x4 qYCbCrtoRGB2020SMPTE(
           1,                              0,                            1.441681,              0 ,
            1,                         -0.160889,        -0.558594,    0 ,
            1,                          1.839386,                  0 ,               0 ,
            0,                        0,                                0,                1);

static QMatrix4x4 qRGBSMPTEBlackPositiveOffsets(
            1,                             0,                           0,               256 ,
            0,                             1,                           0,               256 ,
            0,                             0,                           1,               256 ,
            0,                             0,                           0,                1);

// ma2,ma0,ma1
// mb2,mb0,mb1
// mc2,mc0,mc1
//

void Dialog::doProcAmp()
{
    QString matrixChoiceString = _ui->mtxChoiceComboBox->currentText();
    if ( matrixChoiceString.startsWith("NONE") )
        return;

    double ycGain = (double) _ui->procAmpGainSlider->value()/100.0;
    double ycBlack = (double) _ui->procAmpBlackSlider->value()/10.0;;
    double rotAngle = (float) _ui->procAmpHueSlider->value();
    double satGain = (double) _ui->procAmpSaturationSlider->value()/100.0;

    QString ycGainString = QString::number(ycGain,'f',3);
    QString ycBlackString = QString::number(ycBlack,'f',3);
    QString rotAngleString = QString::number(rotAngle,'f',3);
    QString satGainString = QString::number(satGain,'f',3);

    _ui->procAmpGainValue->setText(ycGainString.rightJustified(8));
    _ui->procAmpBlackValue->setText(ycBlackString.rightJustified(8));
    _ui->procAmpHueValue->setText(rotAngleString.rightJustified(8));
    _ui->procAmpSatValue->setText(satGainString.rightJustified(8));

    QMatrix4x4 rotateMatrix;
    rotateMatrix.setToIdentity();
    rotateMatrix.rotate(-rotAngle,QVector3D(1,0,0));

    QMatrix4x4 procAmpMatrix;
    procAmpMatrix.setToIdentity();
    procAmpMatrix.scale(QVector3D(ycGain,ycGain*satGain,ycGain*satGain));
    ycBlack*=((3760.0-256.0)/100.0);
    procAmpMatrix.translate(QVector3D(ycBlack,0,0));

    // Combine Matrices
    QMatrix4x4 inverse_qRGBtoYCbCr2020SMPTENoOffset = qRGBtoYCbCr2020SMPTENoOffset.inverted();
    QMatrix4x4 finalMatrix = qRGBSMPTEBlackPositiveOffsets*inverse_qRGBtoYCbCr2020SMPTENoOffset*procAmpMatrix*rotateMatrix*qRGBtoYCbCr2020SMPTENoOffset*qRGBSMPTEBlackNegativeOffsets;

	ColorBoxDynamicMatrix cbMatrix;
	finalMatrix.copyDataTo(cbMatrix.matrix4x4);

    if ( _printMatrix )
    {
		qDebug().noquote() << "Qt Matrix" << Qt::endl << finalMatrix;

		writeMatrixFile(cbMatrix);
        _printMatrix =false;
    }

	if ( _cbConnected   )
    {
		QByteArray ba(reinterpret_cast<const char*>(&cbMatrix),sizeof(ColorBoxDynamicMatrix));
        ba.prepend(matrixChoiceString.toUtf8());
        emit load(ba);
    }

}

/*
 * Write Matrix File for ColorBox. This can be upldated to ColorBox Library.
 *
 */
void  Dialog::writeMatrixFile(ColorBoxDynamicMatrix m)
{

    QDateTime t = QDateTime::currentDateTime ();
    QString s = t.toString("yy.MM.dd.hh.mm.ss.zzz");

    s += ".ajamtx";
    qDebug() << "Writing File" << s;

    QFile outMTXFile(s);
    outMTXFile.open(QIODevice::WriteOnly);
    QTextStream out(&outMTXFile);   // we will serialize the data into the file
	out << "# Setup 3x3 Matrix applied to 12 bit components." << Qt::endl;
	out << "# Preoffset is a floating point offset applied. 256.0 is 12 bit black offset. " << Qt::endl;
	out << "# in R G B order. The Next two lines need to be contiguous" << Qt::endl;
	out << "3X3_PRE_OFFSET " << Qt::endl;
	out << 0.0 << " "<< 0.0 << " "<< 0.0 << Qt::endl;

	out << "# in R G B order. The Next two lines need to be contiguous" << Qt::endl;
	out << "3X3_POST_OFFSET " << Qt::endl;
	out << m.matrix4x4[3] << " " << m.matrix4x4[7] << "  " << m.matrix4x4[11] << Qt::endl;

	out << "# Rout = ((Rin-PRE_OFFSET_R)*r11+(Gin-PRE_OFFSET_G)*r12+(Bin-PRE_OFFSET_B)*r13)+POST_OFFSET_R;" << Qt::endl;
	out << "# Gout = ((Rin-PRE_OFFSET_R)*g21+(Gin-PRE_OFFSET_G)*g22+(Bin-PRE_OFFSET_B)*g23)+POST_OFFSET_G;" << Qt::endl;
	out << "# Bout = ((Rin-PRE_OFFSET_R)*b31+(Gin-PRE_OFFSET_G)*b32+(Bin-PRE_OFFSET_B)*b33)+POST_OFFSET_B;" << Qt::endl;
	out << "# Next 4 lines need to be contiguous and correspond to above coefs." << Qt::endl;
	out << "3X3_SIZE 3" << Qt::endl;
	out << m.matrix4x4[0] << " "<< m.matrix4x4[1] << " "<< m.matrix4x4[2] << Qt::endl;
	out << m.matrix4x4[4] << " "<< m.matrix4x4[5] << " "<< m.matrix4x4[6] << Qt::endl;
	out << m.matrix4x4[8] << " "<< m.matrix4x4[9] << " "<< m.matrix4x4[10] << Qt::endl;

    outMTXFile.close();
 }

