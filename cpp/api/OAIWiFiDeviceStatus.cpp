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

#include "OAIWiFiDeviceStatus.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWiFiDeviceStatus::OAIWiFiDeviceStatus(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWiFiDeviceStatus::OAIWiFiDeviceStatus() {
    this->initializeModel();
}

OAIWiFiDeviceStatus::~OAIWiFiDeviceStatus() {}

void OAIWiFiDeviceStatus::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_mac_isSet = false;
    m_mac_isValid = false;

    m_address_isSet = false;
    m_address_isValid = false;

    m_subnet_isSet = false;
    m_subnet_isValid = false;

    m_gateway_isSet = false;
    m_gateway_isValid = false;

    m_networks_isSet = false;
    m_networks_isValid = false;

    m_connected_isSet = false;
    m_connected_isValid = false;

    m_dhcp_state_isSet = false;
    m_dhcp_state_isValid = false;

    m_interface_setup_state_isSet = false;
    m_interface_setup_state_isValid = false;

    m_ip_address_offered_isSet = false;
    m_ip_address_offered_isValid = false;

    m_link_state_isSet = false;
    m_link_state_isValid = false;

    m_wifi_dongle_state_isSet = false;
    m_wifi_dongle_state_isValid = false;

    m_authentication_state_isSet = false;
    m_authentication_state_isValid = false;
}

void OAIWiFiDeviceStatus::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWiFiDeviceStatus::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_mac_isValid = ::OpenAPI::fromJsonValue(mac, json[QString("mac")]);
    m_mac_isSet = !json[QString("mac")].isNull() && m_mac_isValid;

    m_address_isValid = ::OpenAPI::fromJsonValue(address, json[QString("address")]);
    m_address_isSet = !json[QString("address")].isNull() && m_address_isValid;

    m_subnet_isValid = ::OpenAPI::fromJsonValue(subnet, json[QString("subnet")]);
    m_subnet_isSet = !json[QString("subnet")].isNull() && m_subnet_isValid;

    m_gateway_isValid = ::OpenAPI::fromJsonValue(gateway, json[QString("gateway")]);
    m_gateway_isSet = !json[QString("gateway")].isNull() && m_gateway_isValid;

    m_networks_isValid = ::OpenAPI::fromJsonValue(networks, json[QString("networks")]);
    m_networks_isSet = !json[QString("networks")].isNull() && m_networks_isValid;

    m_connected_isValid = ::OpenAPI::fromJsonValue(connected, json[QString("connected")]);
    m_connected_isSet = !json[QString("connected")].isNull() && m_connected_isValid;

    m_dhcp_state_isValid = ::OpenAPI::fromJsonValue(dhcp_state, json[QString("dhcpState")]);
    m_dhcp_state_isSet = !json[QString("dhcpState")].isNull() && m_dhcp_state_isValid;

    m_interface_setup_state_isValid = ::OpenAPI::fromJsonValue(interface_setup_state, json[QString("interfaceSetupState")]);
    m_interface_setup_state_isSet = !json[QString("interfaceSetupState")].isNull() && m_interface_setup_state_isValid;

    m_ip_address_offered_isValid = ::OpenAPI::fromJsonValue(ip_address_offered, json[QString("ipAddressOffered")]);
    m_ip_address_offered_isSet = !json[QString("ipAddressOffered")].isNull() && m_ip_address_offered_isValid;

    m_link_state_isValid = ::OpenAPI::fromJsonValue(link_state, json[QString("linkState")]);
    m_link_state_isSet = !json[QString("linkState")].isNull() && m_link_state_isValid;

    m_wifi_dongle_state_isValid = ::OpenAPI::fromJsonValue(wifi_dongle_state, json[QString("wifiDongleState")]);
    m_wifi_dongle_state_isSet = !json[QString("wifiDongleState")].isNull() && m_wifi_dongle_state_isValid;

    m_authentication_state_isValid = ::OpenAPI::fromJsonValue(authentication_state, json[QString("authenticationState")]);
    m_authentication_state_isSet = !json[QString("authenticationState")].isNull() && m_authentication_state_isValid;

    applyMinMaxConstraints();
}

