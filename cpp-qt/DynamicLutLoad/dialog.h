/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QElapsedTimer>
#include <QThread>
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
	void updateColorBox(int value);
	void updateTimer();
    void ipAddressEdited();
    void dynmicLutChoiceChanged(int index);
    void resetParameters();

    // OpenAPI Slots
    void handleGetStages(OpenAPI::OAIPipelineStages stages);
    void handleGetStagesError(OpenAPI::OAIPipelineStages summary, QNetworkReply::NetworkError error_type, QString error_str);

    // WebSocket releated slots
    void onConnected();
    void onDisconnected();
    void onError(QString msg);

signals:
    void load(const QByteArray &data);
	void connectColorBoxWebSocket(QString urlString);

protected:

    void recallSettings();
    void saveSettings();

	bool _cbConnected;
    AJAWebSocketInterface *_webSocktLoader;
    QThread *_webSocketThread;
    OpenAPI::OAIDefaultApi _api;
    QString _currentIPAddress;

private:
    Ui::Dialog *_ui;
};
#endif // DIALOG_H
