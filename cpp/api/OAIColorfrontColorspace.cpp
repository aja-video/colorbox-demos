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

#include "OAIColorfrontColorspace.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIColorfrontColorspace::OAIColorfrontColorspace(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIColorfrontColorspace::OAIColorfrontColorspace() {
    this->initializeModel();
}

OAIColorfrontColorspace::~OAIColorfrontColorspace() {}

void OAIColorfrontColorspace::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIColorfrontColorspace::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIColorfrontColorspace::fromJson(QString jsonString) {
    
    if ( jsonString.compare("BT709", Qt::CaseInsensitive) == 0) {
        m_value = eOAIColorfrontColorspace::BT709;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PQ BT2020", Qt::CaseInsensitive) == 0) {
        m_value = eOAIColorfrontColorspace::PQ_BT2020;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("HLG BT2020", Qt::CaseInsensitive) == 0) {
        m_value = eOAIColorfrontColorspace::HLG_BT2020;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIColorfrontColorspace::fromJsonValue(QJsonValue json) {
fromJson(json.toString());

    applyMinMaxConstraints();
}

QString OAIColorfrontColorspace::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIColorfrontColorspace::BT709:
            val = "BT709";
            break;
        case eOAIColorfrontColorspace::PQ_BT2020:
            val = "PQ BT2020";
            break;
        case eOAIColorfrontColorspace::HLG_BT2020:
            val = "HLG BT2020";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIColorfrontColorspace::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIColorfrontColorspace::eOAIColorfrontColorspace OAIColorfrontColorspace::getValue() const {
    return m_value;
}

void OAIColorfrontColorspace::setValue(const OAIColorfrontColorspace::eOAIColorfrontColorspace& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIColorfrontColorspace::isSet() const {
    
    return m_value_isSet;
}

bool OAIColorfrontColorspace::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

bool OAIColorfrontColorspace::applyMinMaxConstraints() {
	bool valueChanged = false;
	return valueChanged;
}

} // namespace OpenAPI
