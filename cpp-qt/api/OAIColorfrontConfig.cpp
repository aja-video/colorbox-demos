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
 * Copyright (C) 2020-2022 AJA Video Systems, Inc.  All rights reserved.
 */

#include "OAIColorfrontConfig.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIColorfrontConfig::OAIColorfrontConfig(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIColorfrontConfig::OAIColorfrontConfig() {
    this->initializeModel();
}

OAIColorfrontConfig::~OAIColorfrontConfig() {}

void OAIColorfrontConfig::initializeModel() {

    m_enabled_isSet = false;
    m_enabled_isValid = false;

    m_in_dyn_range_gamut_isSet = false;
    m_in_dyn_range_gamut_isValid = false;

    m_out_dyn_range_gamut_isSet = false;
    m_out_dyn_range_gamut_isValid = false;
}

void OAIColorfrontConfig::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIColorfrontConfig::fromJsonObject(QJsonObject json) {

    m_enabled_isValid = ::OpenAPI::fromJsonValue(m_enabled, json[QString("enabled")]);
    m_enabled_isSet = !json[QString("enabled")].isNull() && m_enabled_isValid;

    m_in_dyn_range_gamut_isValid = ::OpenAPI::fromJsonValue(m_in_dyn_range_gamut, json[QString("inDynRangeGamut")]);
    m_in_dyn_range_gamut_isSet = !json[QString("inDynRangeGamut")].isNull() && m_in_dyn_range_gamut_isValid;

    m_out_dyn_range_gamut_isValid = ::OpenAPI::fromJsonValue(m_out_dyn_range_gamut, json[QString("outDynRangeGamut")]);
    m_out_dyn_range_gamut_isSet = !json[QString("outDynRangeGamut")].isNull() && m_out_dyn_range_gamut_isValid;

    applyMinMaxConstraints();
}

QString OAIColorfrontConfig::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIColorfrontConfig::asJsonObject() const {
    QJsonObject obj;
    if (m_enabled_isSet) {
        obj.insert(QString("enabled"), ::OpenAPI::toJsonValue(m_enabled));
    }
    if (m_in_dyn_range_gamut.isSet()) {
        obj.insert(QString("inDynRangeGamut"), ::OpenAPI::toJsonValue(m_in_dyn_range_gamut));
    }
    if (m_out_dyn_range_gamut.isSet()) {
        obj.insert(QString("outDynRangeGamut"), ::OpenAPI::toJsonValue(m_out_dyn_range_gamut));
    }
    return obj;
}

bool OAIColorfrontConfig::isEnabled() const {
    return m_enabled;
}
void OAIColorfrontConfig::setEnabled(const bool &enabled) {
	bool v = enabled;
	this->m_enabled = v;
    this->m_enabled_isSet = true;
}

bool OAIColorfrontConfig::is_enabled_Set() const{
    return m_enabled_isSet;
}

bool OAIColorfrontConfig::is_enabled_Valid() const{
    return m_enabled_isValid;
}


OAIColorfrontDynRangeGamut OAIColorfrontConfig::getInDynRangeGamut() const {
    return m_in_dyn_range_gamut;
}
void OAIColorfrontConfig::setInDynRangeGamut(const OAIColorfrontDynRangeGamut &in_dyn_range_gamut) {
	OAIColorfrontDynRangeGamut v = in_dyn_range_gamut;
	this->m_in_dyn_range_gamut = v;
    this->m_in_dyn_range_gamut_isSet = true;
}

bool OAIColorfrontConfig::is_in_dyn_range_gamut_Set() const{
    return m_in_dyn_range_gamut_isSet;
}

bool OAIColorfrontConfig::is_in_dyn_range_gamut_Valid() const{
    return m_in_dyn_range_gamut_isValid;
}


OAIColorfrontDynRangeGamut OAIColorfrontConfig::getOutDynRangeGamut() const {
    return m_out_dyn_range_gamut;
}
void OAIColorfrontConfig::setOutDynRangeGamut(const OAIColorfrontDynRangeGamut &out_dyn_range_gamut) {
	OAIColorfrontDynRangeGamut v = out_dyn_range_gamut;
	this->m_out_dyn_range_gamut = v;
    this->m_out_dyn_range_gamut_isSet = true;
}

bool OAIColorfrontConfig::is_out_dyn_range_gamut_Set() const{
    return m_out_dyn_range_gamut_isSet;
}

bool OAIColorfrontConfig::is_out_dyn_range_gamut_Valid() const{
    return m_out_dyn_range_gamut_isValid;
}


bool OAIColorfrontConfig::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_in_dyn_range_gamut.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_out_dyn_range_gamut.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIColorfrontConfig::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

bool OAIColorfrontConfig::applyMinMaxConstraints() {
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

} // namespace OpenAPI
