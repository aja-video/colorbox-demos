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



#include "WiFiDeviceConfig.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




WiFiDeviceConfig::WiFiDeviceConfig()
{
    m_WifiControl = utility::conversions::to_string_t("");
    m_WifiControlIsSet = false;
    m_WifiNetwork = utility::conversions::to_string_t("");
    m_WifiNetworkIsSet = false;
    m_WifiPassword = utility::conversions::to_string_t("");
    m_WifiPasswordIsSet = false;
    m_WifiSecurity = utility::conversions::to_string_t("");
    m_WifiSecurityIsSet = false;
    m_WifiIpConfig = utility::conversions::to_string_t("");
    m_WifiIpConfigIsSet = false;
    m_Address = utility::conversions::to_string_t("");
    m_AddressIsSet = false;
    m_Subnet = utility::conversions::to_string_t("");
    m_SubnetIsSet = false;
    m_Gateway = utility::conversions::to_string_t("");
    m_GatewayIsSet = false;
    m_WifiIpChangeCommit = 0;
    m_WifiIpChangeCommitIsSet = false;
}

WiFiDeviceConfig::~WiFiDeviceConfig()
{
}

void WiFiDeviceConfig::validate()
{
    // TODO: implement validation
}

bool WiFiDeviceConfig::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	if (wifiControlIsSet())
	{
		bool wifiControlChanged = false;
		utility::string_t v = getWifiControl();
		if (wifiControlChanged) { setWifiControl(v); anyMinMaxValueChanged = true; }
	}
	if (wifiNetworkIsSet())
	{
		bool wifiNetworkChanged = false;
		utility::string_t v = getWifiNetwork();
		if (wifiNetworkChanged) { setWifiNetwork(v); anyMinMaxValueChanged = true; }
	}
	if (wifiPasswordIsSet())
	{
		bool wifiPasswordChanged = false;
		utility::string_t v = getWifiPassword();
		if (wifiPasswordChanged) { setWifiPassword(v); anyMinMaxValueChanged = true; }
	}
	if (wifiSecurityIsSet())
	{
		bool wifiSecurityChanged = false;
		utility::string_t v = getWifiSecurity();
		if (wifiSecurityChanged) { setWifiSecurity(v); anyMinMaxValueChanged = true; }
	}
	if (wifiIpConfigIsSet())
	{
		bool wifiIpConfigChanged = false;
		utility::string_t v = getWifiIpConfig();
		if (wifiIpConfigChanged) { setWifiIpConfig(v); anyMinMaxValueChanged = true; }
	}
	if (addressIsSet())
	{
		bool addressChanged = false;
		utility::string_t v = getAddress();
		if (addressChanged) { setAddress(v); anyMinMaxValueChanged = true; }
	}
	if (subnetIsSet())
	{
		bool subnetChanged = false;
		utility::string_t v = getSubnet();
		if (subnetChanged) { setSubnet(v); anyMinMaxValueChanged = true; }
	}
	if (gatewayIsSet())
	{
		bool gatewayChanged = false;
		utility::string_t v = getGateway();
		if (gatewayChanged) { setGateway(v); anyMinMaxValueChanged = true; }
	}
	if (wifiIpChangeCommitIsSet())
	{
		bool wifiIpChangeCommitChanged = false;
		int32_t v = getWifiIpChangeCommit();
		if (wifiIpChangeCommitChanged) { setWifiIpChangeCommit(v); anyMinMaxValueChanged = true; }
	}
	return anyMinMaxValueChanged;
}

web::json::value WiFiDeviceConfig::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_WifiControlIsSet)
    {
        val[utility::conversions::to_string_t(U("wifiControl"))] = ModelBase::toJson(m_WifiControl);
    }
    if(m_WifiNetworkIsSet)
    {
        val[utility::conversions::to_string_t(U("wifiNetwork"))] = ModelBase::toJson(m_WifiNetwork);
    }
    if(m_WifiPasswordIsSet)
    {
        val[utility::conversions::to_string_t(U("wifiPassword"))] = ModelBase::toJson(m_WifiPassword);
    }
    if(m_WifiSecurityIsSet)
    {
        val[utility::conversions::to_string_t(U("wifiSecurity"))] = ModelBase::toJson(m_WifiSecurity);
    }
    if(m_WifiIpConfigIsSet)
    {
        val[utility::conversions::to_string_t(U("wifiIpConfig"))] = ModelBase::toJson(m_WifiIpConfig);
    }
    if(m_AddressIsSet)
    {
        val[utility::conversions::to_string_t(U("address"))] = ModelBase::toJson(m_Address);
    }
    if(m_SubnetIsSet)
    {
        val[utility::conversions::to_string_t(U("subnet"))] = ModelBase::toJson(m_Subnet);
    }
    if(m_GatewayIsSet)
    {
        val[utility::conversions::to_string_t(U("gateway"))] = ModelBase::toJson(m_Gateway);
    }
    if(m_WifiIpChangeCommitIsSet)
    {
        val[utility::conversions::to_string_t(U("wifiIpChangeCommit"))] = ModelBase::toJson(m_WifiIpChangeCommit);
    }

    return val;
}

