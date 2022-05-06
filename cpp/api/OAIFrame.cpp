/**
 * OpenAPI Soji
 * This is a REST API for the AJA Soji product.
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@aja.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 *       Do not edit the class manually.
 *
 * Copyright (C) 2020-2022 AJA Video Systems, Inc.  All rights reserved.
 */

#include "OAIFrame.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIFrame::OAIFrame(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIFrame::OAIFrame() {
    this->initializeModel();
}

OAIFrame::~OAIFrame() {}

void OAIFrame::initializeModel() {

    m_image_isSet = false;
    m_image_isValid = false;

    m_anc_data_isSet = false;
    m_anc_data_isValid = false;

    m_user_data1_isSet = false;
    m_user_data1_isValid = false;

    m_user_data2_isSet = false;
    m_user_data2_isValid = false;
}

void OAIFrame::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFrame::fromJsonObject(QJsonObject json) {

    m_image_isValid = ::OpenAPI::fromJsonValue(image, json[QString("image")]);
    m_image_isSet = !json[QString("image")].isNull() && m_image_isValid;

    m_anc_data_isValid = ::OpenAPI::fromJsonValue(anc_data, json[QString("ancData")]);
    m_anc_data_isSet = !json[QString("ancData")].isNull() && m_anc_data_isValid;

    m_user_data1_isValid = ::OpenAPI::fromJsonValue(user_data1, json[QString("userData1")]);
    m_user_data1_isSet = !json[QString("userData1")].isNull() && m_user_data1_isValid;

    m_user_data2_isValid = ::OpenAPI::fromJsonValue(user_data2, json[QString("userData2")]);
    m_user_data2_isSet = !json[QString("userData2")].isNull() && m_user_data2_isValid;

    applyMinMaxConstraints();
}

QString OAIFrame::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFrame::asJsonObject() const {
    QJsonObject obj;
    if (m_image_isSet) {
        obj.insert(QString("image"), ::OpenAPI::toJsonValue(image));
    }
    if (m_anc_data_isSet) {
        obj.insert(QString("ancData"), ::OpenAPI::toJsonValue(anc_data));
    }
    if (m_user_data1_isSet) {
        obj.insert(QString("userData1"), ::OpenAPI::toJsonValue(user_data1));
    }
    if (m_user_data2_isSet) {
        obj.insert(QString("userData2"), ::OpenAPI::toJsonValue(user_data2));
    }
    return obj;
}

QByteArray OAIFrame::getImage() const {
    return image;
}
void OAIFrame::setImage(const QByteArray &image) {
	QByteArray v = image;
	this->image = v;
    this->m_image_isSet = true;
}

bool OAIFrame::is_image_Set() const{
    return m_image_isSet;
}

bool OAIFrame::is_image_Valid() const{
    return m_image_isValid;
}


QByteArray OAIFrame::getAncData() const {
    return anc_data;
}
void OAIFrame::setAncData(const QByteArray &anc_data) {
	QByteArray v = anc_data;
	this->anc_data = v;
    this->m_anc_data_isSet = true;
}

bool OAIFrame::is_anc_data_Set() const{
    return m_anc_data_isSet;
}

bool OAIFrame::is_anc_data_Valid() const{
    return m_anc_data_isValid;
}


QString OAIFrame::getUserData1() const {
    return user_data1;
}
void OAIFrame::setUserData1(const QString &user_data1) {
	QString v = user_data1;
	this->user_data1 = v;
    this->m_user_data1_isSet = true;
}

bool OAIFrame::is_user_data1_Set() const{
    return m_user_data1_isSet;
}

bool OAIFrame::is_user_data1_Valid() const{
    return m_user_data1_isValid;
}



QString OAIFrame::getUserData2() const {
    return user_data2;
}
void OAIFrame::setUserData2(const QString &user_data2) {
	QString v = user_data2;
	this->user_data2 = v;
    this->m_user_data2_isSet = true;
}

bool OAIFrame::is_user_data2_Set() const{
    return m_user_data2_isSet;
}

bool OAIFrame::is_user_data2_Valid() const{
    return m_user_data2_isValid;
}



bool OAIFrame::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_image_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_anc_data_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_data1_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_data2_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIFrame::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

bool OAIFrame::applyMinMaxConstraints() {
	bool valueChanged = false;
	if (is_user_data1_Set())
	{
		bool userData1Changed = false;
		QString v = getUserData1();
		if (userData1Changed) { setUserData1(v); valueChanged = true; }
	}
	if (is_user_data2_Set())
	{
		bool userData2Changed = false;
		QString v = getUserData2();
		if (userData2Changed) { setUserData2(v); valueChanged = true; }
	}
	return valueChanged;
}

} // namespace OpenAPI