/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
/*!
 * DynamicFrameLoad
 * The demo demostrates how to interface to a ColorBox device via the REST API and WebSockets to upload a frame to ColorBox.
 * The demo limits itself to 1920x1080 frame size. It also demonstrates a "Calibration API".
 *
 * The basic idea is to load _frameBuffer with 1920x1080 RGB16BitUIntValues and send that to ColorBox over a WebSocket.
 * The buffer if prepended with "FS02" so ColorBox recognizes this as a frame to put in the frame store.
 * The REST API is used to set ColorBox into Dynamic Output Mode. You can send a frame with any valid rastersize this demo
 * is just limted to 1920x1080. You can use OAIVideoFormat to set the Framestore to any valid video format.
 * To actually send the frame to the colorbox from the demo press "Send Frame".
 *
 * There are two ways to preload a _frameBuffer in the code below
 * 1) handleSetFrameBufferValueButton - takes the 12 bit values in the QSpinBoxes and makes 16 bit values for the buffer.
 * 2) handleLoadImageButton( can load a .tif or .png file)
 *
 * The method updateFrameToColorBox shows the basic code needed to transfer a frame.
 *
 * Once the WebSocket is open frames can be continually transferred to the ColorBox. However, you cannot update frames faster than the
 * current framerate.
 *
 * This demo also shows our "Calibraion API" whereby a user-defined box over a background can be defined and that information
 * can be sent to the ColorBox without having to render a 16 bit RGB Frame and sending that. So no need for the Web Socket.
 * See:
 * void Dialog::handleSpinBoxes(double value)
 *
 * However, if the OAICalibrationPattern API can't describe the frame you need you can always fall back to rendering whatever
 * frame you need and transmitting it over a websocket.
 * In this demo the "Calibration Box" is sent to the Colorbox whenever a box spinbox parameter is changed making it dynamic
 * so no need to press the "Send Frame" button.
 *
 * The "Enable Text Overlay" feature was requested and is just a demonstration of what can done but doesn't have anything to do
 * with the API. Just uses Qt.
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
    connect(_ui->ipAddressLineEdit,&QLineEdit::editingFinished,this,&Dialog::ipAddressEdited);// API related slots
    connect(_ui->loadImagepushButton,&QPushButton::pressed,this,&Dialog::handleLoadImageButton);
    connect(_ui->setFrameBufferValueButton,&QPushButton::released,this,&Dialog::handleSetFrameBufferValueButton);
    connect(_ui->sendFramePushButton,&QPushButton::pressed,this,&Dialog::updateFrameToColorBox);
    connect(_ui->calibrationCheckBox,&QCheckBox::clicked,this,&Dialog::handleCalibrationCheckbox);
    connect(_ui->enableOverlaycheckBox,&QCheckBox::clicked,this,&Dialog::handleOverlayCheckbox);
    connect(_ui->overlayTestLineEdit, &QLineEdit::textChanged,this,&Dialog::handleOverlayTextChanged);

    connect(_ui->xStartSpinBox, QOverload<double>::of(&QDoubleSpinBox::valueChanged),
            [=](double value){ handleSpinBoxes(value); });
    connect(_ui->yStartSpinBox, QOverload<double>::of(&QDoubleSpinBox::valueChanged),
            [=](double value){ handleSpinBoxes(value); });
    connect(_ui->xWidthSpinBox, QOverload<double>::of(&QDoubleSpinBox::valueChanged),
            [=](double value){ handleSpinBoxes(value); });
    connect(_ui->yHeightSpinBox, QOverload<double>::of(&QDoubleSpinBox::valueChanged),
            [=](double value){ handleSpinBoxes(value); });

    // API related slots
    connect(&_api, &OAIDefaultApi::getFrameStoreSignal, this, &Dialog::handleGetFrameStore);
    connect(&_api, &OAIDefaultApi::getFrameStoreSignalE, this, &Dialog::handleGetFrameStoreError);

    recallSettings();

    _webSocketThread->start();
    ipAddressEdited();

    _frameBuffer.reserve(1920*1080*6); // Just for demo limit to 1920x1080.
    _frameBufferWithOverlay.reserve(1920*1080*6); // Just for demo limit to 1920x1080.

    _width = 1920;
    _height = 1080;

    // Initialize to a test pattern.
    if ( !loadTIFFFile("ebu_hdr-hlg_colour_bars_1920_1080_rgb444p16be_lzw.tif"))
        handleSetFrameBufferValueButton();

    overLayText();
    updatePreview();


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
        QByteArray ba;
        if ( _ui->enableOverlaycheckBox->isChecked())
            ba.setRawData(reinterpret_cast<const char*>(_frameBufferWithOverlay.data()),_frameBufferWithOverlay.size());
        else
            ba.setRawData(reinterpret_cast<const char*>(_frameBuffer.data()),_frameBuffer.size());

        //QByteArray ba(reinterpret_cast<const char*>(_frameBuffer.data()),_frameBuffer.size());
        if (_alphaMode ) /// This will be used for overlays. NOT Functional Yet.
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
#include <QPainter>
#include <QFontDatabase>
void Dialog::overLayText()
{
    QImage image(QSize(_width,_height),QImage::Format_ARGB32);
    memset(image.bits(),0,image.sizeInBytes());
    QPainter painter(&image);
    painter.setFont(QFont("Ubuntu Mono", 69, QFont::Bold));
    QFont font = QFontDatabase::systemFont(QFontDatabase::FixedFont);
    QColor penColor ( 220, 220 , 220, 255 );
    painter.setPen(QPen(penColor));
    painter.drawText(QRect(100,100,1900,900),_ui->overlayTestLineEdit->text());

    _frameBufferWithOverlay = _frameBuffer;
    uint8_t* ovl = image.bits();
    uint32_t ovlSize = image.sizeInBytes();
    uint16_t* img = (uint16_t*)_frameBufferWithOverlay.data();
    uint32_t b = 0;
    uint32_t g = 0;
    uint32_t r = 0;
    uint32_t a = 0;
    int size = _width * 6 * _height;

    // Composite the overlay over the output image
    for (uint32_t i = 0; i < size/6; i++)
    {
        if (i < ovlSize/4)
        {
            b = (*ovl++) << 8;
            g = (*ovl++) << 8;
            r = (*ovl++) << 8;
            a = ((*ovl) << 8) + (*ovl);
            ovl++;
        }
        *img = ((r * a) + ((uint32_t)(*img) * (0xffff - a))) / 0xffff;
        img++;
        *img = ((g * a) + ((uint32_t)(*img) * (0xffff - a))) / 0xffff;
        img++;
        *img = ((b * a) + ((uint32_t)(*img) * (0xffff - a))) / 0xffff;
        img++;
    }

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

    overLayText();
    if ( _ui->calibrationCheckBox->isChecked() )
        handleSpinBoxes(0);
    else
        updatePreview();

    _alphaMode = false;

    this->setWindowTitle(QString("RGB Value %1 %2 %3").arg(_ui->redSpinBox->value()).arg(_ui->greenSpinBox->value()).arg(_ui->blueSpinBox->value()));
}


void Dialog::handleLoadImageButton()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open 16 Bit Tiff  File "),
                                                    ".",
                                                    tr(".image Files (*.tif *.tiff )"));

    if ( fileName.length() == 0 )
        return;

    if ( (fileName.indexOf(".png",0,Qt::CaseInsensitive) != -1) )
    {
        ///NOTE: png file not supported now.
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

    overLayText();
    updatePreview();

}

void Dialog::handleSpinBoxes(double value)
{
    bool calibrationBoxChecked = _ui->calibrationCheckBox->isChecked();
    if ( _cbConnected && calibrationBoxChecked)
    {

        OAIFrameStore frameStore;
        frameStore.setEnabled(true);
        frameStore.setDynamic(true);
        OAIVideoFormat format;
        format.setValue(OAIVideoFormat::eOAIVideoFormat::_1080P23_98); /// Optional, can also set to AUTO which means it uses the Input Video Format.
        frameStore.setFormat(format);
        _api.setFrameStore(frameStore);

        double xStart = _ui->xStartSpinBox->value();
        double yStart = _ui->yStartSpinBox->value();
        double xWidth = _ui->xWidthSpinBox->value();
        double yHeight = _ui->yHeightSpinBox->value();

        OAICalibrationPattern calibration;
        OAIPatternColor bgColor;
        bgColor.setDepth(12);
        bgColor.setRed(0);
        bgColor.setBlue(0);
        bgColor.setGreen(0);
        OAIPatternColor fgColor;
        fgColor.setDepth(12);
        fgColor.setRed(_ui->redSpinBox->value());
        fgColor.setBlue(_ui->greenSpinBox->value());
        fgColor.setGreen(_ui->blueSpinBox->value());
        OAIPatternRect rect;
        rect.setXstart(xStart);
        rect.setYstart(yStart);
        rect.setWidth(xWidth);
        rect.setHeight(yHeight);
        calibration.setBgColor(bgColor);
        calibration.setFgColor(fgColor);
        calibration.setFgRect(rect);
        _api.setCalibrationPattern(calibration);

        // show same box on local preview
        setCalibrationPattern(calibration);

        this->setWindowTitle("Calibration Box");
    }

}

void Dialog::handleCalibrationCheckbox(bool checked)
{
    if ( checked )
        handleSpinBoxes(0);

}
void Dialog::handleOverlayCheckbox(bool checked)
{
    overLayText();
    updatePreview();
}

void Dialog::handleOverlayTextChanged(const QString &text)
{
    overLayText();
    updatePreview();

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

        this->setWindowTitle(fileName);
    }
    else
        qDebug() << "Not a Valid Image";
}

bool Dialog::loadTIFFFile(QString fileName)
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

        // For now only 1920x1080 16 bit tiff files supported. A few are included in the bit directory.
        if (  _width != 1920 || _height != 1080 )
        {
            return false;
        }

        if ( _bitsPerComponent != 16 )
        {
            return false;
        }
        else
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

        TIFFClose(tif);

        this->setWindowTitle(fileName);
        return true;

    }
    else
    {
         return false;
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
        uint16_t* sourceBuffer;
        if ( _ui->enableOverlaycheckBox->isChecked())
            sourceBuffer = reinterpret_cast<uint16_t*>(_frameBufferWithOverlay.data());
        else
            sourceBuffer = reinterpret_cast<uint16_t*>(_frameBuffer.data());

        for ( uint32_t i=0; i<_width*_height;i++)
        {
            *destBuffer++ = *sourceBuffer++>>8;
            *destBuffer++ = *sourceBuffer++>>8;
            *destBuffer++ = *sourceBuffer++>>8;
        }
    }
    else if ( _frameBuffer.size() == (int)(_height*_width*4)) ///NOT Functional Yet.
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

void Dialog::setCalibrationPattern(const OpenAPI::OAICalibrationPattern& calibrationPattern)
{
    qDebug() << "setCalibrationPattern";

        QElapsedTimer timer;
        timer.start();

        OpenAPI::OAIPatternColor bgColor = calibrationPattern.getBgColor();
        OpenAPI::OAIPatternColor fgColor = calibrationPattern.getFgColor();
        uint16_t bgRed = bgColor.getRed()<<6;
        uint16_t bgGreen = bgColor.getGreen()<<6;
        uint16_t bgBlue = bgColor.getBlue()<<6;
        uint16_t boxRed = fgColor.getRed()<<6;
        uint16_t boxGreen = fgColor.getGreen()<<6;
        uint16_t boxBlue = fgColor.getBlue()<<6;

        OpenAPI::OAIPatternRect rect = calibrationPattern.getFgRect();
        float xStart = rect.getXstart();
        float yStart = rect.getYstart();
        float xSize = rect.getWidth();
        float ySize = rect.getHeight();

        _frameBuffer.resize(static_cast<int32_t>(_width*_height*6));


        uint32_t numBoxLines;
        uint32_t numBoxPixelsPerLine;
        uint32_t firstBoxLine;
        uint32_t firstBoxPixel;
        firstBoxPixel = xStart*_width;
        if ( firstBoxPixel >= _width)
            firstBoxPixel = 0;

        firstBoxLine = yStart*_height;
        if ( firstBoxLine >= _height)
            firstBoxLine = 0;

        numBoxPixelsPerLine = xSize*(_width-1);
        if ( (firstBoxPixel+numBoxPixelsPerLine) >= _width)
            numBoxPixelsPerLine = (_width-firstBoxPixel);

        numBoxLines = ySize*(_height-1);
        if ( (firstBoxLine+numBoxLines) >= _height )
            numBoxLines = (_height-firstBoxLine);

        qDebug() << firstBoxPixel << firstBoxLine << numBoxPixelsPerLine << numBoxLines;

        RGB16BitUIntValues Box{boxRed,boxGreen,boxBlue};
        RGB16BitUIntValues Bkgd{bgRed,bgGreen,bgBlue};

        RGB16BitUIntValues* buffer = _frameBuffer.data();
        for  ( uint32_t lineCount = 0;lineCount < _height; lineCount++)
        {
            for  ( uint32_t pixelCount = 0;pixelCount < _width; pixelCount++)
            {
                if ( lineCount  < firstBoxLine || lineCount > (firstBoxLine+numBoxLines))
                {
                    *buffer++ = Bkgd;
                }
                else
                {
                    if ( pixelCount  < firstBoxPixel || pixelCount > (firstBoxPixel+numBoxPixelsPerLine))
                    {
                        *buffer++ = Bkgd;
                    }
                    else
                    {
                        *buffer++ = Box;
                    }
                }

            }
        }
        updatePreview();

}
