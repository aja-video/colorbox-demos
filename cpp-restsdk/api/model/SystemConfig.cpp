/**
 * OpenAPI ColorBox
 * This is a REST API for the AJA ColorBox product.
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@aja.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 * Copyright (C) 2020-2022 AJA Video Systems, Inc.  All rights reserved.
 */



#include "SystemConfig.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




SystemConfig::SystemConfig()
{
    m_HostName = utility::conversions::to_string_t("");
    m_HostNameIsSet = false;
    m_SystemOrganizationName = utility::conversions::to_string_t("");
    m_SystemOrganizationNameIsSet = false;
    m_SsdpEnable = false;
    m_SsdpEnableIsSet = false;
    m_Identify = false;
    m_IdentifyIsSet = false;
    m_UpdateRequest = false;
    m_UpdateRequestIsSet = false;
    m_Reboot = false;
    m_RebootIsSet = false;
    m_Refresh = false;
    m_RefreshIsSet = false;
    m_Shutdown = false;
    m_ShutdownIsSet = false;
    m_FactoryPreset = false;
    m_FactoryPresetIsSet = false;
    m_FactoryReset = false;
    m_FactoryResetIsSet = false;
    m_TransformModeIsSet = false;
    m_PreviewAncEnable = false;
    m_PreviewAncEnableIsSet = false;
    m_AuthenticationEnable = false;
    m_AuthenticationEnableIsSet = false;
    m_FanSpeed = 0.0;
    m_FanSpeedIsSet = false;
    m_StartupPreset = 0;
    m_StartupPresetIsSet = false;
}

SystemConfig::~SystemConfig()
{
}

void SystemConfig::validate()
{
    // TODO: implement validation
}

bool SystemConfig::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	if (hostNameIsSet())
	{
		bool hostNameChanged = false;
		utility::string_t v = getHostName();
		if (hostNameChanged) { setHostName(v); anyMinMaxValueChanged = true; }
	}
	if (systemOrganizationNameIsSet())
	{
		bool systemOrganizationNameChanged = false;
		utility::string_t v = getSystemOrganizationName();
		if (systemOrganizationNameChanged) { setSystemOrganizationName(v); anyMinMaxValueChanged = true; }
	}
	if (fanSpeedIsSet())
	{
		bool fanSpeedChanged = false;
		double v = getFanSpeed();
		double min = fanSpeedMin();
		double max = fanSpeedMax();
		if (v < min) { v = min; fanSpeedChanged = true; }
		if (v > max) { v = max; fanSpeedChanged = true; }
		if (fanSpeedChanged) { setFanSpeed(v); anyMinMaxValueChanged = true; }
	}
	if (startupPresetIsSet())
	{
		bool startupPresetChanged = false;
		int32_t v = getStartupPreset();
		int32_t min = startupPresetMin();
		int32_t max = startupPresetMax();
		if (v < min) { v = min; startupPresetChanged = true; }
		if (v > max) { v = max; startupPresetChanged = true; }
		if (startupPresetChanged) { setStartupPreset(v); anyMinMaxValueChanged = true; }
	}
	return anyMinMaxValueChanged;
}