bool WiFiDeviceConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("wifiControl"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("wifiControl")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_wifiControl;
            ok &= ModelBase::fromJson(fieldValue, refVal_wifiControl);
            setWifiControl(refVal_wifiControl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("wifiNetwork"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("wifiNetwork")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_wifiNetwork;
            ok &= ModelBase::fromJson(fieldValue, refVal_wifiNetwork);
            setWifiNetwork(refVal_wifiNetwork);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("wifiPassword"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("wifiPassword")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_wifiPassword;
            ok &= ModelBase::fromJson(fieldValue, refVal_wifiPassword);
            setWifiPassword(refVal_wifiPassword);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("wifiSecurity"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("wifiSecurity")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_wifiSecurity;
            ok &= ModelBase::fromJson(fieldValue, refVal_wifiSecurity);
            setWifiSecurity(refVal_wifiSecurity);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("wifiIpConfig"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("wifiIpConfig")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_wifiIpConfig;
            ok &= ModelBase::fromJson(fieldValue, refVal_wifiIpConfig);
            setWifiIpConfig(refVal_wifiIpConfig);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("address"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("address")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_address;
            ok &= ModelBase::fromJson(fieldValue, refVal_address);
            setAddress(refVal_address);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("subnet"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("subnet")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_subnet;
            ok &= ModelBase::fromJson(fieldValue, refVal_subnet);
            setSubnet(refVal_subnet);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("gateway"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("gateway")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_gateway;
            ok &= ModelBase::fromJson(fieldValue, refVal_gateway);
            setGateway(refVal_gateway);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("wifiIpChangeCommit"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("wifiIpChangeCommit")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_wifiIpChangeCommit;
            ok &= ModelBase::fromJson(fieldValue, refVal_wifiIpChangeCommit);
            setWifiIpChangeCommit(refVal_wifiIpChangeCommit);
        }
    }
    
    applyMinMaxConstraints();
    return ok;
}

void WiFiDeviceConfig::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_WifiControlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("wifiControl")), m_WifiControl));
    }
    if(m_WifiNetworkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("wifiNetwork")), m_WifiNetwork));
    }
    if(m_WifiPasswordIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("wifiPassword")), m_WifiPassword));
    }
    if(m_WifiSecurityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("wifiSecurity")), m_WifiSecurity));
    }
    if(m_WifiIpConfigIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("wifiIpConfig")), m_WifiIpConfig));
    }
    if(m_AddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("address")), m_Address));
    }
    if(m_SubnetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subnet")), m_Subnet));
    }
    if(m_GatewayIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("gateway")), m_Gateway));
    }
    if(m_WifiIpChangeCommitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("wifiIpChangeCommit")), m_WifiIpChangeCommit));
    }
}

bool WiFiDeviceConfig::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("wifiControl"))))
    {
        utility::string_t refVal_wifiControl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("wifiControl"))), refVal_wifiControl );
        setWifiControl(refVal_wifiControl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("wifiNetwork"))))
    {
        utility::string_t refVal_wifiNetwork;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("wifiNetwork"))), refVal_wifiNetwork );
        setWifiNetwork(refVal_wifiNetwork);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("wifiPassword"))))
    {
        utility::string_t refVal_wifiPassword;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("wifiPassword"))), refVal_wifiPassword );
        setWifiPassword(refVal_wifiPassword);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("wifiSecurity"))))
    {
        utility::string_t refVal_wifiSecurity;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("wifiSecurity"))), refVal_wifiSecurity );
        setWifiSecurity(refVal_wifiSecurity);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("wifiIpConfig"))))
    {
        utility::string_t refVal_wifiIpConfig;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("wifiIpConfig"))), refVal_wifiIpConfig );
        setWifiIpConfig(refVal_wifiIpConfig);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("address"))))
    {
        utility::string_t refVal_address;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("address"))), refVal_address );
        setAddress(refVal_address);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subnet"))))
    {
        utility::string_t refVal_subnet;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subnet"))), refVal_subnet );
        setSubnet(refVal_subnet);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("gateway"))))
    {
        utility::string_t refVal_gateway;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("gateway"))), refVal_gateway );
        setGateway(refVal_gateway);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("wifiIpChangeCommit"))))
    {
        int32_t refVal_wifiIpChangeCommit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("wifiIpChangeCommit"))), refVal_wifiIpChangeCommit );
        setWifiIpChangeCommit(refVal_wifiIpChangeCommit);
    }
    
    applyMinMaxConstraints();
    return ok;
}

