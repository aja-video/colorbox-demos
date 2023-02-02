/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
/*!
 * FrameGrab
 *
 * This uses a websocket to grab an uncompressed image from ColorBox.
 *
 *  It can also use the NTV2 SDK to parse the metadata for the grabbed image. See "SUPPORT_ANC" define.
 *  see updatePreview() for how the ANC is parsed.
 *
 *  The unprocessed input or the processed output can be captured. See updateFrameFromColorBox() for the
 *  Websocket Messages used. If the processed output is chosen then the overlay will also be captured if the
 *  Overlay widget is On. See PreviewDemo for controlling overlay on/off.
 *
 */

#include "dialog.h"
#include "ui_dialog.h"
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>
#include "tiffio.h"

using namespace OpenAPI;

static bool isDropFrame(OpenAPI::OAIVideoFormat::eOAIVideoFormat format);

// This is needed to compile with older Qt versions like Qt 5.13.2
#if QT_VERSION < QT_VERSION_CHECK(5, 14, 0)
namespace Qt {
	QTextStream &endl(QTextStream &s)
	{
		return ::endl(s);
	}
	QTextStream &hex(QTextStream &s)
	{
		return ::hex(s);
	}
}
#endif

Dialog::Dialog(QWidget *parent)
    : QDialog(parent),
      _width(0),
      _height(0),
      _cbConnected(false),
	  _ui(new Ui::Dialog)
{
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
	connect(this, &Dialog::triggerGrab, _webSocketLoad, &AJAWebSocketInterface::sendTextMessage);
	connect(_webSocketLoad, &AJAWebSocketInterface::binaryMessageReceived,this, &Dialog::updateGrabBinary);
	connect(this, &Dialog::connectColorBoxWebSocket, _webSocketLoad, &AJAWebSocketInterface::connectColorBoxWebSocket);

    // UI related Code
    connect(_ui->ipAddressLineEdit,&QLineEdit::editingFinished,this, &Dialog::ipAddressEdited);
    connect(_ui->grabFramePushButton,&QPushButton::pressed,this,&Dialog::updateFrameFromColorBox);
    connect(_ui->saveAsTiffPushButton,&QPushButton::pressed,this,&Dialog::writeTIFFFile);
    connect(_ui->continuousGrabCheckBox,&QCheckBox::pressed,this,&Dialog::updateFrameFromColorBox);
    connect(_ui->previewComboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(previewChoiceChanged(int)));

    // API related slots
    connect(&_api, &OAIDefaultApi::getSdiInputStatusSignal, this, &Dialog::handleGetSDIStatus);
    connect(&_api, &OAIDefaultApi::getSdiInputStatusSignalE, this, &Dialog::handleGetSDIStatusError);

    recallSettings();

	_webSocketThread->start();

	ipAddressEdited();

	_frameBuffer.reserve(3840*2160*6);

    this->setFocus();
}

Dialog::~Dialog()
{
    saveSettings();
    delete _ui;
}

void Dialog::recallSettings()
{
	QSettings settings(QSettings::UserScope, "aja", "ColorBoxFrameGrab");
    _ui->ipAddressLineEdit->setText(settings.value("IPAddress").toString());

}

void Dialog::saveSettings()
{
	QSettings settings(QSettings::UserScope, "aja", "ColorBoxFrameGrab");
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
    _api.getSdiInputStatus();
}

void Dialog::handleGetSDIStatus(OpenAPI::OAISDI status)
{
    _cbConnected = true;
    _ui->connectLabel->setText("CONNECTED");

    // Get Web Socket Going.
	// don't want any port number from URL
	QString webSocketIP = _currentIPAddress.split(":").at(0);
	emit connectColorBoxWebSocket(webSocketIP);

    _status = status;
    qDebug() << status.getFormat().asJson();

}


void Dialog::handleGetSDIStatusError(OpenAPI::OAISDI summary, QNetworkReply::NetworkError error_type, QString error_str)
{
    Q_UNUSED(summary)
    Q_UNUSED(error_type)

    qDebug() << error_str;
    _ui->connectLabel->setText("NOT CONNECTED");
    _cbConnected = false;

}

