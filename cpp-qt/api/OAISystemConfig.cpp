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

#include "OAISystemConfig.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISystemConfig::OAISystemConfig(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISystemConfig::OAISystemConfig() {
    this->initializeModel();
}

OAISystemConfig::~OAISystemConfig() {}

void OAISystemConfig::initializeModel() {

    m_host_name_isSet = false;
    m_host_name_isValid = false;

    m_system_organization_name_isSet = false;
    m_system_organization_name_isValid = false;

    m_ssdp_enable_isSet = false;
    m_ssdp_enable_isValid = false;

    m_identify_isSet = false;
    m_identify_isValid = false;

    m_update_request_isSet = false;
    m_update_request_isValid = false;

    m_reboot_isSet = false;
    m_reboot_isValid = false;

    m_refresh_isSet = false;
    m_refresh_isValid = false;

    m_shutdown_isSet = false;
    m_shutdown_isValid = false;

    m_factory_preset_isSet = false;
    m_factory_preset_isValid = false;

    m_factory_reset_isSet = false;
    m_factory_reset_isValid = false;

    m_transform_mode_isSet = false;
    m_transform_mode_isValid = false;

    m_preview_anc_enable_isSet = false;
    m_preview_anc_enable_isValid = false;

    m_authentication_enable_isSet = false;
    m_authentication_enable_isValid = false;

    m_fan_speed_isSet = false;
    m_fan_speed_isValid = false;

    m_startup_preset_isSet = false;
    m_startup_preset_isValid = false;
}

void OAISystemConfig::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISystemConfig::fromJsonObject(QJsonObject json) {

    m_host_name_isValid = ::OpenAPI::fromJsonValue(m_host_name, json[QString("hostName")]);
    m_host_name_isSet = !json[QString("hostName")].isNull() && m_host_name_isValid;

    m_system_organization_name_isValid = ::OpenAPI::fromJsonValue(m_system_organization_name, json[QString("systemOrganizationName")]);
    m_system_organization_name_isSet = !json[QString("systemOrganizationName")].isNull() && m_system_organization_name_isValid;

    m_ssdp_enable_isValid = ::OpenAPI::fromJsonValue(m_ssdp_enable, json[QString("ssdpEnable")]);
    m_ssdp_enable_isSet = !json[QString("ssdpEnable")].isNull() && m_ssdp_enable_isValid;

    m_identify_isValid = ::OpenAPI::fromJsonValue(m_identify, json[QString("identify")]);
    m_identify_isSet = !json[QString("identify")].isNull() && m_identify_isValid;

    m_update_request_isValid = ::OpenAPI::fromJsonValue(m_update_request, json[QString("updateRequest")]);
    m_update_request_isSet = !json[QString("updateRequest")].isNull() && m_update_request_isValid;

    m_reboot_isValid = ::OpenAPI::fromJsonValue(m_reboot, json[QString("reboot")]);
    m_reboot_isSet = !json[QString("reboot")].isNull() && m_reboot_isValid;

    m_refresh_isValid = ::OpenAPI::fromJsonValue(m_refresh, json[QString("refresh")]);
    m_refresh_isSet = !json[QString("refresh")].isNull() && m_refresh_isValid;

    m_shutdown_isValid = ::OpenAPI::fromJsonValue(m_shutdown, json[QString("shutdown")]);
    m_shutdown_isSet = !json[QString("shutdown")].isNull() && m_shutdown_isValid;

    m_factory_preset_isValid = ::OpenAPI::fromJsonValue(m_factory_preset, json[QString("factoryPreset")]);
    m_factory_preset_isSet = !json[QString("factoryPreset")].isNull() && m_factory_preset_isValid;

    m_factory_reset_isValid = ::OpenAPI::fromJsonValue(m_factory_reset, json[QString("factoryReset")]);
    m_factory_reset_isSet = !json[QString("factoryReset")].isNull() && m_factory_reset_isValid;

    m_transform_mode_isValid = ::OpenAPI::fromJsonValue(m_transform_mode, json[QString("transformMode")]);
    m_transform_mode_isSet = !json[QString("transformMode")].isNull() && m_transform_mode_isValid;

    m_preview_anc_enable_isValid = ::OpenAPI::fromJsonValue(m_preview_anc_enable, json[QString("previewAncEnable")]);
    m_preview_anc_enable_isSet = !json[QString("previewAncEnable")].isNull() && m_preview_anc_enable_isValid;

    m_authentication_enable_isValid = ::OpenAPI::fromJsonValue(m_authentication_enable, json[QString("authenticationEnable")]);
    m_authentication_enable_isSet = !json[QString("authenticationEnable")].isNull() && m_authentication_enable_isValid;

    m_fan_speed_isValid = ::OpenAPI::fromJsonValue(m_fan_speed, json[QString("fanSpeed")]);
    m_fan_speed_isSet = !json[QString("fanSpeed")].isNull() && m_fan_speed_isValid;

    m_startup_preset_isValid = ::OpenAPI::fromJsonValue(m_startup_preset, json[QString("startupPreset")]);
    m_startup_preset_isSet = !json[QString("startupPreset")].isNull() && m_startup_preset_isValid;

    applyMinMaxConstraints();
}