web::json::value SystemConfig::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_HostNameIsSet)
    {
        val[utility::conversions::to_string_t(U("hostName"))] = ModelBase::toJson(m_HostName);
    }
    if(m_SystemOrganizationNameIsSet)
    {
        val[utility::conversions::to_string_t(U("systemOrganizationName"))] = ModelBase::toJson(m_SystemOrganizationName);
    }
    if(m_SsdpEnableIsSet)
    {
        val[utility::conversions::to_string_t(U("ssdpEnable"))] = ModelBase::toJson(m_SsdpEnable);
    }
    if(m_IdentifyIsSet)
    {
        val[utility::conversions::to_string_t(U("identify"))] = ModelBase::toJson(m_Identify);
    }
    if(m_UpdateRequestIsSet)
    {
        val[utility::conversions::to_string_t(U("updateRequest"))] = ModelBase::toJson(m_UpdateRequest);
    }
    if(m_RebootIsSet)
    {
        val[utility::conversions::to_string_t(U("reboot"))] = ModelBase::toJson(m_Reboot);
    }
    if(m_RefreshIsSet)
    {
        val[utility::conversions::to_string_t(U("refresh"))] = ModelBase::toJson(m_Refresh);
    }
    if(m_ShutdownIsSet)
    {
        val[utility::conversions::to_string_t(U("shutdown"))] = ModelBase::toJson(m_Shutdown);
    }
    if(m_FactoryPresetIsSet)
    {
        val[utility::conversions::to_string_t(U("factoryPreset"))] = ModelBase::toJson(m_FactoryPreset);
    }
    if(m_FactoryResetIsSet)
    {
        val[utility::conversions::to_string_t(U("factoryReset"))] = ModelBase::toJson(m_FactoryReset);
    }
    if(m_TransformModeIsSet)
    {
        val[utility::conversions::to_string_t(U("transformMode"))] = ModelBase::toJson(m_TransformMode);
    }
    if(m_PreviewAncEnableIsSet)
    {
        val[utility::conversions::to_string_t(U("previewAncEnable"))] = ModelBase::toJson(m_PreviewAncEnable);
    }
    if(m_AuthenticationEnableIsSet)
    {
        val[utility::conversions::to_string_t(U("authenticationEnable"))] = ModelBase::toJson(m_AuthenticationEnable);
    }
    if(m_FanSpeedIsSet)
    {
        val[utility::conversions::to_string_t(U("fanSpeed"))] = ModelBase::toJson(m_FanSpeed);
    }
    if(m_StartupPresetIsSet)
    {
        val[utility::conversions::to_string_t(U("startupPreset"))] = ModelBase::toJson(m_StartupPreset);
    }

    return val;
}

bool SystemConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("hostName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("hostName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_hostName;
            ok &= ModelBase::fromJson(fieldValue, refVal_hostName);
            setHostName(refVal_hostName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("systemOrganizationName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("systemOrganizationName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_systemOrganizationName;
            ok &= ModelBase::fromJson(fieldValue, refVal_systemOrganizationName);
            setSystemOrganizationName(refVal_systemOrganizationName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ssdpEnable"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ssdpEnable")));
        if(!fieldValue.is_null())
        {
            bool refVal_ssdpEnable;
            ok &= ModelBase::fromJson(fieldValue, refVal_ssdpEnable);
            setSsdpEnable(refVal_ssdpEnable);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("identify"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("identify")));
        if(!fieldValue.is_null())
        {
            bool refVal_identify;
            ok &= ModelBase::fromJson(fieldValue, refVal_identify);
            setIdentify(refVal_identify);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("updateRequest"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("updateRequest")));
        if(!fieldValue.is_null())
        {
            bool refVal_updateRequest;
            ok &= ModelBase::fromJson(fieldValue, refVal_updateRequest);
            setUpdateRequest(refVal_updateRequest);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("reboot"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("reboot")));
        if(!fieldValue.is_null())
        {
            bool refVal_reboot;
            ok &= ModelBase::fromJson(fieldValue, refVal_reboot);
            setReboot(refVal_reboot);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("refresh"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("refresh")));
        if(!fieldValue.is_null())
        {
            bool refVal_refresh;
            ok &= ModelBase::fromJson(fieldValue, refVal_refresh);
            setRefresh(refVal_refresh);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("shutdown"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("shutdown")));
        if(!fieldValue.is_null())
        {
            bool refVal_shutdown;
            ok &= ModelBase::fromJson(fieldValue, refVal_shutdown);
            setShutdown(refVal_shutdown);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("factoryPreset"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("factoryPreset")));
        if(!fieldValue.is_null())
        {
            bool refVal_factoryPreset;
            ok &= ModelBase::fromJson(fieldValue, refVal_factoryPreset);
            setFactoryPreset(refVal_factoryPreset);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("factoryReset"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("factoryReset")));
        if(!fieldValue.is_null())
        {
            bool refVal_factoryReset;
            ok &= ModelBase::fromJson(fieldValue, refVal_factoryReset);
            setFactoryReset(refVal_factoryReset);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("transformMode"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("transformMode")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<TransformMode> refVal_transformMode;
            ok &= ModelBase::fromJson(fieldValue, refVal_transformMode);
            setTransformMode(refVal_transformMode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("previewAncEnable"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("previewAncEnable")));
        if(!fieldValue.is_null())
        {
            bool refVal_previewAncEnable;
            ok &= ModelBase::fromJson(fieldValue, refVal_previewAncEnable);
            setPreviewAncEnable(refVal_previewAncEnable);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("authenticationEnable"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("authenticationEnable")));
        if(!fieldValue.is_null())
        {
            bool refVal_authenticationEnable;
            ok &= ModelBase::fromJson(fieldValue, refVal_authenticationEnable);
            setAuthenticationEnable(refVal_authenticationEnable);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("fanSpeed"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("fanSpeed")));
        if(!fieldValue.is_null())
        {
            double refVal_fanSpeed;
            ok &= ModelBase::fromJson(fieldValue, refVal_fanSpeed);
            setFanSpeed(refVal_fanSpeed);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("startupPreset"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("startupPreset")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_startupPreset;
            ok &= ModelBase::fromJson(fieldValue, refVal_startupPreset);
            setStartupPreset(refVal_startupPreset);
        }
    }
    
    applyMinMaxConstraints();
    return ok;
}

void SystemConfig::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_HostNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("hostName")), m_HostName));
    }
    if(m_SystemOrganizationNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("systemOrganizationName")), m_SystemOrganizationName));
    }
    if(m_SsdpEnableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ssdpEnable")), m_SsdpEnable));
    }
    if(m_IdentifyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("identify")), m_Identify));
    }
    if(m_UpdateRequestIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("updateRequest")), m_UpdateRequest));
    }
    if(m_RebootIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("reboot")), m_Reboot));
    }
    if(m_RefreshIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("refresh")), m_Refresh));
    }
    if(m_ShutdownIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("shutdown")), m_Shutdown));
    }
    if(m_FactoryPresetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("factoryPreset")), m_FactoryPreset));
    }
    if(m_FactoryResetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("factoryReset")), m_FactoryReset));
    }
    if(m_TransformModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("transformMode")), m_TransformMode));
    }
    if(m_PreviewAncEnableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("previewAncEnable")), m_PreviewAncEnable));
    }
    if(m_AuthenticationEnableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("authenticationEnable")), m_AuthenticationEnable));
    }
    if(m_FanSpeedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("fanSpeed")), m_FanSpeed));
    }
    if(m_StartupPresetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("startupPreset")), m_StartupPreset));
    }
}

