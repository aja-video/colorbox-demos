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

#include "OAIAncCaptureFilter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAncCaptureFilter::OAIAncCaptureFilter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAncCaptureFilter::OAIAncCaptureFilter() {
    this->initializeModel();
}

OAIAncCaptureFilter::~OAIAncCaptureFilter() {}

void OAIAncCaptureFilter::initializeModel() {

    m_enable_isSet = false;
    m_enable_isValid = false;

    m_dids_isSet = false;
    m_dids_isValid = false;
}

void OAIAncCaptureFilter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAncCaptureFilter::fromJsonObject(QJsonObject json) {

    m_enable_isValid = ::OpenAPI::fromJsonValue(enable, json[QString("enable")]);
    m_enable_isSet = !json[QString("enable")].isNull() && m_enable_isValid;

    m_dids_isValid = ::OpenAPI::fromJsonValue(dids, json[QString("dids")]);
    m_dids_isSet = !json[QString("dids")].isNull() && m_dids_isValid;

    applyMinMaxConstraints();
}

QString OAIAncCaptureFilter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAncCaptureFilter::asJsonObject() const {
    QJsonObject obj;
    if (m_enable_isSet) {
        obj.insert(QString("enable"), ::OpenAPI::toJsonValue(enable));
    }
    if (dids.size() > 0) {
        obj.insert(QString("dids"), ::OpenAPI::toJsonValue(dids));
    }
    return obj;
}

bool OAIAncCaptureFilter::isEnable() const {
    return enable;
}
void OAIAncCaptureFilter::setEnable(const bool &enable) {
	bool v = enable;
	this->enable = v;
    this->m_enable_isSet = true;
}

bool OAIAncCaptureFilter::is_enable_Set() const{
    return m_enable_isSet;
}

bool OAIAncCaptureFilter::is_enable_Valid() const{
    return m_enable_isValid;
}


QList<double> OAIAncCaptureFilter::getDids() const {
    return dids;
}
void OAIAncCaptureFilter::setDids(const QList<double> &dids) {
	QList<double> v = dids;
	this->dids = v;
    this->m_dids_isSet = true;
}

bool OAIAncCaptureFilter::is_dids_Set() const{
    return m_dids_isSet;
}

bool OAIAncCaptureFilter::is_dids_Valid() const{
    return m_dids_isValid;
}


bool OAIAncCaptureFilter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_enable_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (dids.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAncCaptureFilter::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

bool OAIAncCaptureFilter::applyMinMaxConstraints() {
	bool valueChanged = false;
	return valueChanged;
}

} // namespace OpenAPI