/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
/*!
 * DynamicFrameLoad
 * The demo demostrates how to interface to a ColorBox device via the REST API and WebSockets to upload a frame to ColorBox.
 * The demo limits itself to 1920x1080 frame size.
 *
 * The basic idea is to load _frameBuffer with 1920x1080 RGB16BitUIntValues and send that to ColorBox over a WebSocket.
 * The buffer if prepended with "FS02" so ColorBox recognizes this as a frame to put in the frame store.
 * The REST API is used to set ColorBox into Dynamic Output Mode.
 *
 * There are two ways to preload a _frameBuffer in the code below
 * 1) handleSetFrameBufferValueButton - takes the 12 bit values in the QSpinBoxes and makes 16 bit values for the buffer.
 * 2)handleLoadImageButton( can load a .tif or .png file)
 *
 * The method updateFrameToColorBox shows the basic code needed to transfer a frame.
 *
 * Once the WebSocket is open frames can be continually transferred to the ColorBox. You cannot update frames faster than the
 * current framerate.
 */

#include "dialog.h"
#include "ui_dialog.h"
#include <QFileDialog>
#include <QDebug>
#include <QElapsedTimer>
#include <QMessageBox>
#include "tiffio.h"

using namespace OpenAPI;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent),
      _cbConnected(false),
      _alphaMode(false),
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
	connect(this, &Dialog::loadFrame, _webSocketLoad, &AJAWebSocketInterface::sendBinaryMessage);
	connect(this, &Dialog::connectColorBoxWebSocket, _webSocketLoad, &AJAWebSocketInterface::connectColorBoxWebSocket);

    // UI related Code
    connect(_ui->ipAddressLineEdit,SIGNAL(editingFinished()),this,SLOT(ipAddressEdited()));
    connect(_ui->loadImagepushButton,SIGNAL (pressed()),this,SLOT (handleLoadImageButton()));
    connect(_ui->setFrameBufferValueButton,SIGNAL (released()),this,SLOT (handleSetFrameBufferValueButton()));
    connect(_ui->sendFramePushButton,SIGNAL (pressed()),this,SLOT (updateFrameToColorBox()));

    // API related slots
    connect(&_api, &OAIDefaultApi::getFrameStoreSignal, this, &Dialog::handleGetFrameStore);
    connect(&_api, &OAIDefaultApi::getFrameStoreSignalE, this, &Dialog::handleGetFrameStoreError);

    recallSettings();

    _webSocketThread->start();
    ipAddressEdited();

    _frameBuffer.reserve(1920*1080*6); // Just for demo limit to 1920x1080.

    _width = 1920;
    _height = 1080;

    // Initialize to a color
    handleSetFrameBufferValueButton();

    this->setFocus();
}

Dialog::~Dialog()
{
    saveSettings();
    delete _ui;
}

void Dialog::recallSettings()
{
	QSettings settings(QSettings::UserScope, "aja", "ColorBoxDynamicFrameLoad");
    _ui->ipAddressLineEdit->setText(settings.value("IPAddress").toString());

}

void Dialog::saveSettings()
{
	QSettings settings(QSettings::UserScope, "aja", "ColorBoxDynamicFrameLoad");
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
    _api.getFrameStore();
}

void Dialog::handleGetFrameStore(OpenAPI::OAIFrameStore frameStore)
{
    _cbConnected = true;
    _ui->connectLabel->setText("CONNECTED");
    qDebug() << "Current FrameStore Video Format " << frameStore.getFormat().asJson();

    // Get Web Socket Going.
	// don't want any port number from URL
	QString webSocketIP = _currentIPAddress.split(":").at(0);
	connectColorBoxWebSocket(webSocketIP);

}

void Dialog::handleGetFrameStoreError(OpenAPI::OAIFrameStore summary , QNetworkReply::NetworkError error_type, QString error_str)
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


void Dialog::updateFrameToColorBox()
{

    QElapsedTimer timer;
    timer.start();

	// Setup ColorBox for Dynamic "Output" mode via REST and then send Frame. Frame Can either be a Image("FS02") or Overlay("FSA2")
    OAIFrameStore frameStore;
    if ( _cbConnected)
    {
        OAIFrameStore frameStore;

        QByteArray ba(reinterpret_cast<const char*>(_frameBuffer.data()),_frameBuffer.size());
        if (_alphaMode ) /// This will be used for overlays.
        {
            ////////////////////Currently not working
            OAIVideoFormat format;
            format.setValue(OAIVideoFormat::eOAIVideoFormat::AUTO);
            frameStore.setFormat(format);

            frameStore.setEnabled(false);
           _api.setFrameStore(frameStore);

            ba.prepend("FSA2");
            emit loadFrame(ba);

        }
        else
        {
            // Full Image
            frameStore.setEnabled(true);
            frameStore.setDynamic(true);

            OAIVideoFormat format;
            format.setValue(OAIVideoFormat::eOAIVideoFormat::_1080P23_98);
            frameStore.setFormat(format);
            _api.setFrameStore(frameStore);

            ba.prepend("FS02");
            emit loadFrame(ba);
        }

    }
    else
    {

        QMessageBox messageBox;
		messageBox.setText("ColorBox Not Connected. Enter the IP Address of a ColorBox Device");
        messageBox.exec();

    }
    _ui->transferTimeLabel->setText(QString("%1 ms").arg(timer.elapsed()));

}

