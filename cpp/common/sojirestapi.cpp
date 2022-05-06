#include "sojirestapi.h"
#include "QEventLoop"
#include <QNetworkReply>

SojiRESTAPI::SojiRESTAPI(QObject *parent ):
    QObject(parent),
    _ipAddressString(),
    _port(8080),
    _sojiProto(false),
    _manager(nullptr)
{
    _manager = new QNetworkAccessManager(this);

}

SojiRESTAPI::~SojiRESTAPI()
{
}

bool SojiRESTAPI::setIPAddress(QString ipAddressString )
{
    bool status = true;

    // test ipAddressString and port
    OpenAPI::OAISystemConfig sysConfig;
    _ipAddressString = ipAddressString;
    setPort(80);
    getSystemConfig(sysConfig);
    if ( sysConfig.is_host_name_Set())
    {
        qDebug() << "Soji HW";
        _hostName = sysConfig.getHostName();

    }
    else
    {
        setPort(8080);
        getSystemConfig(sysConfig);
        if ( sysConfig.is_host_name_Set())
        {
            qDebug() << "Soji Proto";
            _hostName = sysConfig.getHostName();
        }
        else
            status = false;
    }

    qDebug() << "HostName " << _hostName;

    return status;
}

bool SojiRESTAPI::setPort(uint32_t port )
{
    _port = port;
    return true;
}
bool SojiRESTAPI::get(const QString &path, QString &data)
{
    QUrl qurl;
    qurl.setScheme("http");
    qurl.setHost(_ipAddressString);
    qurl.setPath(path);
    qurl.setPort(_port);

    QNetworkRequest req;
    req.setUrl(qurl);
    QNetworkReply *reply = _manager->get(req);

    QEventLoop  loop;
    connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    if (reply->error() != QNetworkReply::NoError)
    {
        return false;
    }
    data = reply->readAll();
    reply->deleteLater();

    return true;
}

bool SojiRESTAPI::put(const QString &path, const QString &body, const QString &type)
{
    QUrl qurl;
    qurl.setScheme("http");
    qurl.setHost(_ipAddressString);
    qurl.setPath(path);
    qurl.setPort(_port);

    QNetworkRequest req;
    req.setUrl(qurl);
    req.setHeader(QNetworkRequest::ContentTypeHeader, type);
    QByteArray ba = body.toUtf8();
    QNetworkReply *reply = _manager->put(req, ba);

    QEventLoop  loop;
    connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();
    if (reply->error() != QNetworkReply::NoError)
    {
        return false;
    }

    QString data = reply->readAll();
    reply->deleteLater();

    return true;
}

bool SojiRESTAPI::post(const QString &path, const QString &body, const QString &type)
{
    QUrl qurl;
    qurl.setScheme("http");
    qurl.setHost(_ipAddressString);
    qurl.setPath(path);
    qurl.setPort(_port);

    QNetworkRequest req;
    req.setUrl(qurl);
    req.setHeader(QNetworkRequest::ContentTypeHeader, type);
    QByteArray ba = body.toUtf8();
    QNetworkReply *reply = _manager->post(req, ba);

    QEventLoop  loop;
    connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();
    if (reply->error() != QNetworkReply::NoError)
    {
        return false;
    }

    QString data = reply->readAll();
    reply->deleteLater();

    return true;
}

bool SojiRESTAPI::getSystemConfig(OpenAPI::OAISystemConfig& systemConfig)
{
    QString root = QString("/v2/system/config");
    QString resp;
    if (!get(root, resp))
        return false;

    systemConfig.fromJson(resp);
    return true;

}

bool  SojiRESTAPI::putSystemConfig(OpenAPI::OAISystemConfig& systemConfig)
{
    return put("/v2/system/config", systemConfig.asJson(), "application/json");
}

bool SojiRESTAPI::getInputStatus(OpenAPI::OAISDI &inputStatus)
{
    QString root = QString("/v2/sdiInputStatus");
    QString resp;
    if (!get(root, resp))
        return false;

    inputStatus.fromJson(resp);
    return true;
}

bool SojiRESTAPI::getStages(OpenAPI::OAIPipelineStages& stages)
{
    QString root = QString("/v2/pipelineStages");
    QString resp;
    if (!get(root, resp))
        return false;
    stages.fromJson(resp);
    return true;

}

bool  SojiRESTAPI::putStages(OpenAPI::OAIPipelineStages& stages)
{
    return put("/v2/pipelineStages", stages.asJson(), "application/json");
}

bool SojiRESTAPI::getRouting(OpenAPI::OAIRouting& routing)
{
    QString root = QString("/v2/routing");
    QString resp;
    if (!get(root, resp))
        return false;
    routing.fromJson(resp);
    return true;

}

bool  SojiRESTAPI::putRouting(OpenAPI::OAIRouting& routing)
{
    return put("/v2/routing", routing.asJson(), "application/json");
}

bool SojiRESTAPI::getFrameStore(OpenAPI::OAIFrameStore &frameStore)
{
    QString root = QString("/v2/frameStore");
    QString resp;
    if (!get(root, resp))
        return false;
    frameStore.fromJson(resp);
    return true;

}

bool SojiRESTAPI::putFrameStore(OpenAPI::OAIFrameStore &frameStore)
{
    return put("/v2/frameStore", frameStore.asJson(), "application/json");

}

bool  SojiRESTAPI::getPreview(OpenAPI::OAIPreview &preview)
{
    QString root = QString("/v2/preview");
    QString resp;
    if (!get(root, resp))
        return false;
    preview.fromJson(resp);
    return true;

}

bool SojiRESTAPI::putOrionConfig(OpenAPI::OAIOrionConfig &orionConfig)
{
    return put("/v2/orionConfig", orionConfig.asJson(), "application/json");

}

bool SojiRESTAPI::frameGrab(OpenAPI::OAIFrame &frame)
{
    ////NOTE: should check if frameGrab is in process by someone else.
    if ( post("/v2/frameGrabRequest","","application/json") )
    {

        QString frameGrabRequest = "true";
        QTime timer;
        timer.start();
        while(timer.elapsed() < 5000 ) // UHD can take a long time.
        {
            get("/v2/frameGrabRequest", frameGrabRequest);
            if ( frameGrabRequest == "false")
                break;
        }

        if ( frameGrabRequest == "false") // means frameGrab is done
        {
            QString root = QString("/v2/frameGrab");
            QString resp;
            if (!get(root, resp))
                return false;
            frame.fromJson(resp);
        }
        else
            return false;

    }
    else
        return false;

    return true;
}