QString OAISystemConfig::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISystemConfig::asJsonObject() const {
    QJsonObject obj;
    if (m_host_name_isSet) {
        obj.insert(QString("hostName"), ::OpenAPI::toJsonValue(m_host_name));
    }
    if (m_system_organization_name_isSet) {
        obj.insert(QString("systemOrganizationName"), ::OpenAPI::toJsonValue(m_system_organization_name));
    }
    if (m_ssdp_enable_isSet) {
        obj.insert(QString("ssdpEnable"), ::OpenAPI::toJsonValue(m_ssdp_enable));
    }
    if (m_identify_isSet) {
        obj.insert(QString("identify"), ::OpenAPI::toJsonValue(m_identify));
    }
    if (m_update_request_isSet) {
        obj.insert(QString("updateRequest"), ::OpenAPI::toJsonValue(m_update_request));
    }
    if (m_reboot_isSet) {
        obj.insert(QString("reboot"), ::OpenAPI::toJsonValue(m_reboot));
    }
    if (m_refresh_isSet) {
        obj.insert(QString("refresh"), ::OpenAPI::toJsonValue(m_refresh));
    }
    if (m_shutdown_isSet) {
        obj.insert(QString("shutdown"), ::OpenAPI::toJsonValue(m_shutdown));
    }
    if (m_factory_preset_isSet) {
        obj.insert(QString("factoryPreset"), ::OpenAPI::toJsonValue(m_factory_preset));
    }
    if (m_factory_reset_isSet) {
        obj.insert(QString("factoryReset"), ::OpenAPI::toJsonValue(m_factory_reset));
    }
    if (m_transform_mode.isSet()) {
        obj.insert(QString("transformMode"), ::OpenAPI::toJsonValue(m_transform_mode));
    }
    if (m_preview_anc_enable_isSet) {
        obj.insert(QString("previewAncEnable"), ::OpenAPI::toJsonValue(m_preview_anc_enable));
    }
    if (m_authentication_enable_isSet) {
        obj.insert(QString("authenticationEnable"), ::OpenAPI::toJsonValue(m_authentication_enable));
    }
    if (m_fan_speed_isSet) {
        obj.insert(QString("fanSpeed"), ::OpenAPI::toJsonValue(m_fan_speed));
    }
    if (m_startup_preset_isSet) {
        obj.insert(QString("startupPreset"), ::OpenAPI::toJsonValue(m_startup_preset));
    }
    return obj;
}

QString OAISystemConfig::getHostName() const {
    return m_host_name;
}
void OAISystemConfig::setHostName(const QString &host_name) {
	QString v = host_name;
	this->m_host_name = v;
    this->m_host_name_isSet = true;
}

bool OAISystemConfig::is_host_name_Set() const{
    return m_host_name_isSet;
}

bool OAISystemConfig::is_host_name_Valid() const{
    return m_host_name_isValid;
}



QString OAISystemConfig::getSystemOrganizationName() const {
    return m_system_organization_name;
}
void OAISystemConfig::setSystemOrganizationName(const QString &system_organization_name) {
	QString v = system_organization_name;
	this->m_system_organization_name = v;
    this->m_system_organization_name_isSet = true;
}

bool OAISystemConfig::is_system_organization_name_Set() const{
    return m_system_organization_name_isSet;
}

bool OAISystemConfig::is_system_organization_name_Valid() const{
    return m_system_organization_name_isValid;
}



