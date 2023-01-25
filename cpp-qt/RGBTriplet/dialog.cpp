/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
/*!
 * ColorBoxRGBTriplet
 *
 *This demo shows how to download a 16 bit RGB Triplet to the ColorBox to a
 *particular pixel location and then read back that pixel location having
 *applied the current transforms. For instance, if ColorBox is in LUT mode
 *the API will place the RGB triplet in the frame store and the ColorBox Software
 *will calculate the expected results of that RGB triplet running through the pipeline
 *     1DLUT -> 3x3 Matrix -> 3DLUT -> 1DLUT ->  3x3 Matrix-> 1DLUT
 *and report back both the expected and actual results. For this to work the Pipeline needs to be in “Frame Store” mode and not being updated with Input Video. This will also work with the Orion and Colorfront engine.
 *
 * It uses WebSocket messages
 * see generateRequestAndSend() and receivedResponse() for implementation details.
 *
 */

#include "dialog.h"
#include "ui_dialog.h"
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>

using namespace OpenAPI;

const QString kCompanyName = "aja";
const QString kAppName = "ColorBoxRGBTriplet";

Dialog::Dialog(QWidget *parent)
    : QDialog(parent),
      _cbConnected(false),
	  _ui(new Ui::Dialog)
{
    _api.useBasicAuth("admin","admin");
    _ui->setupUi(this);

	setWindowTitle(kAppName);
	setWindowFlags(Qt::WindowMinMaxButtonsHint | Qt::WindowCloseButtonHint);

	// Web Socket BoilerPlate Code
	_webSocketThread = new QThread;
	_webSocketLoad = new AJAWebSocketInterface();
	_webSocketLoad->moveToThread(_webSocketThread);
	connect(_webSocketThread, &QThread::finished, _webSocketLoad, &QObject::deleteLater);
	connect(_webSocketLoad, &AJAWebSocketInterface::connected, this, &Dialog::onConnected);
	connect(_webSocketLoad, &AJAWebSocketInterface::disconnected, this, &Dialog::onDisconnected);
	connect(_webSocketLoad, &AJAWebSocketInterface::error, this, &Dialog::onError);
	connect(this, &Dialog::requestTriplet, _webSocketLoad, &AJAWebSocketInterface::sendBinaryMessage);
	connect(_webSocketLoad, &AJAWebSocketInterface::binaryMessageReceived,this, &Dialog::receivedResponse);
	connect(this, &Dialog::connectColorBoxWebSocket, _webSocketLoad, &AJAWebSocketInterface::connectColorBoxWebSocket);

    // UI related Code
    connect(_ui->ipAddressLineEdit,&QLineEdit::editingFinished,this,&Dialog::ipAddressEdited);
    connect(_ui->requestDataButton,&QPushButton::pressed,this,&Dialog::generateRequestAndSend);

    // API related slots
    connect(&_api, &OAIDefaultApi::getFrameStoreSignal, this, &Dialog::handleGetFrameStore);
    connect(&_api, &OAIDefaultApi::getFrameStoreSignalE, this, &Dialog::handleGetFrameStoreError);

    _webSocketThread->start();

    recallSettings();
    ipAddressEdited();

    this->setFocus();
}

Dialog::~Dialog()
{
    saveSettings();
    delete _ui;
}

void Dialog::ipAddressEdited()
{
    qDebug() << "IP Address" << _ui->ipAddressLineEdit->displayText().simplified();

    if ( _currentIPAddress == _ui->ipAddressLineEdit->displayText().simplified())
        return;

    _cbConnected = false;

    _currentIPAddress = _ui->ipAddressLineEdit->displayText().simplified();
    _api.setUrlForServers(_currentIPAddress);

    // Just call this to see if we can connect to that Address.
    _api.getFrameStore();
}

void Dialog::handleGetFrameStore(OpenAPI::OAIFrameStore frameStore)
{
    _cbConnected = true;
    _ui->connectLabel->setText("CONNECTED");
    qDebug() << "Current FrameStore Video Format " << frameStore.getFormat().asJson();

    frameStore.setEnabled(true);
    frameStore.setDynamic(false);
    _api.setFrameStore(frameStore);

    // Get Web Socket Going.
	// don't want any port number from URL
	QString webSocketIP = _currentIPAddress.split(":").at(0);
	connectColorBoxWebSocket(webSocketIP);

}

