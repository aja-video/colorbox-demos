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

#include "OAIStatusState.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIStatusState::OAIStatusState(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIStatusState::OAIStatusState() {
    this->initializeModel();
}

OAIStatusState::~OAIStatusState() {}

void OAIStatusState::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIStatusState::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIStatusState::fromJson(QString jsonString) {
    
    if ( jsonString.compare("StatusStateGood", Qt::CaseInsensitive) == 0) {
        m_value = eOAIStatusState::STATUSSTATEGOOD;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("StatusStateMaybe", Qt::CaseInsensitive) == 0) {
        m_value = eOAIStatusState::STATUSSTATEMAYBE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("StatusStateBad", Qt::CaseInsensitive) == 0) {
        m_value = eOAIStatusState::STATUSSTATEBAD;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("StatusStateUnknown", Qt::CaseInsensitive) == 0) {
        m_value = eOAIStatusState::STATUSSTATEUNKNOWN;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIStatusState::fromJsonValue(QJsonValue json) {
fromJson(json.toString());

    applyMinMaxConstraints();
}

QString OAIStatusState::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIStatusState::STATUSSTATEGOOD:
            val = "StatusStateGood";
            break;
        case eOAIStatusState::STATUSSTATEMAYBE:
            val = "StatusStateMaybe";
            break;
        case eOAIStatusState::STATUSSTATEBAD:
            val = "StatusStateBad";
            break;
        case eOAIStatusState::STATUSSTATEUNKNOWN:
            val = "StatusStateUnknown";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIStatusState::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIStatusState::eOAIStatusState OAIStatusState::getValue() const {
    return m_value;
}

void OAIStatusState::setValue(const OAIStatusState::eOAIStatusState& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIStatusState::isSet() const {
    
    return m_value_isSet;
}

bool OAIStatusState::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

bool OAIStatusState::applyMinMaxConstraints() {
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

} // namespace OpenAPI