bool SystemConfig::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("hostName"))))
    {
        utility::string_t refVal_hostName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("hostName"))), refVal_hostName );
        setHostName(refVal_hostName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("systemOrganizationName"))))
    {
        utility::string_t refVal_systemOrganizationName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("systemOrganizationName"))), refVal_systemOrganizationName );
        setSystemOrganizationName(refVal_systemOrganizationName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ssdpEnable"))))
    {
        bool refVal_ssdpEnable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ssdpEnable"))), refVal_ssdpEnable );
        setSsdpEnable(refVal_ssdpEnable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("identify"))))
    {
        bool refVal_identify;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("identify"))), refVal_identify );
        setIdentify(refVal_identify);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("updateRequest"))))
    {
        bool refVal_updateRequest;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("updateRequest"))), refVal_updateRequest );
        setUpdateRequest(refVal_updateRequest);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("reboot"))))
    {
        bool refVal_reboot;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("reboot"))), refVal_reboot );
        setReboot(refVal_reboot);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("refresh"))))
    {
        bool refVal_refresh;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("refresh"))), refVal_refresh );
        setRefresh(refVal_refresh);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("shutdown"))))
    {
        bool refVal_shutdown;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("shutdown"))), refVal_shutdown );
        setShutdown(refVal_shutdown);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("factoryPreset"))))
    {
        bool refVal_factoryPreset;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("factoryPreset"))), refVal_factoryPreset );
        setFactoryPreset(refVal_factoryPreset);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("factoryReset"))))
    {
        bool refVal_factoryReset;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("factoryReset"))), refVal_factoryReset );
        setFactoryReset(refVal_factoryReset);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("transformMode"))))
    {
        std::shared_ptr<TransformMode> refVal_transformMode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("transformMode"))), refVal_transformMode );
        setTransformMode(refVal_transformMode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("previewAncEnable"))))
    {
        bool refVal_previewAncEnable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("previewAncEnable"))), refVal_previewAncEnable );
        setPreviewAncEnable(refVal_previewAncEnable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("authenticationEnable"))))
    {
        bool refVal_authenticationEnable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("authenticationEnable"))), refVal_authenticationEnable );
        setAuthenticationEnable(refVal_authenticationEnable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("fanSpeed"))))
    {
        double refVal_fanSpeed;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("fanSpeed"))), refVal_fanSpeed );
        setFanSpeed(refVal_fanSpeed);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("startupPreset"))))
    {
        int32_t refVal_startupPreset;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("startupPreset"))), refVal_startupPreset );
        setStartupPreset(refVal_startupPreset);
    }
    
    applyMinMaxConstraints();
    return ok;
}