utility::string_t WiFiDeviceConfig::getWifiControl() const
{
    return m_WifiControl;
}

void WiFiDeviceConfig::setWifiControl(const utility::string_t& value)
{
	utility::string_t v = value;
    m_WifiControl = v;
    m_WifiControlIsSet = true;
}

bool WiFiDeviceConfig::wifiControlIsSet() const
{
    return m_WifiControlIsSet;
}

void WiFiDeviceConfig::unsetWifiControl()
{
    m_WifiControlIsSet = false;
}



utility::string_t WiFiDeviceConfig::getWifiNetwork() const
{
    return m_WifiNetwork;
}

void WiFiDeviceConfig::setWifiNetwork(const utility::string_t& value)
{
	utility::string_t v = value;
    m_WifiNetwork = v;
    m_WifiNetworkIsSet = true;
}

bool WiFiDeviceConfig::wifiNetworkIsSet() const
{
    return m_WifiNetworkIsSet;
}

void WiFiDeviceConfig::unsetWifiNetwork()
{
    m_WifiNetworkIsSet = false;
}



utility::string_t WiFiDeviceConfig::getWifiPassword() const
{
    return m_WifiPassword;
}

void WiFiDeviceConfig::setWifiPassword(const utility::string_t& value)
{
	utility::string_t v = value;
    m_WifiPassword = v;
    m_WifiPasswordIsSet = true;
}

bool WiFiDeviceConfig::wifiPasswordIsSet() const
{
    return m_WifiPasswordIsSet;
}

void WiFiDeviceConfig::unsetWifiPassword()
{
    m_WifiPasswordIsSet = false;
}



utility::string_t WiFiDeviceConfig::getWifiSecurity() const
{
    return m_WifiSecurity;
}

void WiFiDeviceConfig::setWifiSecurity(const utility::string_t& value)
{
	utility::string_t v = value;
    m_WifiSecurity = v;
    m_WifiSecurityIsSet = true;
}

bool WiFiDeviceConfig::wifiSecurityIsSet() const
{
    return m_WifiSecurityIsSet;
}

void WiFiDeviceConfig::unsetWifiSecurity()
{
    m_WifiSecurityIsSet = false;
}



utility::string_t WiFiDeviceConfig::getWifiIpConfig() const
{
    return m_WifiIpConfig;
}

void WiFiDeviceConfig::setWifiIpConfig(const utility::string_t& value)
{
	utility::string_t v = value;
    m_WifiIpConfig = v;
    m_WifiIpConfigIsSet = true;
}

bool WiFiDeviceConfig::wifiIpConfigIsSet() const
{
    return m_WifiIpConfigIsSet;
}

void WiFiDeviceConfig::unsetWifiIpConfig()
{
    m_WifiIpConfigIsSet = false;
}



utility::string_t WiFiDeviceConfig::getAddress() const
{
    return m_Address;
}

void WiFiDeviceConfig::setAddress(const utility::string_t& value)
{
	utility::string_t v = value;
    m_Address = v;
    m_AddressIsSet = true;
}

bool WiFiDeviceConfig::addressIsSet() const
{
    return m_AddressIsSet;
}

void WiFiDeviceConfig::unsetAddress()
{
    m_AddressIsSet = false;
}



utility::string_t WiFiDeviceConfig::getSubnet() const
{
    return m_Subnet;
}

void WiFiDeviceConfig::setSubnet(const utility::string_t& value)
{
	utility::string_t v = value;
    m_Subnet = v;
    m_SubnetIsSet = true;
}

bool WiFiDeviceConfig::subnetIsSet() const
{
    return m_SubnetIsSet;
}

void WiFiDeviceConfig::unsetSubnet()
{
    m_SubnetIsSet = false;
}



utility::string_t WiFiDeviceConfig::getGateway() const
{
    return m_Gateway;
}

void WiFiDeviceConfig::setGateway(const utility::string_t& value)
{
	utility::string_t v = value;
    m_Gateway = v;
    m_GatewayIsSet = true;
}

bool WiFiDeviceConfig::gatewayIsSet() const
{
    return m_GatewayIsSet;
}

void WiFiDeviceConfig::unsetGateway()
{
    m_GatewayIsSet = false;
}



int32_t WiFiDeviceConfig::getWifiIpChangeCommit() const
{
    return m_WifiIpChangeCommit;
}

void WiFiDeviceConfig::setWifiIpChangeCommit(int32_t value)
{
	int32_t v = value;
    m_WifiIpChangeCommit = v;
    m_WifiIpChangeCommitIsSet = true;
}

bool WiFiDeviceConfig::wifiIpChangeCommitIsSet() const
{
    return m_WifiIpChangeCommitIsSet;
}

void WiFiDeviceConfig::unsetWifiIpChangeCommit()
{
    m_WifiIpChangeCommitIsSet = false;
}



}
}
}
}


