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

#include "OAIColorfrontMode.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIColorfrontMode::OAIColorfrontMode(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIColorfrontMode::OAIColorfrontMode() {
    this->initializeModel();
}

OAIColorfrontMode::~OAIColorfrontMode() {}

void OAIColorfrontMode::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIColorfrontMode::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIColorfrontMode::fromJson(QString jsonString) {
    
    if ( jsonString.compare("TV", Qt::CaseInsensitive) == 0) {
        m_value = eOAIColorfrontMode::TV;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Live", Qt::CaseInsensitive) == 0) {
        m_value = eOAIColorfrontMode::LIVE;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIColorfrontMode::fromJsonValue(QJsonValue json) {
fromJson(json.toString());

    applyMinMaxConstraints();
}

QString OAIColorfrontMode::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIColorfrontMode::TV:
            val = "TV";
            break;
        case eOAIColorfrontMode::LIVE:
            val = "Live";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIColorfrontMode::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIColorfrontMode::eOAIColorfrontMode OAIColorfrontMode::getValue() const {
    return m_value;
}

void OAIColorfrontMode::setValue(const OAIColorfrontMode::eOAIColorfrontMode& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIColorfrontMode::isSet() const {
    
    return m_value_isSet;
}

bool OAIColorfrontMode::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

bool OAIColorfrontMode::applyMinMaxConstraints() {
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

} // namespace OpenAPI
