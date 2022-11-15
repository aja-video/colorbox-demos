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

#include "OAIScanMode.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIScanMode::OAIScanMode(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIScanMode::OAIScanMode() {
    this->initializeModel();
}

OAIScanMode::~OAIScanMode() {}

void OAIScanMode::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIScanMode::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIScanMode::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Auto", Qt::CaseInsensitive) == 0) {
        m_value = eOAIScanMode::AUTO;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Progressive", Qt::CaseInsensitive) == 0) {
        m_value = eOAIScanMode::PROGRESSIVE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Interlaced", Qt::CaseInsensitive) == 0) {
        m_value = eOAIScanMode::INTERLACED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PsF", Qt::CaseInsensitive) == 0) {
        m_value = eOAIScanMode::PSF;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIScanMode::fromJsonValue(QJsonValue json) {
fromJson(json.toString());

    applyMinMaxConstraints();
}

QString OAIScanMode::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIScanMode::AUTO:
            val = "Auto";
            break;
        case eOAIScanMode::PROGRESSIVE:
            val = "Progressive";
            break;
        case eOAIScanMode::INTERLACED:
            val = "Interlaced";
            break;
        case eOAIScanMode::PSF:
            val = "PsF";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIScanMode::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIScanMode::eOAIScanMode OAIScanMode::getValue() const {
    return m_value;
}

void OAIScanMode::setValue(const OAIScanMode::eOAIScanMode& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIScanMode::isSet() const {
    
    return m_value_isSet;
}

bool OAIScanMode::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

bool OAIScanMode::applyMinMaxConstraints() {
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

} // namespace OpenAPI