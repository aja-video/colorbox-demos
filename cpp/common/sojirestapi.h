#ifndef SOJIRESTAPI_H
#define SOJIRESTAPI_H

#include <QObject>
#include <QNetworkAccessManager>
#include "OAIPipelineStages.h"
#include "OAISystemConfig.h"
#include "OAIRouting.h"
#include "OAIFrameStore.h"
#include "OAIPreview.h"
#include "OAIOrionConfig.h"
#include "OAIFrame.h"
#include "OAISDI.h"

class SojiRESTAPI : public QObject
{
    Q_OBJECT

public:
    SojiRESTAPI(QObject *parent = nullptr);
    ~SojiRESTAPI();

    bool setIPAddress(QString ipAddressString );
    bool setPort(uint32_t port );
    bool getSystemConfig(OpenAPI::OAISystemConfig &systemConfig);
    bool putSystemConfig(OpenAPI::OAISystemConfig &systemConfig);
    bool getInputStatus(OpenAPI::OAISDI &inputStatus);
    bool getStages(OpenAPI::OAIPipelineStages &stages);
    bool putStages(OpenAPI::OAIPipelineStages &stages);
    bool getRouting(OpenAPI::OAIRouting &stages);
    bool putRouting(OpenAPI::OAIRouting &stages);
    bool getFrameStore(OpenAPI::OAIFrameStore &frameStore);
    bool putFrameStore(OpenAPI::OAIFrameStore &frameStore);
    bool getPreview(OpenAPI::OAIPreview &preview);
    bool putOrionConfig(OpenAPI::OAIOrionConfig &orionConfig);
    bool frameGrab(OpenAPI::OAIFrame &frame);

signals:

public slots:

private:

    bool get(const QString &path, QString &data);
    bool put(const QString &path, const QString &body, const QString &type);
    bool post(const QString &path, const QString &body, const QString &type);

    QString _ipAddressString;
    int _port;
    bool _sojiProto;
    QString _hostName;

    QNetworkAccessManager   *_manager;
};

#endif // SOJIRESTAPI_H
