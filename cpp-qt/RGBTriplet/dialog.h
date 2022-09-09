/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QElapsedTimer>
#include "colorboxdemocommon.h"
#include "ajawebsocketinterface.h"
#include <OAIDefaultApi.h>

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
	void generateRequestAndSend();
	void receivedResponse(const QByteArray &data);

	// WebSocket releated slots
	void onConnected();
	void onDisconnected();
    void onError(QString msg);

    // OpenAPI Slots
    void handleGetFrameStore(OpenAPI::OAIFrameStore frameStore);
    void handleGetFrameStoreError(OpenAPI::OAIFrameStore summary, QNetworkReply::NetworkError error_type, QString error_str);

signals:
	void requestTriplet(const QByteArray &json);
	void connectColorBoxWebSocket(QString urlString);

protected:
    void recallSettings();
    void saveSettings();

	bool _cbConnected;
	AJAWebSocketInterface *_webSocketLoad;
	QThread *_webSocketThread;

	OpenAPI::OAIDefaultApi _api;
	QString _currentIPAddress;

private:
    Ui::Dialog *_ui;

	QElapsedTimer _timer;
};
#endif // DIALOG_H
