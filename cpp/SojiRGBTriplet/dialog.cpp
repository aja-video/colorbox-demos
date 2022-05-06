/*!
 * SojiRGBTriplet
 */

#include "dialog.h"
#include "ui_dialog.h"
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>

using namespace OpenAPI;

const QString kCompanyName = "aja";
const QString kAppName = "SojiRGBTriplet";

Dialog::Dialog(QWidget *parent)
    : QDialog(parent),
      _sojiConnected(false),
	  _ui(new Ui::Dialog)
{
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
	connect(this, &Dialog::connectSojiWebSocket, _webSocketLoad, &AJAWebSocketInterface::connectSojiWebSocket);

    // UI related Code
    connect(_ui->ipAddressLineEdit,SIGNAL(editingFinished()),this,SLOT(ipAddressEdited()));
	connect(_ui->requestDataButton,SIGNAL (pressed()),this,SLOT (generateRequestAndSend()));

    // API related slots
    connect(&_api, &OAIDefaultApi::getFrameStoreSignal, this, &Dialog::handleGetFrameStore);
    connect(&_api, &OAIDefaultApi::getFrameStoreSignalE, this, &Dialog::handleGetFrameStoreError);

    recallSettings();

	_webSocketThread->start();

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

    _sojiConnected = false;

    _currentIPAddress = _ui->ipAddressLineEdit->displayText().simplified();
    _api.setUrlForServers(_currentIPAddress);

    // Just call this to see if we can connect to that Address.
    _api.getFrameStore();
}

void Dialog::handleGetFrameStore(OpenAPI::OAIFrameStore frameStore)
{
    _sojiConnected = true;
    _ui->connectLabel->setText("CONNECTED");
    qDebug() << "Current FrameStore Video Format " << frameStore.getFormat().asJson();

    frameStore.setEnabled(true);
    frameStore.setDynamic(false);
    _api.setFrameStore(frameStore);

    // Get Web Socket Going.
    connectSojiWebSocket(_currentIPAddress);

}

void Dialog::handleGetFrameStoreError(OpenAPI::OAIFrameStore summary, QNetworkReply::NetworkError error_type, QString error_str)
{
    Q_UNUSED(summary)
    Q_UNUSED(error_type)

    qDebug() << error_str;
    _ui->connectLabel->setText("NOT CONNECTED");
    _sojiConnected = false;
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
	if (_sojiConnected)
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
	if ( _sojiConnected)
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
	QSettings settings(QSettings::UserScope, kCompanyName , kAppName);
    _ui->ipAddressLineEdit->setText(settings.value("IPAddress").toString());

}

void Dialog::saveSettings()
{
	QSettings settings(QSettings::UserScope, kCompanyName , kAppName);
    settings.setValue("IPAddress",_ui->ipAddressLineEdit->text());

}
