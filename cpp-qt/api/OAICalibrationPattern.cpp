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

#include "OAICalibrationPattern.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICalibrationPattern::OAICalibrationPattern(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICalibrationPattern::OAICalibrationPattern() {
    this->initializeModel();
}

OAICalibrationPattern::~OAICalibrationPattern() {}

void OAICalibrationPattern::initializeModel() {

    m_bg_color_isSet = false;
    m_bg_color_isValid = false;

    m_fg_color_isSet = false;
    m_fg_color_isValid = false;

    m_fg_rect_isSet = false;
    m_fg_rect_isValid = false;
}

void OAICalibrationPattern::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICalibrationPattern::fromJsonObject(QJsonObject json) {

    m_bg_color_isValid = ::OpenAPI::fromJsonValue(m_bg_color, json[QString("bgColor")]);
    m_bg_color_isSet = !json[QString("bgColor")].isNull() && m_bg_color_isValid;

    m_fg_color_isValid = ::OpenAPI::fromJsonValue(m_fg_color, json[QString("fgColor")]);
    m_fg_color_isSet = !json[QString("fgColor")].isNull() && m_fg_color_isValid;

    m_fg_rect_isValid = ::OpenAPI::fromJsonValue(m_fg_rect, json[QString("fgRect")]);
    m_fg_rect_isSet = !json[QString("fgRect")].isNull() && m_fg_rect_isValid;

    applyMinMaxConstraints();
}

QString OAICalibrationPattern::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICalibrationPattern::asJsonObject() const {
    QJsonObject obj;
    if (m_bg_color.isSet()) {
        obj.insert(QString("bgColor"), ::OpenAPI::toJsonValue(m_bg_color));
    }
    if (m_fg_color.isSet()) {
        obj.insert(QString("fgColor"), ::OpenAPI::toJsonValue(m_fg_color));
    }
    if (m_fg_rect.isSet()) {
        obj.insert(QString("fgRect"), ::OpenAPI::toJsonValue(m_fg_rect));
    }
    return obj;
}

OAIPatternColor OAICalibrationPattern::getBgColor() const {
    return m_bg_color;
}
void OAICalibrationPattern::setBgColor(const OAIPatternColor &bg_color) {
	OAIPatternColor v = bg_color;
	this->m_bg_color = v;
    this->m_bg_color_isSet = true;
}

bool OAICalibrationPattern::is_bg_color_Set() const{
    return m_bg_color_isSet;
}

bool OAICalibrationPattern::is_bg_color_Valid() const{
    return m_bg_color_isValid;
}


OAIPatternColor OAICalibrationPattern::getFgColor() const {
    return m_fg_color;
}
void OAICalibrationPattern::setFgColor(const OAIPatternColor &fg_color) {
	OAIPatternColor v = fg_color;
	this->m_fg_color = v;
    this->m_fg_color_isSet = true;
}

bool OAICalibrationPattern::is_fg_color_Set() const{
    return m_fg_color_isSet;
}

bool OAICalibrationPattern::is_fg_color_Valid() const{
    return m_fg_color_isValid;
}


OAIPatternRect OAICalibrationPattern::getFgRect() const {
    return m_fg_rect;
}
void OAICalibrationPattern::setFgRect(const OAIPatternRect &fg_rect) {
	OAIPatternRect v = fg_rect;
	this->m_fg_rect = v;
    this->m_fg_rect_isSet = true;
}

bool OAICalibrationPattern::is_fg_rect_Set() const{
    return m_fg_rect_isSet;
}

bool OAICalibrationPattern::is_fg_rect_Valid() const{
    return m_fg_rect_isValid;
}


bool OAICalibrationPattern::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_bg_color.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_fg_color.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_fg_rect.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICalibrationPattern::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

bool OAICalibrationPattern::applyMinMaxConstraints() {
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

} // namespace OpenAPI