QString OAIWiFiDeviceStatus::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWiFiDeviceStatus::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (m_mac_isSet) {
        obj.insert(QString("mac"), ::OpenAPI::toJsonValue(mac));
    }
    if (m_address_isSet) {
        obj.insert(QString("address"), ::OpenAPI::toJsonValue(address));
    }
    if (m_subnet_isSet) {
        obj.insert(QString("subnet"), ::OpenAPI::toJsonValue(subnet));
    }
    if (m_gateway_isSet) {
        obj.insert(QString("gateway"), ::OpenAPI::toJsonValue(gateway));
    }
    if (networks.size() > 0) {
        obj.insert(QString("networks"), ::OpenAPI::toJsonValue(networks));
    }
    if (m_connected_isSet) {
        obj.insert(QString("connected"), ::OpenAPI::toJsonValue(connected));
    }
    if (dhcp_state.isSet()) {
        obj.insert(QString("dhcpState"), ::OpenAPI::toJsonValue(dhcp_state));
    }
    if (interface_setup_state.isSet()) {
        obj.insert(QString("interfaceSetupState"), ::OpenAPI::toJsonValue(interface_setup_state));
    }
    if (m_ip_address_offered_isSet) {
        obj.insert(QString("ipAddressOffered"), ::OpenAPI::toJsonValue(ip_address_offered));
    }
    if (m_link_state_isSet) {
        obj.insert(QString("linkState"), ::OpenAPI::toJsonValue(link_state));
    }
    if (m_wifi_dongle_state_isSet) {
        obj.insert(QString("wifiDongleState"), ::OpenAPI::toJsonValue(wifi_dongle_state));
    }
    if (m_authentication_state_isSet) {
        obj.insert(QString("authenticationState"), ::OpenAPI::toJsonValue(authentication_state));
    }
    return obj;
}

QString OAIWiFiDeviceStatus::getName() const {
    return name;
}
void OAIWiFiDeviceStatus::setName(const QString &name) {
	QString v = name;
	this->name = v;
    this->m_name_isSet = true;
}

bool OAIWiFiDeviceStatus::is_name_Set() const{
    return m_name_isSet;
}

bool OAIWiFiDeviceStatus::is_name_Valid() const{
    return m_name_isValid;
}



QString OAIWiFiDeviceStatus::getMac() const {
    return mac;
}
void OAIWiFiDeviceStatus::setMac(const QString &mac) {
	QString v = mac;
	this->mac = v;
    this->m_mac_isSet = true;
}

bool OAIWiFiDeviceStatus::is_mac_Set() const{
    return m_mac_isSet;
}

bool OAIWiFiDeviceStatus::is_mac_Valid() const{
    return m_mac_isValid;
}



QString OAIWiFiDeviceStatus::getAddress() const {
    return address;
}
void OAIWiFiDeviceStatus::setAddress(const QString &address) {
	QString v = address;
	this->address = v;
    this->m_address_isSet = true;
}

bool OAIWiFiDeviceStatus::is_address_Set() const{
    return m_address_isSet;
}

bool OAIWiFiDeviceStatus::is_address_Valid() const{
    return m_address_isValid;
}



QString OAIWiFiDeviceStatus::getSubnet() const {
    return subnet;
}
void OAIWiFiDeviceStatus::setSubnet(const QString &subnet) {
	QString v = subnet;
	this->subnet = v;
    this->m_subnet_isSet = true;
}

bool OAIWiFiDeviceStatus::is_subnet_Set() const{
    return m_subnet_isSet;
}

bool OAIWiFiDeviceStatus::is_subnet_Valid() const{
    return m_subnet_isValid;
}



QString OAIWiFiDeviceStatus::getGateway() const {
    return gateway;
}
void OAIWiFiDeviceStatus::setGateway(const QString &gateway) {
	QString v = gateway;
	this->gateway = v;
    this->m_gateway_isSet = true;
}

bool OAIWiFiDeviceStatus::is_gateway_Set() const{
    return m_gateway_isSet;
}

bool OAIWiFiDeviceStatus::is_gateway_Valid() const{
    return m_gateway_isValid;
}



QList<QString> OAIWiFiDeviceStatus::getNetworks() const {
    return networks;
}
void OAIWiFiDeviceStatus::setNetworks(const QList<QString> &networks) {
	QList<QString> v = networks;
	this->networks = v;
    this->m_networks_isSet = true;
}

bool OAIWiFiDeviceStatus::is_networks_Set() const{
    return m_networks_isSet;
}

bool OAIWiFiDeviceStatus::is_networks_Valid() const{
    return m_networks_isValid;
}


bool OAIWiFiDeviceStatus::isConnected() const {
    return connected;
}
void OAIWiFiDeviceStatus::setConnected(const bool &connected) {
	bool v = connected;
	this->connected = v;
    this->m_connected_isSet = true;
}

bool OAIWiFiDeviceStatus::is_connected_Set() const{
    return m_connected_isSet;
}

bool OAIWiFiDeviceStatus::is_connected_Valid() const{
    return m_connected_isValid;
}


OAIDHCPState OAIWiFiDeviceStatus::getDhcpState() const {
    return dhcp_state;
}
void OAIWiFiDeviceStatus::setDhcpState(const OAIDHCPState &dhcp_state) {
	OAIDHCPState v = dhcp_state;
	this->dhcp_state = v;
    this->m_dhcp_state_isSet = true;
}

bool OAIWiFiDeviceStatus::is_dhcp_state_Set() const{
    return m_dhcp_state_isSet;
}

bool OAIWiFiDeviceStatus::is_dhcp_state_Valid() const{
    return m_dhcp_state_isValid;
}