utility::string_t SystemConfig::getHostName() const
{
    return m_HostName;
}

void SystemConfig::setHostName(const utility::string_t& value)
{
	utility::string_t v = value;
    m_HostName = v;
    m_HostNameIsSet = true;
}

bool SystemConfig::hostNameIsSet() const
{
    return m_HostNameIsSet;
}

void SystemConfig::unsetHostName()
{
    m_HostNameIsSet = false;
}



utility::string_t SystemConfig::getSystemOrganizationName() const
{
    return m_SystemOrganizationName;
}

void SystemConfig::setSystemOrganizationName(const utility::string_t& value)
{
	utility::string_t v = value;
    m_SystemOrganizationName = v;
    m_SystemOrganizationNameIsSet = true;
}

bool SystemConfig::systemOrganizationNameIsSet() const
{
    return m_SystemOrganizationNameIsSet;
}

void SystemConfig::unsetSystemOrganizationName()
{
    m_SystemOrganizationNameIsSet = false;
}



bool SystemConfig::isSsdpEnable() const
{
    return m_SsdpEnable;
}

void SystemConfig::setSsdpEnable(bool value)
{
	bool v = value;
    m_SsdpEnable = v;
    m_SsdpEnableIsSet = true;
}

bool SystemConfig::ssdpEnableIsSet() const
{
    return m_SsdpEnableIsSet;
}

void SystemConfig::unsetSsdpEnable()
{
    m_SsdpEnableIsSet = false;
}


bool SystemConfig::isIdentify() const
{
    return m_Identify;
}

void SystemConfig::setIdentify(bool value)
{
	bool v = value;
    m_Identify = v;
    m_IdentifyIsSet = true;
}

bool SystemConfig::identifyIsSet() const
{
    return m_IdentifyIsSet;
}

void SystemConfig::unsetIdentify()
{
    m_IdentifyIsSet = false;
}


bool SystemConfig::isUpdateRequest() const
{
    return m_UpdateRequest;
}

void SystemConfig::setUpdateRequest(bool value)
{
	bool v = value;
    m_UpdateRequest = v;
    m_UpdateRequestIsSet = true;
}

bool SystemConfig::updateRequestIsSet() const
{
    return m_UpdateRequestIsSet;
}

void SystemConfig::unsetUpdateRequest()
{
    m_UpdateRequestIsSet = false;
}


bool SystemConfig::isReboot() const
{
    return m_Reboot;
}

void SystemConfig::setReboot(bool value)
{
	bool v = value;
    m_Reboot = v;
    m_RebootIsSet = true;
}

bool SystemConfig::rebootIsSet() const
{
    return m_RebootIsSet;
}

void SystemConfig::unsetReboot()
{
    m_RebootIsSet = false;
}


bool SystemConfig::isRefresh() const
{
    return m_Refresh;
}

void SystemConfig::setRefresh(bool value)
{
	bool v = value;
    m_Refresh = v;
    m_RefreshIsSet = true;
}

bool SystemConfig::refreshIsSet() const
{
    return m_RefreshIsSet;
}

void SystemConfig::unsetRefresh()
{
    m_RefreshIsSet = false;
}


bool SystemConfig::isShutdown() const
{
    return m_Shutdown;
}

