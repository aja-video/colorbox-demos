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

#include "OAIVideoFormat.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIVideoFormat::OAIVideoFormat(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIVideoFormat::OAIVideoFormat() {
    this->initializeModel();
}

OAIVideoFormat::~OAIVideoFormat() {}

void OAIVideoFormat::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIVideoFormat::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIVideoFormat::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Auto", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::AUTO;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Unknown", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::UNKNOWN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("720p50", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_720P50;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("720p59.94", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_720P59_94;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("720p60", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_720P60;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("1080i50", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_1080I50;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("1080i59.94", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_1080I59_94;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("1080i60", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_1080I60;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("1080PsF23.98", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_1080PSF23_98;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("1080PsF24", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_1080PSF24;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("1080PsF25", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_1080PSF25;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("1080PsF29.97", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_1080PSF29_97;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("1080PsF30", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_1080PSF30;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("1080p23.98", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_1080P23_98;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("1080p24", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_1080P24;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("1080p25", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_1080P25;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("1080p29.97", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_1080P29_97;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("1080p30", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_1080P30;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("1080p50", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_1080P50;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("1080p59.94", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_1080P59_94;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("1080p60", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_1080P60;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("2Kp23.98", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_2KP23_98;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("2Kp24", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_2KP24;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("2Kp25", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_2KP25;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("2Kp29.97", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_2KP29_97;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("2Kp30", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_2KP30;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("2Kp47.95", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_2KP47_95;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("2Kp48", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_2KP48;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("2Kp50", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_2KP50;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("2Kp59.94", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_2KP59_94;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("2Kp60", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_2KP60;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("2KPsF23.98", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_2KPSF23_98;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("2KPsF24", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_2KPSF24;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("2KPsF25", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_2KPSF25;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("UHDp23.98", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::UHDP23_98;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("UHDp24", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::UHDP24;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("UHDp25", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::UHDP25;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("UHDp29.97", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::UHDP29_97;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("UHDp30", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::UHDP30;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("UHDp50", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::UHDP50;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("UHDp59.94", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::UHDP59_94;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("UHDp60", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::UHDP60;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("4Kp23.98", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_4KP23_98;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("4Kp24", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_4KP24;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("4Kp25", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_4KP25;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("4Kp29.97", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_4KP29_97;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("4Kp30", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_4KP30;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("4Kp47.95", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_4KP47_95;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("4Kp48", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_4KP48;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("4Kp50", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_4KP50;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("4Kp59.94", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_4KP59_94;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("4Kp60", Qt::CaseInsensitive) == 0) {
        m_value = eOAIVideoFormat::_4KP60;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIVideoFormat::fromJsonValue(QJsonValue json) {
fromJson(json.toString());

    applyMinMaxConstraints();
}

QString OAIVideoFormat::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIVideoFormat::AUTO:
            val = "Auto";
            break;
        case eOAIVideoFormat::UNKNOWN:
            val = "Unknown";
            break;
        case eOAIVideoFormat::_720P50:
            val = "720p50";
            break;
        case eOAIVideoFormat::_720P59_94:
            val = "720p59.94";
            break;
        case eOAIVideoFormat::_720P60:
            val = "720p60";
            break;
        case eOAIVideoFormat::_1080I50:
            val = "1080i50";
            break;
        case eOAIVideoFormat::_1080I59_94:
            val = "1080i59.94";
            break;
        case eOAIVideoFormat::_1080I60:
            val = "1080i60";
            break;
        case eOAIVideoFormat::_1080PSF23_98:
            val = "1080PsF23.98";
            break;
        case eOAIVideoFormat::_1080PSF24:
            val = "1080PsF24";
            break;
        case eOAIVideoFormat::_1080PSF25:
            val = "1080PsF25";
            break;
        case eOAIVideoFormat::_1080PSF29_97:
            val = "1080PsF29.97";
            break;
        case eOAIVideoFormat::_1080PSF30:
            val = "1080PsF30";
            break;
        case eOAIVideoFormat::_1080P23_98:
            val = "1080p23.98";
            break;
        case eOAIVideoFormat::_1080P24:
            val = "1080p24";
            break;
        case eOAIVideoFormat::_1080P25:
            val = "1080p25";
            break;
        case eOAIVideoFormat::_1080P29_97:
            val = "1080p29.97";
            break;
        case eOAIVideoFormat::_1080P30:
            val = "1080p30";
            break;
        case eOAIVideoFormat::_1080P50:
            val = "1080p50";
            break;
        case eOAIVideoFormat::_1080P59_94:
            val = "1080p59.94";
            break;
        case eOAIVideoFormat::_1080P60:
            val = "1080p60";
            break;
        case eOAIVideoFormat::_2KP23_98:
            val = "2Kp23.98";
            break;
        case eOAIVideoFormat::_2KP24:
            val = "2Kp24";
            break;
        case eOAIVideoFormat::_2KP25:
            val = "2Kp25";
            break;
        case eOAIVideoFormat::_2KP29_97:
            val = "2Kp29.97";
            break;
        case eOAIVideoFormat::_2KP30:
            val = "2Kp30";
            break;
        case eOAIVideoFormat::_2KP47_95:
            val = "2Kp47.95";
            break;
        case eOAIVideoFormat::_2KP48:
            val = "2Kp48";
            break;
        case eOAIVideoFormat::_2KP50:
            val = "2Kp50";
            break;
        case eOAIVideoFormat::_2KP59_94:
            val = "2Kp59.94";
            break;
        case eOAIVideoFormat::_2KP60:
            val = "2Kp60";
            break;
        case eOAIVideoFormat::_2KPSF23_98:
            val = "2KPsF23.98";
            break;
        case eOAIVideoFormat::_2KPSF24:
            val = "2KPsF24";
            break;
        case eOAIVideoFormat::_2KPSF25:
            val = "2KPsF25";
            break;
        case eOAIVideoFormat::UHDP23_98:
            val = "UHDp23.98";
            break;
        case eOAIVideoFormat::UHDP24:
            val = "UHDp24";
            break;
        case eOAIVideoFormat::UHDP25:
            val = "UHDp25";
            break;
        case eOAIVideoFormat::UHDP29_97:
            val = "UHDp29.97";
            break;
        case eOAIVideoFormat::UHDP30:
            val = "UHDp30";
            break;
        case eOAIVideoFormat::UHDP50:
            val = "UHDp50";
            break;
        case eOAIVideoFormat::UHDP59_94:
            val = "UHDp59.94";
            break;
        case eOAIVideoFormat::UHDP60:
            val = "UHDp60";
            break;
        case eOAIVideoFormat::_4KP23_98:
            val = "4Kp23.98";
            break;
        case eOAIVideoFormat::_4KP24:
            val = "4Kp24";
            break;
        case eOAIVideoFormat::_4KP25:
            val = "4Kp25";
            break;
        case eOAIVideoFormat::_4KP29_97:
            val = "4Kp29.97";
            break;
        case eOAIVideoFormat::_4KP30:
            val = "4Kp30";
            break;
        case eOAIVideoFormat::_4KP47_95:
            val = "4Kp47.95";
            break;
        case eOAIVideoFormat::_4KP48:
            val = "4Kp48";
            break;
        case eOAIVideoFormat::_4KP50:
            val = "4Kp50";
            break;
        case eOAIVideoFormat::_4KP59_94:
            val = "4Kp59.94";
            break;
        case eOAIVideoFormat::_4KP60:
            val = "4Kp60";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIVideoFormat::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIVideoFormat::eOAIVideoFormat OAIVideoFormat::getValue() const {
    return m_value;
}

void OAIVideoFormat::setValue(const OAIVideoFormat::eOAIVideoFormat& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIVideoFormat::isSet() const {
    
    return m_value_isSet;
}

bool OAIVideoFormat::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

bool OAIVideoFormat::applyMinMaxConstraints() {
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

} // namespace OpenAPI
