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

#include "OAISystemDiscover.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISystemDiscover::OAISystemDiscover(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISystemDiscover::OAISystemDiscover() {
    this->initializeModel();
}

OAISystemDiscover::~OAISystemDiscover() {}

void OAISystemDiscover::initializeModel() {

    m_service_description_isSet = false;
    m_service_description_isValid = false;

    m_service_type_isSet = false;
    m_service_type_isValid = false;

    m_service_domain_isSet = false;
    m_service_domain_isValid = false;

    m_host_name_isSet = false;
    m_host_name_isValid = false;

    m_ip_address_isSet = false;
    m_ip_address_isValid = false;

    m_port_isSet = false;
    m_port_isValid = false;

    m_device_name_isSet = false;
    m_device_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_board_type_isSet = false;
    m_board_type_isValid = false;

    m_board_number_isSet = false;
    m_board_number_isValid = false;

    m_board_id_isSet = false;
    m_board_id_isValid = false;
}

void OAISystemDiscover::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISystemDiscover::fromJsonObject(QJsonObject json) {

    m_service_description_isValid = ::OpenAPI::fromJsonValue(m_service_description, json[QString("serviceDescription")]);
    m_service_description_isSet = !json[QString("serviceDescription")].isNull() && m_service_description_isValid;

    m_service_type_isValid = ::OpenAPI::fromJsonValue(m_service_type, json[QString("serviceType")]);
    m_service_type_isSet = !json[QString("serviceType")].isNull() && m_service_type_isValid;

    m_service_domain_isValid = ::OpenAPI::fromJsonValue(m_service_domain, json[QString("serviceDomain")]);
    m_service_domain_isSet = !json[QString("serviceDomain")].isNull() && m_service_domain_isValid;

    m_host_name_isValid = ::OpenAPI::fromJsonValue(m_host_name, json[QString("hostName")]);
    m_host_name_isSet = !json[QString("hostName")].isNull() && m_host_name_isValid;

    m_ip_address_isValid = ::OpenAPI::fromJsonValue(m_ip_address, json[QString("ipAddress")]);
    m_ip_address_isSet = !json[QString("ipAddress")].isNull() && m_ip_address_isValid;

    m_port_isValid = ::OpenAPI::fromJsonValue(m_port, json[QString("port")]);
    m_port_isSet = !json[QString("port")].isNull() && m_port_isValid;

    m_device_name_isValid = ::OpenAPI::fromJsonValue(m_device_name, json[QString("deviceName")]);
    m_device_name_isSet = !json[QString("deviceName")].isNull() && m_device_name_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_board_type_isValid = ::OpenAPI::fromJsonValue(m_board_type, json[QString("boardType")]);
    m_board_type_isSet = !json[QString("boardType")].isNull() && m_board_type_isValid;

    m_board_number_isValid = ::OpenAPI::fromJsonValue(m_board_number, json[QString("boardNumber")]);
    m_board_number_isSet = !json[QString("boardNumber")].isNull() && m_board_number_isValid;

    m_board_id_isValid = ::OpenAPI::fromJsonValue(m_board_id, json[QString("boardID")]);
    m_board_id_isSet = !json[QString("boardID")].isNull() && m_board_id_isValid;

    applyMinMaxConstraints();
}

QString OAISystemDiscover::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISystemDiscover::asJsonObject() const {
    QJsonObject obj;
    if (m_service_description_isSet) {
        obj.insert(QString("serviceDescription"), ::OpenAPI::toJsonValue(m_service_description));
    }
    if (m_service_type_isSet) {
        obj.insert(QString("serviceType"), ::OpenAPI::toJsonValue(m_service_type));
    }
    if (m_service_domain_isSet) {
        obj.insert(QString("serviceDomain"), ::OpenAPI::toJsonValue(m_service_domain));
    }
    if (m_host_name_isSet) {
        obj.insert(QString("hostName"), ::OpenAPI::toJsonValue(m_host_name));
    }
    if (m_ip_address_isSet) {
        obj.insert(QString("ipAddress"), ::OpenAPI::toJsonValue(m_ip_address));
    }
    if (m_port_isSet) {
        obj.insert(QString("port"), ::OpenAPI::toJsonValue(m_port));
    }
    if (m_device_name_isSet) {
        obj.insert(QString("deviceName"), ::OpenAPI::toJsonValue(m_device_name));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(m_description));
    }
    if (m_board_type_isSet) {
        obj.insert(QString("boardType"), ::OpenAPI::toJsonValue(m_board_type));
    }
    if (m_board_number_isSet) {
        obj.insert(QString("boardNumber"), ::OpenAPI::toJsonValue(m_board_number));
    }
    if (m_board_id_isSet) {
        obj.insert(QString("boardID"), ::OpenAPI::toJsonValue(m_board_id));
    }
    return obj;
}

