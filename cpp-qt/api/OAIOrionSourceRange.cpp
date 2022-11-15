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

#include "OAIOrionSourceRange.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOrionSourceRange::OAIOrionSourceRange(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOrionSourceRange::OAIOrionSourceRange() {
    this->initializeModel();
}

OAIOrionSourceRange::~OAIOrionSourceRange() {}

void OAIOrionSourceRange::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIOrionSourceRange::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIOrionSourceRange::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Narrow", Qt::CaseInsensitive) == 0) {
        m_value = eOAIOrionSourceRange::NARROW;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Full", Qt::CaseInsensitive) == 0) {
        m_value = eOAIOrionSourceRange::FULL;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIOrionSourceRange::fromJsonValue(QJsonValue json) {
fromJson(json.toString());

    applyMinMaxConstraints();
}

QString OAIOrionSourceRange::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIOrionSourceRange::NARROW:
            val = "Narrow";
            break;
        case eOAIOrionSourceRange::FULL:
            val = "Full";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIOrionSourceRange::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIOrionSourceRange::eOAIOrionSourceRange OAIOrionSourceRange::getValue() const {
    return m_value;
}

void OAIOrionSourceRange::setValue(const OAIOrionSourceRange::eOAIOrionSourceRange& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIOrionSourceRange::isSet() const {
    
    return m_value_isSet;
}

bool OAIOrionSourceRange::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

bool OAIOrionSourceRange::applyMinMaxConstraints() {
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

} // namespace OpenAPI