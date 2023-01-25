/**
 * OpenAPI ColorBox
 * This is a REST API for the AJA ColorBox product.
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@aja.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 *       Do not edit the class manually.
 *
 * Copyright (C) 2020-2022 AJA Video Systems Inc.  All rights reserved.
 */

#include "OAIPatternColor.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPatternColor::OAIPatternColor(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPatternColor::OAIPatternColor() {
    this->initializeModel();
}

OAIPatternColor::~OAIPatternColor() {}

void OAIPatternColor::initializeModel() {

    m_depth_isSet = false;
    m_depth_isValid = false;

    m_blue_isSet = false;
    m_blue_isValid = false;

    m_green_isSet = false;
    m_green_isValid = false;

    m_red_isSet = false;
    m_red_isValid = false;
}

void OAIPatternColor::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPatternColor::fromJsonObject(QJsonObject json) {

    m_depth_isValid = ::OpenAPI::fromJsonValue(m_depth, json[QString("depth")]);
    m_depth_isSet = !json[QString("depth")].isNull() && m_depth_isValid;

    m_blue_isValid = ::OpenAPI::fromJsonValue(m_blue, json[QString("blue")]);
    m_blue_isSet = !json[QString("blue")].isNull() && m_blue_isValid;

    m_green_isValid = ::OpenAPI::fromJsonValue(m_green, json[QString("green")]);
    m_green_isSet = !json[QString("green")].isNull() && m_green_isValid;

    m_red_isValid = ::OpenAPI::fromJsonValue(m_red, json[QString("red")]);
    m_red_isSet = !json[QString("red")].isNull() && m_red_isValid;

    applyMinMaxConstraints();
}

QString OAIPatternColor::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPatternColor::asJsonObject() const {
    QJsonObject obj;
    if (m_depth_isSet) {
        obj.insert(QString("depth"), ::OpenAPI::toJsonValue(m_depth));
    }
    if (m_blue_isSet) {
        obj.insert(QString("blue"), ::OpenAPI::toJsonValue(m_blue));
    }
    if (m_green_isSet) {
        obj.insert(QString("green"), ::OpenAPI::toJsonValue(m_green));
    }
    if (m_red_isSet) {
        obj.insert(QString("red"), ::OpenAPI::toJsonValue(m_red));
    }
    return obj;
}

qint32 OAIPatternColor::getDepth() const {
    return m_depth;
}
void OAIPatternColor::setDepth(const qint32 &depth) {
	qint32 v = depth;
	qint32 min = depthMin();
	qint32 max = depthMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_depth = v;
    this->m_depth_isSet = true;
}

bool OAIPatternColor::is_depth_Set() const{
    return m_depth_isSet;
}

bool OAIPatternColor::is_depth_Valid() const{
    return m_depth_isValid;
}

qint32 OAIPatternColor::depthMin() const {
	return 8;
}

qint32 OAIPatternColor::depthMax() const {
	return 16;
}

qint32 OAIPatternColor::getBlue() const {
    return m_blue;
}
void OAIPatternColor::setBlue(const qint32 &blue) {
	qint32 v = blue;
	qint32 min = blueMin();
	qint32 max = blueMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_blue = v;
    this->m_blue_isSet = true;
}

bool OAIPatternColor::is_blue_Set() const{
    return m_blue_isSet;
}

bool OAIPatternColor::is_blue_Valid() const{
    return m_blue_isValid;
}

qint32 OAIPatternColor::blueMin() const {
	return 0;
}

qint32 OAIPatternColor::blueMax() const {
	return 65535;
}

qint32 OAIPatternColor::getGreen() const {
    return m_green;
}
void OAIPatternColor::setGreen(const qint32 &green) {
	qint32 v = green;
	qint32 min = greenMin();
	qint32 max = greenMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_green = v;
    this->m_green_isSet = true;
}

bool OAIPatternColor::is_green_Set() const{
    return m_green_isSet;
}

bool OAIPatternColor::is_green_Valid() const{
    return m_green_isValid;
}

qint32 OAIPatternColor::greenMin() const {
	return 0;
}

qint32 OAIPatternColor::greenMax() const {
	return 65535;
}

qint32 OAIPatternColor::getRed() const {
    return m_red;
}
void OAIPatternColor::setRed(const qint32 &red) {
	qint32 v = red;
	qint32 min = redMin();
	qint32 max = redMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_red = v;
    this->m_red_isSet = true;
}

bool OAIPatternColor::is_red_Set() const{
    return m_red_isSet;
}

bool OAIPatternColor::is_red_Valid() const{
    return m_red_isValid;
}

qint32 OAIPatternColor::redMin() const {
	return 0;
}

qint32 OAIPatternColor::redMax() const {
	return 65535;
}

bool OAIPatternColor::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_depth_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_blue_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_green_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_red_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPatternColor::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

bool OAIPatternColor::applyMinMaxConstraints() {
	bool anyMinMaxValueChanged = false;
	if (is_depth_Set())
	{
		bool depthChanged = false;
		qint32 v = getDepth();
		qint32 min = depthMin();
		qint32 max = depthMax();
		if (v < min) { v = min; depthChanged = true; }
		if (v > max) { v = max; depthChanged = true; }
		if (depthChanged) { setDepth(v); anyMinMaxValueChanged = true; }
	}
	if (is_blue_Set())
	{
		bool blueChanged = false;
		qint32 v = getBlue();
		qint32 min = blueMin();
		qint32 max = blueMax();
		if (v < min) { v = min; blueChanged = true; }
		if (v > max) { v = max; blueChanged = true; }
		if (blueChanged) { setBlue(v); anyMinMaxValueChanged = true; }
	}
	if (is_green_Set())
	{
		bool greenChanged = false;
		qint32 v = getGreen();
		qint32 min = greenMin();
		qint32 max = greenMax();
		if (v < min) { v = min; greenChanged = true; }
		if (v > max) { v = max; greenChanged = true; }
		if (greenChanged) { setGreen(v); anyMinMaxValueChanged = true; }
	}
	if (is_red_Set())
	{
		bool redChanged = false;
		qint32 v = getRed();
		qint32 min = redMin();
		qint32 max = redMax();
		if (v < min) { v = min; redChanged = true; }
		if (v > max) { v = max; redChanged = true; }
		if (redChanged) { setRed(v); anyMinMaxValueChanged = true; }
	}
	return anyMinMaxValueChanged;
}

} // namespace OpenAPI