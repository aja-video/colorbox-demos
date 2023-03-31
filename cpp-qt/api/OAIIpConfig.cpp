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

#include "OAIIpConfig.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIIpConfig::OAIIpConfig(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIIpConfig::OAIIpConfig() {
    this->initializeModel();
}

OAIIpConfig::~OAIIpConfig() {}

void OAIIpConfig::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIIpConfig::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIIpConfig::fromJson(QString jsonString) {
    
    if ( jsonString.compare("DHCP", Qt::CaseInsensitive) == 0) {
        m_value = eOAIIpConfig::DHCP;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Static", Qt::CaseInsensitive) == 0) {
        m_value = eOAIIpConfig::STATIC;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIIpConfig::fromJsonValue(QJsonValue json) {
fromJson(json.toString());

    applyMinMaxConstraints();
}

QString OAIIpConfig::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIIpConfig::DHCP:
            val = "DHCP";
            break;
        case eOAIIpConfig::STATIC:
            val = "Static";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIIpConfig::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIIpConfig::eOAIIpConfig OAIIpConfig::getValue() const {
    return m_value;
}

void OAIIpConfig::setValue(const OAIIpConfig::eOAIIpConfig& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIIpConfig::isSet() const {
    
    return m_value_isSet;
}

bool OAIIpConfig::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

bool OAIIpConfig::applyMinMaxConstraints() {
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

} // namespace OpenAPI
