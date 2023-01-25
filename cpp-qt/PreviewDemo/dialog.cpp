/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
/*!
 * PreviewDemoOpenAPI
 * This demo shows how to interface with a ColorBox device via the Qt C++OpenAPI.
 * It will get a preview image(jpeg compressed) from the ColorBox and display in a dialog.
 * The preview is jpg compressed and does not get each frame but updates at about 7 frames/second depending on
 * the network connection.
 *
 *The preview can be of the unprocessed input or the processed output. The processed output can
 *have an overlay or not depending on the Overlay setting.
 *
 *
 * It can also use the NTV2 SDK to parse the metadata for the preview image. See "SUPPORT_ANC" define.
 * see updateUIPreview() for usage.
 *
 */

#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>
#include <QElapsedTimer>
#include <QSettings>

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
      _cbConnected(false),
      _ui(new Ui::Dialog)
{
    _api.useBasicAuth("admin","admin");
    _ui->setupUi(this);

	setWindowFlags(Qt::WindowMinMaxButtonsHint | Qt::WindowCloseButtonHint);

    recallSettings();
    ipAddressEdited();
    this->setFocus();

    QTimer::singleShot(200, this, &Dialog::updateUIPreview);

    // UI related slots
    connect(_ui->ipAddressLineEdit,&QLineEdit::editingFinished, this, &Dialog::ipAddressEdited);
    connect(_ui->previewComboBox,&QComboBox::currentTextChanged,this,&Dialog::handlePreviewTapChoice);
    connect(_ui->overlayCheckBox,&QCheckBox::pressed,this,&Dialog::handleEnableOverlay);

    // API related slots
    connect(&_api, &OAIDefaultApi::getPreviewImageSignal, this, &Dialog::handlePreview);
    connect(&_api, &OAIDefaultApi::getPreviewImageSignalE, this, &Dialog::handlePreviewError);
    connect(&_api, &OAIDefaultApi::getSdiInputStatusSignal, this, &Dialog::handleInputStatus);

    connect(&_api,&OAIDefaultApi::getOverlaySignal,this,&Dialog::getOverlayFromColorbox);
    connect(&_api,&OAIDefaultApi::getRoutingSignal,this,&Dialog::getRoutingFromColorbox);

}

Dialog::~Dialog()
{
    saveSettings();
    delete _ui;
}

void Dialog::handleInputStatus(OAISDI status)
{
    _status = status;
}

void Dialog::handlePreview(OAIPreview preview)
{
    QMutexLocker l(&_updateLock);

    if (_cbConnected == false)
    {
        OpenAPI::OAISystemConfig systemConfig;
        systemConfig.setPreviewAncEnable(true);
        _api.setSystemConfig(systemConfig);
    }

    _cbConnected = true;
    _preview = preview;

    // Start off by syncing to colorbox settings....
    _api.getOverlay();
    _api.getRouting();
}

void Dialog::handlePreviewError(OAIPreview summary, QNetworkReply::NetworkError error_type, QString error_str)
{
    Q_UNUSED(summary)
    Q_UNUSED(error_type)

    QMutexLocker l(&_updateLock);

    qDebug() << error_str;
    _cbConnected = false;
    _ui->connectLabel->setText("NOT CONNECTED");

}

void Dialog::handlePreviewTapChoice(const QString newTextString)
{
    if ( !_cbConnected )
        return;

    OAIRouting routing;
    OAIPreviewTap previewTap;
    if ( newTextString == "Input" )
        previewTap.setValue(OAIPreviewTap::eOAIPreviewTap::INPUT);
    else
        previewTap.setValue(OAIPreviewTap::eOAIPreviewTap::OUTPUT);

    routing.setPreviewTap(previewTap);
    _api.setRouting(routing);

}

void Dialog::handleEnableOverlay()
{
    if ( !_cbConnected )
        return;

    OAIOverlay overlay;
    bool enable = true;
    if ( _ui->overlayCheckBox->isChecked() )
        enable = false;

    qDebug() << enable;

    overlay.setEnabled(enable);
    _api.setOverlay(overlay);
}