QString OAISystemDiscover::getServiceDescription() const {
    return m_service_description;
}
void OAISystemDiscover::setServiceDescription(const QString &service_description) {
	QString v = service_description;
	this->m_service_description = v;
    this->m_service_description_isSet = true;
}

bool OAISystemDiscover::is_service_description_Set() const{
    return m_service_description_isSet;
}

bool OAISystemDiscover::is_service_description_Valid() const{
    return m_service_description_isValid;
}



QString OAISystemDiscover::getServiceType() const {
    return m_service_type;
}
void OAISystemDiscover::setServiceType(const QString &service_type) {
	QString v = service_type;
	this->m_service_type = v;
    this->m_service_type_isSet = true;
}

bool OAISystemDiscover::is_service_type_Set() const{
    return m_service_type_isSet;
}

bool OAISystemDiscover::is_service_type_Valid() const{
    return m_service_type_isValid;
}



QString OAISystemDiscover::getServiceDomain() const {
    return m_service_domain;
}
void OAISystemDiscover::setServiceDomain(const QString &service_domain) {
	QString v = service_domain;
	this->m_service_domain = v;
    this->m_service_domain_isSet = true;
}

bool OAISystemDiscover::is_service_domain_Set() const{
    return m_service_domain_isSet;
}

bool OAISystemDiscover::is_service_domain_Valid() const{
    return m_service_domain_isValid;
}



QString OAISystemDiscover::getHostName() const {
    return m_host_name;
}
void OAISystemDiscover::setHostName(const QString &host_name) {
	QString v = host_name;
	this->m_host_name = v;
    this->m_host_name_isSet = true;
}

bool OAISystemDiscover::is_host_name_Set() const{
    return m_host_name_isSet;
}

bool OAISystemDiscover::is_host_name_Valid() const{
    return m_host_name_isValid;
}



QString OAISystemDiscover::getIpAddress() const {
    return m_ip_address;
}
void OAISystemDiscover::setIpAddress(const QString &ip_address) {
	QString v = ip_address;
	this->m_ip_address = v;
    this->m_ip_address_isSet = true;
}

bool OAISystemDiscover::is_ip_address_Set() const{
    return m_ip_address_isSet;
}

bool OAISystemDiscover::is_ip_address_Valid() const{
    return m_ip_address_isValid;
}



double OAISystemDiscover::getPort() const {
    return m_port;
}
void OAISystemDiscover::setPort(const double &port) {
	double v = port;
	this->m_port = v;
    this->m_port_isSet = true;
}

bool OAISystemDiscover::is_port_Set() const{
    return m_port_isSet;
}

bool OAISystemDiscover::is_port_Valid() const{
    return m_port_isValid;
}



QString OAISystemDiscover::getDeviceName() const {
    return m_device_name;
}
void OAISystemDiscover::setDeviceName(const QString &device_name) {
	QString v = device_name;
	this->m_device_name = v;
    this->m_device_name_isSet = true;
}

bool OAISystemDiscover::is_device_name_Set() const{
    return m_device_name_isSet;
}

bool OAISystemDiscover::is_device_name_Valid() const{
    return m_device_name_isValid;
}



QString OAISystemDiscover::getDescription() const {
    return m_description;
}
void OAISystemDiscover::setDescription(const QString &description) {
	QString v = description;
	this->m_description = v;
    this->m_description_isSet = true;
}

bool OAISystemDiscover::is_description_Set() const{
    return m_description_isSet;
}

