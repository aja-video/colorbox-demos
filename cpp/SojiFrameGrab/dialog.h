#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QElapsedTimer>
#include "sojidemocommon.h"
#include "ajawebsocketinterface.h"
#include <OAIDefaultApi.h>
#include <OAIFrame.h>

#ifdef SUPPORT_ANC
#include "ajantv2/includes/ntv2utils.h"
#include "ajantv2/includes/ntv2vpid.h"
#include "ajaanc/includes/ancillarylist.h"
#include "ajaanc/includes/ancillarydata_timecode_atc.h"
#endif


QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

public slots:
    void ipAddressEdited();
    void updateFrameFromSoji();
	void updateGrabBinary(const QByteArray &data);
    void writeTIFFFile();

	// WebSocket releated slots
	void onConnected();
	void onDisconnected();
    void onError(QString msg);

    // OpenAPI Slots
    void handleGetSDIStatus(OpenAPI::OAISDI sdiStatus);
    void handleGetSDIStatusError(OpenAPI::OAISDI summary, QNetworkReply::NetworkError error_type, QString error_str);

signals:
	void triggerGrab(const QString &message);
	void connectSojiWebSocket(QString urlString);

protected:
    void updatePreview();

    void recallSettings();
    void saveSettings();

    uint32_t _width;
    uint32_t _height;
    uint16_t _bitsPerComponent;
    uint16_t _samplesPerPixel;
    QString _userData1;
    QString _userData2;
    RGB16BitUIntBufferValues _frameBuffer;

    bool _sojiConnected;
   AJAWebSocketInterface *_webSocketLoad;
   QThread *_webSocketThread;

   OpenAPI::OAIDefaultApi _api;
   QString _currentIPAddress;

 #ifdef SUPPORT_ANC
    AJAAncillaryList _ancDataList;
#endif
private:
    Ui::Dialog *_ui;

	QElapsedTimer _timer;
};
#endif // DIALOG_H