void Dialog::getOverlayFromColorbox(OAIOverlay overlay)
{
    if ( overlay.isEnabled() )
        _ui->overlayCheckBox->setCheckState(Qt::Checked);
    else
        _ui->overlayCheckBox->setCheckState(Qt::Unchecked);

}

void Dialog::getRoutingFromColorbox(OAIRouting routing)
{
    disconnect(_ui->previewComboBox,&QComboBox::currentTextChanged,this,&Dialog::handlePreviewTapChoice);

    OAIPreviewTap::eOAIPreviewTap previewTapChoice = routing.getPreviewTap().getValue();
    if ( previewTapChoice == OAIPreviewTap::eOAIPreviewTap::INPUT )
        _ui->previewComboBox->setCurrentIndex(0);
    else
        _ui->previewComboBox->setCurrentIndex(1);

    connect(_ui->previewComboBox,&QComboBox::currentTextChanged,this,&Dialog::handlePreviewTapChoice);

}

void Dialog::updateUIPreview()
{
    QElapsedTimer timer;
    timer.start();

    if (_cbConnected)
    {
        _ui->connectLabel->setText("CONNECTED");

        QMutexLocker l(&_updateLock);

        QByteArray imageBA = _preview.getImage();
        if ( imageBA.size() > 0 )
        {
            QImage image;
            QString type = _preview.getImageType().toUpper();
            if (type == "JPG" || type == "JPEG" || type == "PNG")
            {
                image.loadFromData(imageBA, type.toUtf8().data());
                image = image.scaled(_ui->originalPreview->width(), _ui->originalPreview->height(),
                                     Qt::IgnoreAspectRatio, Qt::FastTransformation);
                QPixmap pixmap = QPixmap::fromImage(image);
                _ui->originalPreview->setPixmap(pixmap);

                // Information Window
                QString metaDataString;
                QTextStream ts(&metaDataString);
				ts << "Video Format: " << _status.getFormat().asJson() << Qt::endl;
				ts << "User Data String1: " << Qt::endl;
				ts << " " << _preview.getUserData1() << Qt::endl;
				ts << "User Data String2: " << Qt::endl;
				ts << " " << _preview.getUserData2() << Qt::endl;
                ts <<  "\n";
#ifdef SUPPORT_ANC
                QByteArray ancBA = _preview.getAncData();

				// Anc data transfered from ColorBox as blob where 1st half is from F1 and second form F2(if available)
                NTV2_POINTER ancF1Pointer(ancBA.data(), ancBA.size()/2);
                NTV2_POINTER ancF2Pointer(&ancBA.data()[ ancBA.size()/2], ancBA.size()/2);

                 AJAAncillaryList _ancDataList;
                _ancDataList.Clear();
                AJAAncillaryList::SetFromDeviceAncBuffers(ancF1Pointer, ancF2Pointer, _ancDataList);

                std::stringstream out;
                out << _ancDataList;

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
            else
            {
                qDebug() << "unknown image type";
            }
        }

        // trigger the api to get status and preview ready for next loop
        _api.getSdiInputStatus();
        _api.getPreviewImage();

        _ui->transferTimeLabel->setText(QString("%1 ms").arg(timer.elapsed()));

    }
    else
    {
        _ui->transferTimeLabel->setText("");
        _ui->connectLabel->setText("DISCONNECTED");
    }



    // trigger this method again in 16ms
    QTimer::singleShot(16, this, &Dialog::updateUIPreview);
}

void Dialog::recallSettings()
{
	QSettings settings(QSettings::UserScope, "aja", "ColorBoxPreviewDemo");
    _ui->ipAddressLineEdit->setText(settings.value("IPAddress").toString());
}

void Dialog::saveSettings()
{
	QSettings settings(QSettings::UserScope, "aja", "ColorBoxPreviewDemo");
    settings.setValue("IPAddress",_ui->ipAddressLineEdit->text());
}

void Dialog::ipAddressEdited()
{
    if ( _currentIPAddress == _ui->ipAddressLineEdit->displayText().simplified())
        return;

    _cbConnected = false;

    _currentIPAddress = _ui->ipAddressLineEdit->displayText().simplified();

    _api.setUrlForServers(_currentIPAddress);

    _api.getPreviewImage();
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