void Dialog::previewChoiceChanged(int choice)
{
    updateFrameFromColorBox();
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


void Dialog::updateGrabBinary(const QByteArray &data)
{
	// The QByteArray data is a json string (QString) from an OAIFrame
	// on the sending side:
	// OAIFrame -> QString -> QByteArray
	// frame.asJson().toUtf8()
	//
	// here:
	// QByteArray -> QString -> OAIFrame
	// OAIFrame frame(QString::fromUtf8(data));

	if (_cbConnected)
	{
		QJsonDocument doc = QJsonDocument::fromJson(data);
		OAIFrame frame;
		frame.fromJsonObject(doc.object());

		QByteArray frameBA = frame.getImage();
		uint32_t frameSize = frameBA.size();
		switch ( frameSize )
		{
		case 12441600:
			_width = 1920;
			_height = 1080;
			break;
        case 13271040:
            _width = 2048;
            _height = 1080;
            break;
        case 49766400:
			_width = 3840;
			_height = 2160;
			break;
        case 53084160:
            _width = 4096;
            _height = 2160;
            break;
        case 5529600:
            _width = 1280;
            _height = 720;
            break;
		default:
			_width = 0;
			_height = 0;
			break;
		}

		if ( _width != 0 )
		{
#ifdef SUPPORT_ANC
			QByteArray ancBA = frame.getAncData();

			// Anc data transfered from ColorBox as blob where 1st half is from F1 and second form F2(if available)
			NTV2_POINTER ancF1Pointer(ancBA.data(), ancBA.size()/2);
			NTV2_POINTER ancF2Pointer(&ancBA.data()[ ancBA.size()/2], ancBA.size()/2);

			_ancDataList.Clear();
			AJAAncillaryList::SetFromDeviceAncBuffers(ancF1Pointer, ancF2Pointer, _ancDataList);
#endif
            _userData1 =  frame.getUserData1();
            _userData2 = frame.getUserData2();

			_frameBuffer.resize(_width*_height*6);
			memcpy(_frameBuffer.data(),frameBA.data(),frameSize);
			updatePreview();
		}

		qDebug() << "Frame Grab (binary) Successful";
	}

	_ui->transferTimeLabel->setText(QString("%1 ms").arg(_timer.elapsed()));

	// test grabbing as fast as possible by triggering another grab
    if (_ui->continuousGrabCheckBox->isChecked() )
    {
        if (_cbConnected)
        {
            updateFrameFromColorBox();
        }
    }

	// end test
}

void Dialog::updateFrameFromColorBox()
{
	if ( _cbConnected)
	{
		_timer.start();
        QString msg("FRAMEGRAB_OUTPUT");
        if ( _ui->previewComboBox->currentText() == "Grab Input" )
            msg = "FRAMEGRAB_INPUT";
        emit triggerGrab(msg);
    }
}

void Dialog::updatePreview()
{
    // convert to 8 bit RGB for preview
    uint8_t* previewBuffer = new uint8_t[_height*_width*3];
    uint8_t* destBuffer = previewBuffer;

    // Image
    uint16_t* sourceBuffer = reinterpret_cast<uint16_t*>(_frameBuffer.data());
    for ( uint32_t i=0; i<_width*_height;i++)
    {
        *destBuffer++ = *sourceBuffer++>>8;
        *destBuffer++ = *sourceBuffer++>>8;
        *destBuffer++ = *sourceBuffer++>>8;
    }

    // Preview Image
    QImage previewImage(reinterpret_cast<uchar *>(previewBuffer), static_cast<int>(_width), static_cast<int>(_height), QImage::Format_RGB888);
    previewImage = previewImage.scaled(_ui->originalPreview->width(),_ui->originalPreview->height(),Qt::IgnoreAspectRatio,Qt::FastTransformation);
    QPixmap pixmap = QPixmap::fromImage(previewImage);

    _ui->originalPreview->setPixmap(pixmap);

    // Information Window
    QString metaDataString;
    QTextStream ts(&metaDataString);
	ts << "Width: " << _width << Qt::endl;
	ts << "Height: " <<  _height << Qt::endl;
	ts << "User Data String1: " << Qt::endl;
	ts << " " << _userData1 << Qt::endl;
	ts << "User Data String2: " << Qt::endl;
	ts << " " << _userData2 << Qt::endl;

#ifdef SUPPORT_ANC

    std::stringstream out;
    out << _ancDataList;
    qDebug() << QString::fromStdString(out.str());

    std::string msgVPIDFormat("No");

    uint32_t numAncDataPkts =  _ancDataList.CountAncillaryData();
    for ( uint32_t ancCount = 0; ancCount < numAncDataPkts; ancCount++ )
    {
        AJAAncillaryData *ancData =  _ancDataList.GetAncillaryDataAtIndex (ancCount);
        ts << Qt::hex << "DID/SID: " <<  "0x" << ancData->GetDID() << "/" <<  "0x" << ancData->GetSID() << Qt::endl;
        if ((ancData->GetDID() == 0x41) &&
                (ancData->GetSID() == 0x01) &&
                (ancData->GetLocationDataChannel() == AJAAncillaryDataChannel_Y))
        {
            //SMPTE-352M
            uint32_t data = 0;
            data |= ancData->GetPayloadByteAtIndex(0) << 24;
            data |= ancData->GetPayloadByteAtIndex(1) << 16;
            data |= ancData->GetPayloadByteAtIndex(2) << 8;
            data |= ancData->GetPayloadByteAtIndex(3) << 0;

            CNTV2VPID vpid(data);
            std::string vf = NTV2VideoFormatToString(vpid.GetVideoFormat());
            msgVPIDFormat = ::NTV2VideoFormatToString(vpid.GetVideoFormat()) ;
            ts << "VPID Format: " <<  msgVPIDFormat.c_str() << "\n";

        }
        if( (ancData->GetDID() == 0x60) && (ancData->GetSID() == 0x60))
        {
            AJAAncillaryData_Timecode_ATC ancTime(ancData);
            AJATimeCode ajaTime;
            AJATimeBase ajaBase;
            std::string stdTime;
            AJAAncillaryData_Timecode_ATC_DBB1PayloadType tcType;

            ancTime.ParsePayloadData();
            ancTime.GetDBB1PayloadType(tcType);
            ancTime.GetTimecode(ajaTime, ajaBase);

            bool timecodePres(false);
           if (isDropFrame(_status.getFormat().getValue()))
                ajaTime.QueryString(stdTime, ajaBase, true);
            else
                ajaTime.QueryString(stdTime, ajaBase, false);

            if (tcType == AJAAncillaryData_Timecode_ATC_DBB1PayloadType_LTC)
            {
                 ts << "LTC: " <<  stdTime.c_str() << "\n";
                timecodePres = true;
            }
            else if ((tcType == AJAAncillaryData_Timecode_ATC_DBB1PayloadType_VITC1) ||
                    (tcType == AJAAncillaryData_Timecode_ATC_DBB1PayloadType_VITC2))
            {
                ts << "VITC: " <<  stdTime.c_str() << "\n";
                timecodePres = true;
            }

        }
        ts <<  "\n";

    }
#endif

    _ui->metaDataWindow->setText(metaDataString);

}


// write a 16 bit tiff RGB file.
void Dialog::writeTIFFFile()
{
    QString fileName = QFileDialog::getSaveFileName(NULL, tr("Save File"),
                               ".",
                               tr("TIFF Files (*.tif)"));

    if ( fileName.length() == 0 ) return;

    TIFF *tif= TIFFOpen(fileName.toStdString().c_str(), "w");
    if ( tif == NULL  ) return;

    uint32_t sampleperpixel = 3;
    TIFFSetField (tif, TIFFTAG_IMAGEWIDTH, _width);  // set the width of the image
    TIFFSetField(tif, TIFFTAG_IMAGELENGTH, _height);    // set the height of the image
    TIFFSetField(tif, TIFFTAG_SAMPLESPERPIXEL, sampleperpixel);   // set number of channels per pixel
    TIFFSetField(tif, TIFFTAG_BITSPERSAMPLE, 16);    // set the size of the channels
    TIFFSetField(tif, TIFFTAG_ORIENTATION, ORIENTATION_TOPLEFT);    // set the origin of the image.
    TIFFSetField(tif, TIFFTAG_PLANARCONFIG, PLANARCONFIG_CONTIG);
    TIFFSetField(tif, TIFFTAG_PHOTOMETRIC, PHOTOMETRIC_RGB);
    tsize_t linebytes = sampleperpixel * 2 * _width;

    TIFFSetField(tif, TIFFTAG_ROWSPERSTRIP, 1);
    unsigned char *buf = NULL;
    //    Allocating memory to store the pixels of current row
    if (TIFFScanlineSize(tif) == linebytes)
        buf =(unsigned char *)_TIFFmalloc(linebytes);
    else
        buf = (unsigned char *)_TIFFmalloc(TIFFScanlineSize(tif));


    uint8_t* rgbBuffer = ( uint8_t*)_frameBuffer.data();
    for (uint32_t  lineNumber=0; lineNumber<_height; lineNumber++)
    {
        uint16_t* rgbLineBuffer = (uint16_t*)(rgbBuffer+(3 * 2 * _width*lineNumber));
        uint16_t* tiffLinePtr = (uint16_t*)buf;
        for ( uint32_t pixelNumber = 0; pixelNumber<_width; pixelNumber++ )
        {
            uint16_t r = *rgbLineBuffer++;
            uint16_t g = *rgbLineBuffer++;
            uint16_t b = *rgbLineBuffer++;
            *tiffLinePtr++ = r;
            *tiffLinePtr++ = g;
            *tiffLinePtr++ = b;
         }

        if (TIFFWriteScanline(tif, buf, lineNumber, 0) < 0)
            break;
    }

    TIFFClose(tif);
}

bool isDropFrame(OpenAPI::OAIVideoFormat::eOAIVideoFormat format)
{
    switch( format )
    {
    case OpenAPI::OAIVideoFormat::eOAIVideoFormat::_720P59_94:
    case OpenAPI::OAIVideoFormat::eOAIVideoFormat::_1080I59_94:
    case OpenAPI::OAIVideoFormat::eOAIVideoFormat::_1080PSF23_98:
    case OpenAPI::OAIVideoFormat::eOAIVideoFormat::_1080PSF29_97:
    case OpenAPI::OAIVideoFormat::eOAIVideoFormat::_1080P23_98:
    case OpenAPI::OAIVideoFormat::eOAIVideoFormat::_1080P29_97:
    case OpenAPI::OAIVideoFormat::eOAIVideoFormat::_1080P59_94:
    case OpenAPI::OAIVideoFormat::eOAIVideoFormat::_2KP29_97:
	case OpenAPI::OAIVideoFormat::eOAIVideoFormat::_2KP47_95:
    case OpenAPI::OAIVideoFormat::eOAIVideoFormat::_2KP59_94:
    case OpenAPI::OAIVideoFormat::eOAIVideoFormat::_2KPSF23_98:
    case OpenAPI::OAIVideoFormat::eOAIVideoFormat::UHDP23_98:
    case OpenAPI::OAIVideoFormat::eOAIVideoFormat::UHDP29_97:
    case OpenAPI::OAIVideoFormat::eOAIVideoFormat::UHDP59_94:
    case OpenAPI::OAIVideoFormat::eOAIVideoFormat::_4KP23_98:
    case OpenAPI::OAIVideoFormat::eOAIVideoFormat::_4KP29_97:
    case OpenAPI::OAIVideoFormat::eOAIVideoFormat::_4KP59_94:
        return true;

    default:
        return false;
    }
}