void Dialog::handleSetFrameBufferValueButton()
{
    RGB16BitUIntValues pixelValue;

    pixelValue.rValue = static_cast<uint16_t>(_ui->redSpinBox->value()<<4);
    pixelValue.gValue = static_cast<uint16_t>(_ui->greenSpinBox->value()<<4);
    pixelValue.bValue = static_cast<uint16_t>(_ui->blueSpinBox->value()<<4);

    _frameBuffer.resize(static_cast<int32_t>(_width*_height*6));
    for ( int32_t pixel = 0; pixel < static_cast<int32_t>(_width*_height); pixel++ )
        _frameBuffer[pixel] =  pixelValue ;

    updatePreview();
    _alphaMode = false;

    this->setWindowTitle(QString("RGB Value %1 %2 %3").arg(_ui->redSpinBox->value()).arg(_ui->greenSpinBox->value()).arg(_ui->blueSpinBox->value()));
}


void Dialog::handleLoadImageButton()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open 16 Bit Tiff  File Or Overlay Overlay File"),
                                                    ".",
                                                    tr(".image Files (*.tif *.tiff *.png )"));

    if ( fileName.length() == 0 )
        return;
    if ( (fileName.indexOf(".png",0,Qt::CaseInsensitive) != -1) )
    {
        qDebug() << "reading PNG File";
        loadPNGFile(fileName);
    }
    else if ( (fileName.indexOf(".tif",0,Qt::CaseInsensitive) != -1) ) {
        qDebug() << "reading TiffFile";
        loadTIFFFile(fileName);
    }
    else if ( (fileName.indexOf(".tiff",0,Qt::CaseInsensitive) != -1) ) {
        qDebug() << "reading TiffFile";
        loadTIFFFile(fileName);
    }

}

void Dialog::loadPNGFile(QString fileName)
{
    // For Overlay
    QImage image(fileName);

    if ( image.width() == 1920 && image.height() == 1080)
    {
        image.convertToFormat(QImage::Format_ARGB32);
        _alphaMode = true;
        _frameBuffer.resize(static_cast<int32_t>(_width*_height*4));
        uint8_t* rgbaBuffer = reinterpret_cast<uint8_t*>(_frameBuffer.data());
        for ( uint32_t lineCount=0; lineCount<_height; lineCount++)
        {
            for ( uint32_t pixelCount = 0; pixelCount < _width; pixelCount++)
            {
                QColor c = image.pixelColor(pixelCount,lineCount);

                *rgbaBuffer++ = c.blue();
                *rgbaBuffer++ = c.green();
                *rgbaBuffer++ = c.red();
                *rgbaBuffer++ = c.alpha();

            }
        }

        updatePreview();

        this->setWindowTitle(fileName);
    }
    else
        qDebug() << "Not a Valid Image";
}

