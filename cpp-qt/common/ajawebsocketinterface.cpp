/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */

#include "ajawebsocketinterface.h"

void AJAWebSocketInterface::connectColorBoxWebSocket(QString urlString)
{
    if ( _webSocket )
        disconnect();
    qDebug() << "connectColorBoxWebSocket" << urlString;

    if ( urlString.startsWith("127.0.0.1"))
         qDebug() << urlString;

    _webSocket = new QWebSocket;

    QObject::connect(_webSocket, &QWebSocket::connected, this, &AJAWebSocketInterface::onConnected);
    QObject::connect(_webSocket, &QWebSocket::disconnected, this, &AJAWebSocketInterface::onDisconnected);
    QObject::connect(_webSocket, QOverload<QAbstractSocket::SocketError>::of(&QWebSocket::error),
        [=](QAbstractSocket::SocketError err) {
                qDebug() << "SocketError: " << err << _webSocket->errorString() << "\n";
                emit error("SocketError: " + QString::number(err) + ", " + _webSocket->errorString());
        });
	QObject::connect(_webSocket, &QWebSocket::binaryMessageReceived, this, &AJAWebSocketInterface::binaryMessageReceived);
	QObject::connect(_webSocket, &QWebSocket::textMessageReceived, this, &AJAWebSocketInterface::textMessageReceived);
    _webSocket->open(QUrl(QString("ws://%1:5000").arg(urlString)));
}

void AJAWebSocketInterface::disconnect()
{
    if ( !_webSocket )
        return;

    _webSocket->close();
    delete _webSocket;
    _webSocket = nullptr;
}

void AJAWebSocketInterface::sendBinaryMessage(const QByteArray &message)
{
    if (!_webSocket && !_webSocket->isValid()) {
        emit error("Invalid connection!");
        disconnect();
        return;
    }
	_webSocket->sendBinaryMessage(message);
}

void AJAWebSocketInterface::sendTextMessage(const QString &message)
{
	if (!_webSocket && !_webSocket->isValid()) {
		emit error("Invalid connection!");
		disconnect();
		return;
	}
	_webSocket->sendTextMessage(message);
}

void AJAWebSocketInterface::onConnected()
{

    emit connected();
}

void AJAWebSocketInterface::onDisconnected()
{
    emit disconnected();
}

