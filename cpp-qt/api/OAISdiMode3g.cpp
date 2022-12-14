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

#include "OAISdiMode3g.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISdiMode3g::OAISdiMode3g(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISdiMode3g::OAISdiMode3g() {
    this->initializeModel();
}

OAISdiMode3g::~OAISdiMode3g() {}

void OAISdiMode3g::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAISdiMode3g::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAISdiMode3g::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Auto", Qt::CaseInsensitive) == 0) {
        m_value = eOAISdiMode3g::AUTO;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("A", Qt::CaseInsensitive) == 0) {
        m_value = eOAISdiMode3g::A;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("B", Qt::CaseInsensitive) == 0) {
        m_value = eOAISdiMode3g::B;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAISdiMode3g::fromJsonValue(QJsonValue json) {
fromJson(json.toString());

    applyMinMaxConstraints();
}

QString OAISdiMode3g::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAISdiMode3g::AUTO:
            val = "Auto";
            break;
        case eOAISdiMode3g::A:
            val = "A";
            break;
        case eOAISdiMode3g::B:
            val = "B";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAISdiMode3g::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAISdiMode3g::eOAISdiMode3g OAISdiMode3g::getValue() const {
    return m_value;
}

void OAISdiMode3g::setValue(const OAISdiMode3g::eOAISdiMode3g& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAISdiMode3g::isSet() const {
    
    return m_value_isSet;
}

bool OAISdiMode3g::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

bool OAISdiMode3g::applyMinMaxConstraints() {
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

} // namespace OpenAPI