void Dialog::loadTIFFFile(QString fileName)
{
    TIFF* tif = TIFFOpen(fileName.toStdString().c_str(), "r");
    if (tif)
    {

        uint16_t compressionType;
        uint16_t planarConfig;

        TIFFGetField(tif, TIFFTAG_IMAGEWIDTH, &_width);
        TIFFGetField(tif, TIFFTAG_IMAGELENGTH, &_height);
        TIFFGetField(tif, TIFFTAG_BITSPERSAMPLE, &_bitsPerComponent);

        TIFFGetField(tif, TIFFTAG_COMPRESSION, &compressionType);
        TIFFGetField(tif, TIFFTAG_PLANARCONFIG, &planarConfig);
        TIFFGetField(tif, TIFFTAG_SAMPLESPERPIXEL, &_samplesPerPixel);

        if (  _width != 1920 || _height != 1080 )
        {
            return;
        }

        if ( _bitsPerComponent == 16 )
        {
            _frameBuffer.resize(static_cast<int32_t>(_width*_height*6));

            uint32_t scanLineSize = static_cast<uint32_t>(TIFFScanlineSize(tif));
            tdata_t  buf = _TIFFmalloc(scanLineSize*_height);
            char*  tiffDataBuffer = reinterpret_cast<char*>(buf);
            for (uint32_t row = 0; row < _height; row++)
            {
                TIFFReadScanline(tif, tiffDataBuffer, row);
                tiffDataBuffer += scanLineSize;
            }

            RGB16BitUIntValues* fb = reinterpret_cast<RGB16BitUIntValues*>(_frameBuffer.data());
            for ( uint32_t lineCount=0; lineCount<_height; lineCount++)
            {
                uint16_t* tiffWordDataBuffer = reinterpret_cast<uint16_t*>(reinterpret_cast<uint8_t*>(buf)+(lineCount*scanLineSize));

                for ( uint32_t pixelCount = 0; pixelCount < _width; pixelCount++)
                {
                    uint16_t red      = *tiffWordDataBuffer++;
                    uint16_t green    = *tiffWordDataBuffer++;
                    uint16_t blue     = *tiffWordDataBuffer++;
                    fb->rValue = red;
                    fb->gValue = green;
                    fb->bValue = blue;
                    if ( _samplesPerPixel == 4)
                        tiffWordDataBuffer++;
                    fb++;
                }
            }
            _alphaMode = false;
        }
        else if ( _bitsPerComponent == 8  && _samplesPerPixel == 4)
        {
            // Overlay
            _frameBuffer.resize(static_cast<int32_t>(_width*_height*4));
            uint32_t scanLineSize = static_cast<uint32_t>(TIFFScanlineSize(tif));
            tdata_t  buf = _TIFFmalloc(scanLineSize*_height);
            char*  tiffDataBuffer = reinterpret_cast<char*>(buf);
            for (uint32_t row = 0; row < _height; row++)
            {
                TIFFReadScanline(tif, tiffDataBuffer, row);
                tiffDataBuffer += scanLineSize;
            }

            uint8_t* rgbaBuffer = reinterpret_cast<uint8_t*>(_frameBuffer.data());
            for ( uint32_t lineCount=0; lineCount<_height; lineCount++)
            {
                uint8_t* tiffByteDataBuffer = (uint8_t*)((uint8_t*)buf+(lineCount*scanLineSize));

                for ( uint32_t pixelCount = 0; pixelCount < _width; pixelCount++)
                {
                    uint8_t red      = *tiffByteDataBuffer++;
                    uint8_t green  = *tiffByteDataBuffer++;
                    uint8_t blue     = *tiffByteDataBuffer++;
                    uint8_t alpha   = *tiffByteDataBuffer++;

					// Note swapping red and blue to match ColorBox HW setup
                    *rgbaBuffer++ = blue;
                    *rgbaBuffer++ = green;
                    *rgbaBuffer++ = red;
                    *rgbaBuffer++ = alpha;

                }
            }
            _alphaMode = true;
        }
        TIFFClose(tif);

        updatePreview();

        this->setWindowTitle(fileName);

    }
}




void Dialog::updatePreview()
{
    // convert to 8 bit RGB for preview
    uint8_t* previewBuffer = new uint8_t[_height*_width*3];
    uint8_t* destBuffer = previewBuffer;
	if ( _frameBuffer.size() == (int)(_height*_width*6))
    {
        // Image
        uint16_t* sourceBuffer = reinterpret_cast<uint16_t*>(_frameBuffer.data());
        for ( uint32_t i=0; i<_width*_height;i++)
        {
            *destBuffer++ = *sourceBuffer++>>8;
            *destBuffer++ = *sourceBuffer++>>8;
            *destBuffer++ = *sourceBuffer++>>8;
        }
    }
	else if ( _frameBuffer.size() == (int)(_height*_width*4))
    {
        // Overlay
        qDebug() << "Overlay";
        uint8_t* sourceBuffer = reinterpret_cast<uint8_t*>(_frameBuffer.data());
        for ( uint32_t i=0; i<_width*_height;i++)
        {
            uint8_t blue =  *sourceBuffer++;
            uint8_t green =  *sourceBuffer++;
            uint8_t red =  *sourceBuffer++;
            *destBuffer++ = red;
            *destBuffer++ = green;
            *destBuffer++ = blue;
            sourceBuffer++;
         }
    }

    QImage previewImage(reinterpret_cast<uchar *>(previewBuffer), static_cast<int>(_width), static_cast<int>(_height), QImage::Format_RGB888);

    previewImage = previewImage.scaled(_ui->originalPreview->width(),_ui->originalPreview->height(),Qt::IgnoreAspectRatio,Qt::FastTransformation);
    QPixmap pixmap = QPixmap::fromImage(previewImage);
    _ui->originalPreview->setPixmap(pixmap);
}