bool OAISystemConfig::isSsdpEnable() const {
    return m_ssdp_enable;
}
void OAISystemConfig::setSsdpEnable(const bool &ssdp_enable) {
	bool v = ssdp_enable;
	this->m_ssdp_enable = v;
    this->m_ssdp_enable_isSet = true;
}

bool OAISystemConfig::is_ssdp_enable_Set() const{
    return m_ssdp_enable_isSet;
}

bool OAISystemConfig::is_ssdp_enable_Valid() const{
    return m_ssdp_enable_isValid;
}


bool OAISystemConfig::isIdentify() const {
    return m_identify;
}
void OAISystemConfig::setIdentify(const bool &identify) {
	bool v = identify;
	this->m_identify = v;
    this->m_identify_isSet = true;
}

bool OAISystemConfig::is_identify_Set() const{
    return m_identify_isSet;
}

bool OAISystemConfig::is_identify_Valid() const{
    return m_identify_isValid;
}


bool OAISystemConfig::isUpdateRequest() const {
    return m_update_request;
}
void OAISystemConfig::setUpdateRequest(const bool &update_request) {
	bool v = update_request;
	this->m_update_request = v;
    this->m_update_request_isSet = true;
}

bool OAISystemConfig::is_update_request_Set() const{
    return m_update_request_isSet;
}

bool OAISystemConfig::is_update_request_Valid() const{
    return m_update_request_isValid;
}


bool OAISystemConfig::isReboot() const {
    return m_reboot;
}
void OAISystemConfig::setReboot(const bool &reboot) {
	bool v = reboot;
	this->m_reboot = v;
    this->m_reboot_isSet = true;
}

bool OAISystemConfig::is_reboot_Set() const{
    return m_reboot_isSet;
}

bool OAISystemConfig::is_reboot_Valid() const{
    return m_reboot_isValid;
}


bool OAISystemConfig::isRefresh() const {
    return m_refresh;
}
void OAISystemConfig::setRefresh(const bool &refresh) {
	bool v = refresh;
	this->m_refresh = v;
    this->m_refresh_isSet = true;
}

bool OAISystemConfig::is_refresh_Set() const{
    return m_refresh_isSet;
}

bool OAISystemConfig::is_refresh_Valid() const{
    return m_refresh_isValid;
}


bool OAISystemConfig::isShutdown() const {
    return m_shutdown;
}
void OAISystemConfig::setShutdown(const bool &shutdown) {
	bool v = shutdown;
	this->m_shutdown = v;
    this->m_shutdown_isSet = true;
}

bool OAISystemConfig::is_shutdown_Set() const{
    return m_shutdown_isSet;
}

bool OAISystemConfig::is_shutdown_Valid() const{
    return m_shutdown_isValid;
}


bool OAISystemConfig::isFactoryPreset() const {
    return m_factory_preset;
}
void OAISystemConfig::setFactoryPreset(const bool &factory_preset) {
	bool v = factory_preset;
	this->m_factory_preset = v;
    this->m_factory_preset_isSet = true;
}

bool OAISystemConfig::is_factory_preset_Set() const{
    return m_factory_preset_isSet;
}

bool OAISystemConfig::is_factory_preset_Valid() const{
    return m_factory_preset_isValid;
}


bool OAISystemConfig::isFactoryReset() const {
    return m_factory_reset;
}
void OAISystemConfig::setFactoryReset(const bool &factory_reset) {
	bool v = factory_reset;
	this->m_factory_reset = v;
    this->m_factory_reset_isSet = true;
}

bool OAISystemConfig::is_factory_reset_Set() const{
    return m_factory_reset_isSet;
}

bool OAISystemConfig::is_factory_reset_Valid() const{
    return m_factory_reset_isValid;
}


OAITransformMode OAISystemConfig::getTransformMode() const {
    return m_transform_mode;
}
void OAISystemConfig::setTransformMode(const OAITransformMode &transform_mode) {
	OAITransformMode v = transform_mode;
	this->m_transform_mode = v;
    this->m_transform_mode_isSet = true;
}

bool OAISystemConfig::is_transform_mode_Set() const{
    return m_transform_mode_isSet;
}

bool OAISystemConfig::is_transform_mode_Valid() const{
    return m_transform_mode_isValid;
}