void SystemConfig::setShutdown(bool value)
{
	bool v = value;
    m_Shutdown = v;
    m_ShutdownIsSet = true;
}

bool SystemConfig::shutdownIsSet() const
{
    return m_ShutdownIsSet;
}

void SystemConfig::unsetShutdown()
{
    m_ShutdownIsSet = false;
}


bool SystemConfig::isFactoryPreset() const
{
    return m_FactoryPreset;
}

void SystemConfig::setFactoryPreset(bool value)
{
	bool v = value;
    m_FactoryPreset = v;
    m_FactoryPresetIsSet = true;
}

bool SystemConfig::factoryPresetIsSet() const
{
    return m_FactoryPresetIsSet;
}

void SystemConfig::unsetFactoryPreset()
{
    m_FactoryPresetIsSet = false;
}


bool SystemConfig::isFactoryReset() const
{
    return m_FactoryReset;
}

void SystemConfig::setFactoryReset(bool value)
{
	bool v = value;
    m_FactoryReset = v;
    m_FactoryResetIsSet = true;
}

bool SystemConfig::factoryResetIsSet() const
{
    return m_FactoryResetIsSet;
}

void SystemConfig::unsetFactoryReset()
{
    m_FactoryResetIsSet = false;
}


std::shared_ptr<TransformMode> SystemConfig::getTransformMode() const
{
    return m_TransformMode;
}

void SystemConfig::setTransformMode(const std::shared_ptr<TransformMode>& value)
{
	std::shared_ptr<TransformMode> v = value;
    m_TransformMode = v;
    m_TransformModeIsSet = true;
}

bool SystemConfig::transformModeIsSet() const
{
    return m_TransformModeIsSet;
}

void SystemConfig::unsetTransformMode()
{
    m_TransformModeIsSet = false;
}


bool SystemConfig::isPreviewAncEnable() const
{
    return m_PreviewAncEnable;
}

void SystemConfig::setPreviewAncEnable(bool value)
{
	bool v = value;
    m_PreviewAncEnable = v;
    m_PreviewAncEnableIsSet = true;
}

bool SystemConfig::previewAncEnableIsSet() const
{
    return m_PreviewAncEnableIsSet;
}

void SystemConfig::unsetPreviewAncEnable()
{
    m_PreviewAncEnableIsSet = false;
}


bool SystemConfig::isAuthenticationEnable() const
{
    return m_AuthenticationEnable;
}

void SystemConfig::setAuthenticationEnable(bool value)
{
	bool v = value;
    m_AuthenticationEnable = v;
    m_AuthenticationEnableIsSet = true;
}

bool SystemConfig::authenticationEnableIsSet() const
{
    return m_AuthenticationEnableIsSet;
}

void SystemConfig::unsetAuthenticationEnable()
{
    m_AuthenticationEnableIsSet = false;
}


double SystemConfig::getFanSpeed() const
{
    return m_FanSpeed;
}

void SystemConfig::setFanSpeed(double value)
{
	double v = value;
	double min = fanSpeedMin();
	double max = fanSpeedMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
    m_FanSpeed = v;
    m_FanSpeedIsSet = true;
}

bool SystemConfig::fanSpeedIsSet() const
{
    return m_FanSpeedIsSet;
}

void SystemConfig::unsetFanSpeed()
{
    m_FanSpeedIsSet = false;
}

double SystemConfig::fanSpeedMin() const {
	return 0;
}

double SystemConfig::fanSpeedMax() const {
	return 255;
}

int32_t SystemConfig::getStartupPreset() const
{
    return m_StartupPreset;
}

void SystemConfig::setStartupPreset(int32_t value)
{
	int32_t v = value;
	int32_t min = startupPresetMin();
	int32_t max = startupPresetMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
    m_StartupPreset = v;
    m_StartupPresetIsSet = true;
}

bool SystemConfig::startupPresetIsSet() const
{
    return m_StartupPresetIsSet;
}

void SystemConfig::unsetStartupPreset()
{
    m_StartupPresetIsSet = false;
}

int32_t SystemConfig::startupPresetMin() const {
	return 0;
}

int32_t SystemConfig::startupPresetMax() const {
	return 10;
}

}
}
}
}


