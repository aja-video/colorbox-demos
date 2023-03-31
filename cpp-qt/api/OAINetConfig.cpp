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

#include "OAINetConfig.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAINetConfig::OAINetConfig(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAINetConfig::OAINetConfig() {
    this->initializeModel();
}

OAINetConfig::~OAINetConfig() {}

void OAINetConfig::initializeModel() {

    m_ip_config_isSet = false;
    m_ip_config_isValid = false;

    m_ip_change_commit_isSet = false;
    m_ip_change_commit_isValid = false;
}

void OAINetConfig::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAINetConfig::fromJsonObject(QJsonObject json) {

    m_ip_config_isValid = ::OpenAPI::fromJsonValue(m_ip_config, json[QString("ipConfig")]);
    m_ip_config_isSet = !json[QString("ipConfig")].isNull() && m_ip_config_isValid;

    m_ip_change_commit_isValid = ::OpenAPI::fromJsonValue(m_ip_change_commit, json[QString("ipChangeCommit")]);
    m_ip_change_commit_isSet = !json[QString("ipChangeCommit")].isNull() && m_ip_change_commit_isValid;

    applyMinMaxConstraints();
}

QString OAINetConfig::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAINetConfig::asJsonObject() const {
    QJsonObject obj;
    if (m_ip_config.isSet()) {
        obj.insert(QString("ipConfig"), ::OpenAPI::toJsonValue(m_ip_config));
    }
    if (m_ip_change_commit_isSet) {
        obj.insert(QString("ipChangeCommit"), ::OpenAPI::toJsonValue(m_ip_change_commit));
    }
    return obj;
}

OAIIpConfig OAINetConfig::getIpConfig() const {
    return m_ip_config;
}
void OAINetConfig::setIpConfig(const OAIIpConfig &ip_config) {
	OAIIpConfig v = ip_config;
	this->m_ip_config = v;
    this->m_ip_config_isSet = true;
}

bool OAINetConfig::is_ip_config_Set() const{
    return m_ip_config_isSet;
}

bool OAINetConfig::is_ip_config_Valid() const{
    return m_ip_config_isValid;
}


qint32 OAINetConfig::getIpChangeCommit() const {
    return m_ip_change_commit;
}
void OAINetConfig::setIpChangeCommit(const qint32 &ip_change_commit) {
	qint32 v = ip_change_commit;
	this->m_ip_change_commit = v;
    this->m_ip_change_commit_isSet = true;
}

bool OAINetConfig::is_ip_change_commit_Set() const{
    return m_ip_change_commit_isSet;
}

bool OAINetConfig::is_ip_change_commit_Valid() const{
    return m_ip_change_commit_isValid;
}



bool OAINetConfig::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_ip_config.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_ip_change_commit_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAINetConfig::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

bool OAINetConfig::applyMinMaxConstraints() {
	bool anyMinMaxValueChanged = false;
	if (is_ip_change_commit_Set())
	{
		bool ipChangeCommitChanged = false;
		qint32 v = getIpChangeCommit();
		if (ipChangeCommitChanged) { setIpChangeCommit(v); anyMinMaxValueChanged = true; }
	}
	return anyMinMaxValueChanged;
}

} // namespace OpenAPI
