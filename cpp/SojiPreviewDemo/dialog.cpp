/*!
 * SojiPreviewDemoOpenAPI
 * This demo shows how to interface with a ColorBox device via the C++ OpenAPI.
 * It will get a preview image from the ColorBox and display in a dialog.
 *
 */

#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>
#include <QElapsedTimer>
#include <QSettings>

using namespace OpenAPI;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent),
      _sojiConnected(false),
      _ui(new Ui::Dialog)
{
    _ui->setupUi(this);

    Qt::WindowFlags flags = nullptr;
    flags |= Qt::WindowMinMaxButtonsHint;
    flags |= Qt::WindowCloseButtonHint;
    setWindowFlags( flags );

    recallSettings();
    ipAddressEdited();
    this->setFocus();

    QTimer::singleShot(200, this, &Dialog::updateUIPreview);

    // UI related slots
    connect(_ui->ipAddressLineEdit, SIGNAL(editingFinished()), this, SLOT(ipAddressEdited()));

    // API related slots
    connect(&_api, &OAIDefaultApi::getPreviewImageSignal, this, &Dialog::handlePreview);
    connect(&_api, &OAIDefaultApi::getPreviewImageSignalE, this, &Dialog::handlePreviewError);
    connect(&_api, &OAIDefaultApi::getSdiInputStatusSignal, this, &Dialog::handleInputStatus);
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

    if (_sojiConnected == false)
    {
        OpenAPI::OAISystemConfig systemConfig;
        systemConfig.setPreviewAncEnable(true);
        _api.setSystemConfig(systemConfig);
    }

    _sojiConnected = true;
    _preview = preview;
}

void Dialog::handlePreviewError(OAIPreview summary, QNetworkReply::NetworkError error_type, QString error_str)
{
    Q_UNUSED(summary)
    Q_UNUSED(error_type)

    QMutexLocker l(&_updateLock);

    qDebug() << error_str;
    _sojiConnected = false;
    _ui->connectLabel->setText("NOT CONNECTED");

}
void Dialog::updateUIPreview()
{
    QElapsedTimer timer;
    timer.start();

    if (_sojiConnected)
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
                ts << "Video Format: " << _status.getFormat().asJson() << endl;
                ts << "User Data String1: " << endl;
                ts << " " << _preview.getUserData1() << endl;
                ts << "User Data String2: " << endl;
                ts << " " << _preview.getUserData2() << endl;

#ifdef SUPPORT_ANC
                QByteArray ancBA = _preview.getAncData();

                // Anc data transfered from Soji as blob where 1st half is from F1 and second form F2(if available)
                NTV2_POINTER ancF1Pointer(ancBA.data(), ancBA.size()/2);
                NTV2_POINTER ancF2Pointer(&ancBA.data()[ ancBA.size()/2], ancBA.size()/2);

                 AJAAncillaryList _ancDataList;
                _ancDataList.Clear();
                AJAAncillaryList::SetFromDeviceAncBuffers(ancF1Pointer, ancF2Pointer, _ancDataList);

                std::stringstream out;
                out << _ancDataList;

                std::string msgVPIDFormat("No");

                uint32_t numAncDataPkts =  _ancDataList.CountAncillaryData();
                for ( int ancCount = 0; ancCount < numAncDataPkts; ancCount++ )
                {
                    AJAAncillaryData *ancData =  _ancDataList.GetAncillaryDataAtIndex (ancCount);
                    ts << hex << "DID/SID: " <<  "0x" << ancData->GetDID() << "/" <<  "0x" << ancData->GetSID() << endl;
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
    }
    else
    {
        _ui->connectLabel->setText("DISCONNECTED");
    }

    _ui->transferTimeLabel->setText(QString("%1 ms").arg(timer.elapsed()));

    // trigger this method again in 16ms
    QTimer::singleShot(16, this, &Dialog::updateUIPreview);
}

void Dialog::recallSettings()
{
    QSettings settings(QSettings::UserScope, "aja" , "SojiPreviewDemoOpenAPI");
    _ui->ipAddressLineEdit->setText(settings.value("IPAddress").toString());
}

void Dialog::saveSettings()
{
    QSettings settings(QSettings::UserScope, "aja" , "SojiPreviewDemoOpenAPI");
    settings.setValue("IPAddress",_ui->ipAddressLineEdit->text());
}

void Dialog::ipAddressEdited()
{
    if ( _currentIPAddress == _ui->ipAddressLineEdit->displayText().simplified())
        return;

    _sojiConnected = false;

    _currentIPAddress = _ui->ipAddressLineEdit->displayText().simplified();

    _api.setUrlForServers(_currentIPAddress);

    _api.getPreviewImage();
}