bool OAISystemConfig::isPreviewAncEnable() const {
    return m_preview_anc_enable;
}
void OAISystemConfig::setPreviewAncEnable(const bool &preview_anc_enable) {
	bool v = preview_anc_enable;
	this->m_preview_anc_enable = v;
    this->m_preview_anc_enable_isSet = true;
}

bool OAISystemConfig::is_preview_anc_enable_Set() const{
    return m_preview_anc_enable_isSet;
}

bool OAISystemConfig::is_preview_anc_enable_Valid() const{
    return m_preview_anc_enable_isValid;
}


bool OAISystemConfig::isAuthenticationEnable() const {
    return m_authentication_enable;
}
void OAISystemConfig::setAuthenticationEnable(const bool &authentication_enable) {
	bool v = authentication_enable;
	this->m_authentication_enable = v;
    this->m_authentication_enable_isSet = true;
}

bool OAISystemConfig::is_authentication_enable_Set() const{
    return m_authentication_enable_isSet;
}

bool OAISystemConfig::is_authentication_enable_Valid() const{
    return m_authentication_enable_isValid;
}


double OAISystemConfig::getFanSpeed() const {
    return m_fan_speed;
}
void OAISystemConfig::setFanSpeed(const double &fan_speed) {
	double v = fan_speed;
	double min = fanSpeedMin();
	double max = fanSpeedMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_fan_speed = v;
    this->m_fan_speed_isSet = true;
}

bool OAISystemConfig::is_fan_speed_Set() const{
    return m_fan_speed_isSet;
}

bool OAISystemConfig::is_fan_speed_Valid() const{
    return m_fan_speed_isValid;
}

double OAISystemConfig::fanSpeedMin() const {
	return 0;
}

double OAISystemConfig::fanSpeedMax() const {
	return 255;
}

qint32 OAISystemConfig::getStartupPreset() const {
    return m_startup_preset;
}
void OAISystemConfig::setStartupPreset(const qint32 &startup_preset) {
	qint32 v = startup_preset;
	qint32 min = startupPresetMin();
	qint32 max = startupPresetMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_startup_preset = v;
    this->m_startup_preset_isSet = true;
}

bool OAISystemConfig::is_startup_preset_Set() const{
    return m_startup_preset_isSet;
}

bool OAISystemConfig::is_startup_preset_Valid() const{
    return m_startup_preset_isValid;
}

qint32 OAISystemConfig::startupPresetMin() const {
	return 0;
}

qint32 OAISystemConfig::startupPresetMax() const {
	return 10;
}

bool OAISystemConfig::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_host_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_system_organization_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ssdp_enable_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_identify_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_update_request_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_reboot_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_refresh_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_shutdown_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_factory_preset_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_factory_reset_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_transform_mode.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_preview_anc_enable_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_authentication_enable_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fan_speed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_startup_preset_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISystemConfig::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

bool OAISystemConfig::applyMinMaxConstraints() {
	bool anyMinMaxValueChanged = false;
	if (is_host_name_Set())
	{
		bool hostNameChanged = false;
		QString v = getHostName();
		if (hostNameChanged) { setHostName(v); anyMinMaxValueChanged = true; }
	}
	if (is_system_organization_name_Set())
	{
		bool systemOrganizationNameChanged = false;
		QString v = getSystemOrganizationName();
		if (systemOrganizationNameChanged) { setSystemOrganizationName(v); anyMinMaxValueChanged = true; }
	}
	if (is_fan_speed_Set())
	{
		bool fanSpeedChanged = false;
		double v = getFanSpeed();
		double min = fanSpeedMin();
		double max = fanSpeedMax();
		if (v < min) { v = min; fanSpeedChanged = true; }
		if (v > max) { v = max; fanSpeedChanged = true; }
		if (fanSpeedChanged) { setFanSpeed(v); anyMinMaxValueChanged = true; }
	}
	if (is_startup_preset_Set())
	{
		bool startupPresetChanged = false;
		qint32 v = getStartupPreset();
		qint32 min = startupPresetMin();
		qint32 max = startupPresetMax();
		if (v < min) { v = min; startupPresetChanged = true; }
		if (v > max) { v = max; startupPresetChanged = true; }
		if (startupPresetChanged) { setStartupPreset(v); anyMinMaxValueChanged = true; }
	}
	return anyMinMaxValueChanged;
}

} // namespace OpenAPI
