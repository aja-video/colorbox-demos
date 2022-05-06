#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "ajawebsocketinterface.h"
#include "sojidemocommon.h"
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
    void updateProcAmp(int value);
    void mtxChoiceChanged(int index);

    // LUTLoader slots
    void onConnected();
    void onDisconnected();
    void onError(QString msg);
    void resetParameters();

    // OpenAPI Slots
    void handleGetStages(OpenAPI::OAIPipelineStages stages);
    void handleGetStagesError(OpenAPI::OAIPipelineStages summary, QNetworkReply::NetworkError error_type, QString error_str);

signals:
    void load(const QByteArray &data);
    void connectSojiWebSocket(QString urlString);

protected:
    void writeMatrixFile(SojiDynamicMatrix m);
    void recallSettings();
    void saveSettings();

    void mousePressEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent *);

    void doProcAmp();

     bool _sojiConnected;
    AJAWebSocketInterface *_webSocketLoad;
    QThread *_webSocketThread;

    OpenAPI::OAIDefaultApi _api;
    QString _currentIPAddress;

    bool _printLoopTime;
    bool _printMatrix;


private:
    Ui::Dialog *_ui;
};
#endif // DIALOG_H