bool OAISystemDiscover::is_description_Valid() const{
    return m_description_isValid;
}



QString OAISystemDiscover::getBoardType() const {
    return m_board_type;
}
void OAISystemDiscover::setBoardType(const QString &board_type) {
	QString v = board_type;
	this->m_board_type = v;
    this->m_board_type_isSet = true;
}

bool OAISystemDiscover::is_board_type_Set() const{
    return m_board_type_isSet;
}

bool OAISystemDiscover::is_board_type_Valid() const{
    return m_board_type_isValid;
}



QString OAISystemDiscover::getBoardNumber() const {
    return m_board_number;
}
void OAISystemDiscover::setBoardNumber(const QString &board_number) {
	QString v = board_number;
	this->m_board_number = v;
    this->m_board_number_isSet = true;
}

bool OAISystemDiscover::is_board_number_Set() const{
    return m_board_number_isSet;
}

bool OAISystemDiscover::is_board_number_Valid() const{
    return m_board_number_isValid;
}



QString OAISystemDiscover::getBoardId() const {
    return m_board_id;
}
void OAISystemDiscover::setBoardId(const QString &board_id) {
	QString v = board_id;
	this->m_board_id = v;
    this->m_board_id_isSet = true;
}

bool OAISystemDiscover::is_board_id_Set() const{
    return m_board_id_isSet;
}

bool OAISystemDiscover::is_board_id_Valid() const{
    return m_board_id_isValid;
}



bool OAISystemDiscover::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_service_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_service_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_service_domain_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_host_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ip_address_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_port_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_device_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_board_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_board_number_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_board_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISystemDiscover::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

bool OAISystemDiscover::applyMinMaxConstraints() {
	bool anyMinMaxValueChanged = false;
	if (is_service_description_Set())
	{
		bool serviceDescriptionChanged = false;
		QString v = getServiceDescription();
		if (serviceDescriptionChanged) { setServiceDescription(v); anyMinMaxValueChanged = true; }
	}
	if (is_service_type_Set())
	{
		bool serviceTypeChanged = false;
		QString v = getServiceType();
		if (serviceTypeChanged) { setServiceType(v); anyMinMaxValueChanged = true; }
	}
	if (is_service_domain_Set())
	{
		bool serviceDomainChanged = false;
		QString v = getServiceDomain();
		if (serviceDomainChanged) { setServiceDomain(v); anyMinMaxValueChanged = true; }
	}
	if (is_host_name_Set())
	{
		bool hostNameChanged = false;
		QString v = getHostName();
		if (hostNameChanged) { setHostName(v); anyMinMaxValueChanged = true; }
	}
	if (is_ip_address_Set())
	{
		bool ipAddressChanged = false;
		QString v = getIpAddress();
		if (ipAddressChanged) { setIpAddress(v); anyMinMaxValueChanged = true; }
	}
	if (is_port_Set())
	{
		bool portChanged = false;
		double v = getPort();
		if (portChanged) { setPort(v); anyMinMaxValueChanged = true; }
	}
	if (is_device_name_Set())
	{
		bool deviceNameChanged = false;
		QString v = getDeviceName();
		if (deviceNameChanged) { setDeviceName(v); anyMinMaxValueChanged = true; }
	}
	if (is_description_Set())
	{
		bool descriptionChanged = false;
		QString v = getDescription();
		if (descriptionChanged) { setDescription(v); anyMinMaxValueChanged = true; }
	}
	if (is_board_type_Set())
	{
		bool boardTypeChanged = false;
		QString v = getBoardType();
		if (boardTypeChanged) { setBoardType(v); anyMinMaxValueChanged = true; }
	}
	if (is_board_number_Set())
	{
		bool boardNumberChanged = false;
		QString v = getBoardNumber();
		if (boardNumberChanged) { setBoardNumber(v); anyMinMaxValueChanged = true; }
	}
	if (is_board_id_Set())
	{
		bool boardIDChanged = false;
		QString v = getBoardId();
		if (boardIDChanged) { setBoardId(v); anyMinMaxValueChanged = true; }
	}
	return anyMinMaxValueChanged;
}

} // namespace OpenAPI
