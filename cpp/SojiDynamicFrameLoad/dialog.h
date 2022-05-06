#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "sojidemocommon.h"
#include "ajawebsocketinterface.h"
#include <OAIDefaultApi.h>


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
    void handleLoadImageButton();
    void handleSetFrameBufferValueButton();
    void updateFrameToSoji();

    // WebSocket releated slots
    void onConnected();
    void onDisconnected();
    void onError(QString msg);

    // OpenAPI Slots
    void handleGetFrameStore(OpenAPI::OAIFrameStore frameStore);
    void handleGetFrameStoreError(OpenAPI::OAIFrameStore summary, QNetworkReply::NetworkError error_type, QString error_str);

signals:
    void loadFrame(const QByteArray &data);
    void connectSojiWebSocket(QString urlString);

protected:
    void updatePreview();
    void loadTIFFFile(QString fileName);
    void loadPNGFile(QString fileName);
    void recallSettings();
    void saveSettings();

    uint32_t _width;
    uint32_t _height;
    uint16_t _bitsPerComponent;
    uint16_t _samplesPerPixel;
    RGB16BitUIntBufferValues _frameBuffer;

    bool _sojiConnected;
   AJAWebSocketInterface *_webSocketLoad;
   QThread *_webSocketThread;

   OpenAPI::OAIDefaultApi _api;
   QString _currentIPAddress;

    bool _alphaMode;

private:
    Ui::Dialog *_ui;
};
#endif // DIALOG_H
