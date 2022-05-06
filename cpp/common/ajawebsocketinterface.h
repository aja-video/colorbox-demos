#ifndef LUTLOADER_H
#define LUTLOADER_H

#include <QObject>
#include <QtWebSockets/QtWebSockets>

class AJAWebSocketInterface : public QObject
{
    Q_OBJECT
    
public:
    AJAWebSocketInterface(QObject *parent=nullptr) : QObject(parent), _webSocket(nullptr) {}
    virtual ~AJAWebSocketInterface() {}
    
public slots:
	void connectSojiWebSocket(QString urlString);
	void disconnect();
	void sendBinaryMessage(const QByteArray &message);
	void sendTextMessage(const QString &message);

signals:
    void connected();
    void disconnected();
	void error(const QString& msg);
	void binaryMessageReceived(const QByteArray &msg);
	void textMessageReceived(const QString &msg);

private:
    
    // websocket methods
    void onConnected();
    void onDisconnected();
    
    QWebSocket *_webSocket;
};

#endif // LUTLOADER_H