void Dialog::handleGetFrameStoreError(OpenAPI::OAIFrameStore summary, QNetworkReply::NetworkError error_type, QString error_str)
{
    Q_UNUSED(summary)
    Q_UNUSED(error_type)

    qDebug() << error_str;
    _ui->connectLabel->setText("NOT CONNECTED");
    _cbConnected = false;
}
void Dialog::onConnected()
{
    qDebug() << "Connected Web Socket";
}

void Dialog::onDisconnected()
{
    qDebug() << "DisConnected Web Socket";
}

void Dialog::onError(QString msg)
{
    qDebug() << msg;
}

void Dialog::receivedResponse(const QByteArray &data)
{
	if (_cbConnected)
	{
		QJsonParseError err;
		QJsonDocument doc = QJsonDocument::fromJson(data, &err);
		if (doc.isNull() == false)
		{
			QJsonObject obj = doc.object();
			QJsonValue type = obj.value("type");
			if (type.isUndefined() == false)
			{
				if (type.toString() == "rgbtriplet")
				{
					qInfo() << "Got a RGB Triplet back!";
					qInfo() << "got json of:" << obj;
					// do something
					QString text = _ui->resultsTextEdit->toPlainText();

					if (text.isEmpty() == false) { text.append("\n"); }

					int x = obj.value("x").toInt();
					int y = obj.value("y").toInt();
					int r = obj.value("r").toInt();
					int g = obj.value("g").toInt();
					int b = obj.value("b").toInt();
					QString cookie = obj.value("cookie").toString();
					// going to a variant first so toString() will work even if the value in obj isn't a string
					QString expR = obj.value("expectedR").toVariant().toString();
					QString expG = obj.value("expectedG").toVariant().toString();
					QString expB = obj.value("expectedB").toVariant().toString();
					QString gotR = obj.value("actualR").toVariant().toString();
					QString gotG = obj.value("actualG").toVariant().toString();
					QString gotB = obj.value("actualB").toVariant().toString();

					QString time = QDateTime::currentDateTime().toString("yyyy-MM-ddThh:mm:ss");

					QString coords = QString("coords(%1,%2)").arg(x).arg(y);
					QString sentRgb = QString("rgb(%1,%2,%3)").arg(r).arg(g).arg(b);
					QString expRgb = QString("rgb(%1,%2,%3)").arg(expR).arg(expG).arg(expB);
					QString gotRgb = QString("rgb(%1,%2,%3)").arg(gotR).arg(gotG).arg(gotB);

					QString newText = QString("%1: for cookie '%2' with %3 sent %4, expect %5 and got %6")
									  .arg(time).arg(cookie).arg(coords).arg(sentRgb).arg(expRgb).arg(gotRgb);

					text.append(newText);

					_ui->resultsTextEdit->setPlainText(text);
				}
			}
		}
	}

	_ui->transferTimeLabel->setText(QString("%1 ms").arg(_timer.elapsed()));
}

void Dialog::generateRequestAndSend()
{
	if ( _cbConnected)
	{
		_timer.start();

		int x = _ui->xLineEdit->text().toInt();
		int y = _ui->yLineEdit->text().toInt();
		int r = _ui->rLineEdit->text().toInt();
		int g = _ui->gLineEdit->text().toInt();
		int b = _ui->bLineEdit->text().toInt();
		QString cookie = _ui->cookieLineEdit->text();

		QJsonObject obj;
		obj.insert("type", "rgbtriplet");
		obj.insert("x", x);
		obj.insert("y", y);
		obj.insert("r", r);
		obj.insert("g", g);
		obj.insert("b", b);
		obj.insert("cookie", cookie);
		QJsonDocument doc(obj);
		emit requestTriplet(doc.toJson());
	}
}

void Dialog::recallSettings()
{
	QSettings settings(QSettings::UserScope, kCompanyName, kAppName);
    _ui->ipAddressLineEdit->setText(settings.value("IPAddress").toString());
}

void Dialog::saveSettings()
{
	QSettings settings(QSettings::UserScope, kCompanyName, kAppName);
    settings.setValue("IPAddress",_ui->ipAddressLineEdit->text());
}