OAIInterfaceSetupState OAIWiFiDeviceStatus::getInterfaceSetupState() const {
    return interface_setup_state;
}
void OAIWiFiDeviceStatus::setInterfaceSetupState(const OAIInterfaceSetupState &interface_setup_state) {
	OAIInterfaceSetupState v = interface_setup_state;
	this->interface_setup_state = v;
    this->m_interface_setup_state_isSet = true;
}

bool OAIWiFiDeviceStatus::is_interface_setup_state_Set() const{
    return m_interface_setup_state_isSet;
}

bool OAIWiFiDeviceStatus::is_interface_setup_state_Valid() const{
    return m_interface_setup_state_isValid;
}


QString OAIWiFiDeviceStatus::getIpAddressOffered() const {
    return ip_address_offered;
}
void OAIWiFiDeviceStatus::setIpAddressOffered(const QString &ip_address_offered) {
	QString v = ip_address_offered;
	this->ip_address_offered = v;
    this->m_ip_address_offered_isSet = true;
}

bool OAIWiFiDeviceStatus::is_ip_address_offered_Set() const{
    return m_ip_address_offered_isSet;
}

bool OAIWiFiDeviceStatus::is_ip_address_offered_Valid() const{
    return m_ip_address_offered_isValid;
}



QString OAIWiFiDeviceStatus::getLinkState() const {
    return link_state;
}
void OAIWiFiDeviceStatus::setLinkState(const QString &link_state) {
	QString v = link_state;
	this->link_state = v;
    this->m_link_state_isSet = true;
}

bool OAIWiFiDeviceStatus::is_link_state_Set() const{
    return m_link_state_isSet;
}

bool OAIWiFiDeviceStatus::is_link_state_Valid() const{
    return m_link_state_isValid;
}



QString OAIWiFiDeviceStatus::getWifiDongleState() const {
    return wifi_dongle_state;
}
void OAIWiFiDeviceStatus::setWifiDongleState(const QString &wifi_dongle_state) {
	QString v = wifi_dongle_state;
	this->wifi_dongle_state = v;
    this->m_wifi_dongle_state_isSet = true;
}

bool OAIWiFiDeviceStatus::is_wifi_dongle_state_Set() const{
    return m_wifi_dongle_state_isSet;
}

bool OAIWiFiDeviceStatus::is_wifi_dongle_state_Valid() const{
    return m_wifi_dongle_state_isValid;
}



QString OAIWiFiDeviceStatus::getAuthenticationState() const {
    return authentication_state;
}
void OAIWiFiDeviceStatus::setAuthenticationState(const QString &authentication_state) {
	QString v = authentication_state;
	this->authentication_state = v;
    this->m_authentication_state_isSet = true;
}

bool OAIWiFiDeviceStatus::is_authentication_state_Set() const{
    return m_authentication_state_isSet;
}

bool OAIWiFiDeviceStatus::is_authentication_state_Valid() const{
    return m_authentication_state_isValid;
}



bool OAIWiFiDeviceStatus::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mac_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_address_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_subnet_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gateway_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (networks.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_connected_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (dhcp_state.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (interface_setup_state.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_ip_address_offered_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_link_state_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_wifi_dongle_state_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_authentication_state_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWiFiDeviceStatus::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

bool OAIWiFiDeviceStatus::applyMinMaxConstraints() {
	bool valueChanged = false;
	if (is_name_Set())
	{
		bool nameChanged = false;
		QString v = getName();
		if (nameChanged) { setName(v); valueChanged = true; }
	}
	if (is_mac_Set())
	{
		bool macChanged = false;
		QString v = getMac();
		if (macChanged) { setMac(v); valueChanged = true; }
	}
	if (is_address_Set())
	{
		bool addressChanged = false;
		QString v = getAddress();
		if (addressChanged) { setAddress(v); valueChanged = true; }
	}
	if (is_subnet_Set())
	{
		bool subnetChanged = false;
		QString v = getSubnet();
		if (subnetChanged) { setSubnet(v); valueChanged = true; }
	}
	if (is_gateway_Set())
	{
		bool gatewayChanged = false;
		QString v = getGateway();
		if (gatewayChanged) { setGateway(v); valueChanged = true; }
	}
	if (is_ip_address_offered_Set())
	{
		bool ipAddressOfferedChanged = false;
		QString v = getIpAddressOffered();
		if (ipAddressOfferedChanged) { setIpAddressOffered(v); valueChanged = true; }
	}
	if (is_link_state_Set())
	{
		bool linkStateChanged = false;
		QString v = getLinkState();
		if (linkStateChanged) { setLinkState(v); valueChanged = true; }
	}
	if (is_wifi_dongle_state_Set())
	{
		bool wifiDongleStateChanged = false;
		QString v = getWifiDongleState();
		if (wifiDongleStateChanged) { setWifiDongleState(v); valueChanged = true; }
	}
	if (is_authentication_state_Set())
	{
		bool authenticationStateChanged = false;
		QString v = getAuthenticationState();
		if (authenticationStateChanged) { setAuthenticationState(v); valueChanged = true; }
	}
	return valueChanged;
}

} // namespace OpenAPI
