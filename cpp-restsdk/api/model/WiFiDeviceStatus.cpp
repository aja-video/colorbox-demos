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



#include "WiFiDeviceStatus.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




WiFiDeviceStatus::WiFiDeviceStatus()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Mac = utility::conversions::to_string_t("");
    m_MacIsSet = false;
    m_Address = utility::conversions::to_string_t("");
    m_AddressIsSet = false;
    m_Subnet = utility::conversions::to_string_t("");
    m_SubnetIsSet = false;
    m_Gateway = utility::conversions::to_string_t("");
    m_GatewayIsSet = false;
    m_NetworksIsSet = false;
    m_Connected = false;
    m_ConnectedIsSet = false;
    m_DhcpStateIsSet = false;
    m_InterfaceSetupStateIsSet = false;
    m_IpAddressOffered = utility::conversions::to_string_t("");
    m_IpAddressOfferedIsSet = false;
    m_LinkState = utility::conversions::to_string_t("");
    m_LinkStateIsSet = false;
    m_WifiDongleState = utility::conversions::to_string_t("");
    m_WifiDongleStateIsSet = false;
    m_AuthenticationState = utility::conversions::to_string_t("");
    m_AuthenticationStateIsSet = false;
}

WiFiDeviceStatus::~WiFiDeviceStatus()
{
}

void WiFiDeviceStatus::validate()
{
    // TODO: implement validation
}

bool WiFiDeviceStatus::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	if (nameIsSet())
	{
		bool nameChanged = false;
		utility::string_t v = getName();
		if (nameChanged) { setName(v); anyMinMaxValueChanged = true; }
	}
	if (macIsSet())
	{
		bool macChanged = false;
		utility::string_t v = getMac();
		if (macChanged) { setMac(v); anyMinMaxValueChanged = true; }
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
	if (ipAddressOfferedIsSet())
	{
		bool ipAddressOfferedChanged = false;
		utility::string_t v = getIpAddressOffered();
		if (ipAddressOfferedChanged) { setIpAddressOffered(v); anyMinMaxValueChanged = true; }
	}
	if (linkStateIsSet())
	{
		bool linkStateChanged = false;
		utility::string_t v = getLinkState();
		if (linkStateChanged) { setLinkState(v); anyMinMaxValueChanged = true; }
	}
	if (wifiDongleStateIsSet())
	{
		bool wifiDongleStateChanged = false;
		utility::string_t v = getWifiDongleState();
		if (wifiDongleStateChanged) { setWifiDongleState(v); anyMinMaxValueChanged = true; }
	}
	if (authenticationStateIsSet())
	{
		bool authenticationStateChanged = false;
		utility::string_t v = getAuthenticationState();
		if (authenticationStateChanged) { setAuthenticationState(v); anyMinMaxValueChanged = true; }
	}
	return anyMinMaxValueChanged;
}

web::json::value WiFiDeviceStatus::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_MacIsSet)
    {
        val[utility::conversions::to_string_t(U("mac"))] = ModelBase::toJson(m_Mac);
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
    if(m_NetworksIsSet)
    {
        val[utility::conversions::to_string_t(U("networks"))] = ModelBase::toJson(m_Networks);
    }
    if(m_ConnectedIsSet)
    {
        val[utility::conversions::to_string_t(U("connected"))] = ModelBase::toJson(m_Connected);
    }
    if(m_DhcpStateIsSet)
    {
        val[utility::conversions::to_string_t(U("dhcpState"))] = ModelBase::toJson(m_DhcpState);
    }
    if(m_InterfaceSetupStateIsSet)
    {
        val[utility::conversions::to_string_t(U("interfaceSetupState"))] = ModelBase::toJson(m_InterfaceSetupState);
    }
    if(m_IpAddressOfferedIsSet)
    {
        val[utility::conversions::to_string_t(U("ipAddressOffered"))] = ModelBase::toJson(m_IpAddressOffered);
    }
    if(m_LinkStateIsSet)
    {
        val[utility::conversions::to_string_t(U("linkState"))] = ModelBase::toJson(m_LinkState);
    }
    if(m_WifiDongleStateIsSet)
    {
        val[utility::conversions::to_string_t(U("wifiDongleState"))] = ModelBase::toJson(m_WifiDongleState);
    }
    if(m_AuthenticationStateIsSet)
    {
        val[utility::conversions::to_string_t(U("authenticationState"))] = ModelBase::toJson(m_AuthenticationState);
    }

    return val;
}

bool WiFiDeviceStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("mac"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("mac")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_mac;
            ok &= ModelBase::fromJson(fieldValue, refVal_mac);
            setMac(refVal_mac);
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
    if(val.has_field(utility::conversions::to_string_t(U("networks"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("networks")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_networks;
            ok &= ModelBase::fromJson(fieldValue, refVal_networks);
            setNetworks(refVal_networks);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("connected"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("connected")));
        if(!fieldValue.is_null())
        {
            bool refVal_connected;
            ok &= ModelBase::fromJson(fieldValue, refVal_connected);
            setConnected(refVal_connected);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("dhcpState"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("dhcpState")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DHCPState> refVal_dhcpState;
            ok &= ModelBase::fromJson(fieldValue, refVal_dhcpState);
            setDhcpState(refVal_dhcpState);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("interfaceSetupState"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("interfaceSetupState")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<InterfaceSetupState> refVal_interfaceSetupState;
            ok &= ModelBase::fromJson(fieldValue, refVal_interfaceSetupState);
            setInterfaceSetupState(refVal_interfaceSetupState);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ipAddressOffered"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ipAddressOffered")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ipAddressOffered;
            ok &= ModelBase::fromJson(fieldValue, refVal_ipAddressOffered);
            setIpAddressOffered(refVal_ipAddressOffered);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("linkState"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("linkState")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_linkState;
            ok &= ModelBase::fromJson(fieldValue, refVal_linkState);
            setLinkState(refVal_linkState);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("wifiDongleState"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("wifiDongleState")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_wifiDongleState;
            ok &= ModelBase::fromJson(fieldValue, refVal_wifiDongleState);
            setWifiDongleState(refVal_wifiDongleState);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("authenticationState"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("authenticationState")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_authenticationState;
            ok &= ModelBase::fromJson(fieldValue, refVal_authenticationState);
            setAuthenticationState(refVal_authenticationState);
        }
    }
    
    applyMinMaxConstraints();
    return ok;
}

void WiFiDeviceStatus::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_MacIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("mac")), m_Mac));
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
    if(m_NetworksIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("networks")), m_Networks));
    }
    if(m_ConnectedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("connected")), m_Connected));
    }
    if(m_DhcpStateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("dhcpState")), m_DhcpState));
    }
    if(m_InterfaceSetupStateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("interfaceSetupState")), m_InterfaceSetupState));
    }
    if(m_IpAddressOfferedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ipAddressOffered")), m_IpAddressOffered));
    }
    if(m_LinkStateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("linkState")), m_LinkState));
    }
    if(m_WifiDongleStateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("wifiDongleState")), m_WifiDongleState));
    }
    if(m_AuthenticationStateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("authenticationState")), m_AuthenticationState));
    }
}

bool WiFiDeviceStatus::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("mac"))))
    {
        utility::string_t refVal_mac;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("mac"))), refVal_mac );
        setMac(refVal_mac);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("networks"))))
    {
        std::vector<utility::string_t> refVal_networks;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("networks"))), refVal_networks );
        setNetworks(refVal_networks);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("connected"))))
    {
        bool refVal_connected;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("connected"))), refVal_connected );
        setConnected(refVal_connected);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("dhcpState"))))
    {
        std::shared_ptr<DHCPState> refVal_dhcpState;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("dhcpState"))), refVal_dhcpState );
        setDhcpState(refVal_dhcpState);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("interfaceSetupState"))))
    {
        std::shared_ptr<InterfaceSetupState> refVal_interfaceSetupState;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("interfaceSetupState"))), refVal_interfaceSetupState );
        setInterfaceSetupState(refVal_interfaceSetupState);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ipAddressOffered"))))
    {
        utility::string_t refVal_ipAddressOffered;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ipAddressOffered"))), refVal_ipAddressOffered );
        setIpAddressOffered(refVal_ipAddressOffered);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("linkState"))))
    {
        utility::string_t refVal_linkState;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("linkState"))), refVal_linkState );
        setLinkState(refVal_linkState);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("wifiDongleState"))))
    {
        utility::string_t refVal_wifiDongleState;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("wifiDongleState"))), refVal_wifiDongleState );
        setWifiDongleState(refVal_wifiDongleState);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("authenticationState"))))
    {
        utility::string_t refVal_authenticationState;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("authenticationState"))), refVal_authenticationState );
        setAuthenticationState(refVal_authenticationState);
    }
    
    applyMinMaxConstraints();
    return ok;
}

utility::string_t WiFiDeviceStatus::getName() const
{
    return m_Name;
}

void WiFiDeviceStatus::setName(const utility::string_t& value)
{
	utility::string_t v = value;
    m_Name = v;
    m_NameIsSet = true;
}

bool WiFiDeviceStatus::nameIsSet() const
{
    return m_NameIsSet;
}

void WiFiDeviceStatus::unsetName()
{
    m_NameIsSet = false;
}



utility::string_t WiFiDeviceStatus::getMac() const
{
    return m_Mac;
}

void WiFiDeviceStatus::setMac(const utility::string_t& value)
{
	utility::string_t v = value;
    m_Mac = v;
    m_MacIsSet = true;
}

bool WiFiDeviceStatus::macIsSet() const
{
    return m_MacIsSet;
}

void WiFiDeviceStatus::unsetMac()
{
    m_MacIsSet = false;
}



utility::string_t WiFiDeviceStatus::getAddress() const
{
    return m_Address;
}

void WiFiDeviceStatus::setAddress(const utility::string_t& value)
{
	utility::string_t v = value;
    m_Address = v;
    m_AddressIsSet = true;
}

bool WiFiDeviceStatus::addressIsSet() const
{
    return m_AddressIsSet;
}

void WiFiDeviceStatus::unsetAddress()
{
    m_AddressIsSet = false;
}



utility::string_t WiFiDeviceStatus::getSubnet() const
{
    return m_Subnet;
}

void WiFiDeviceStatus::setSubnet(const utility::string_t& value)
{
	utility::string_t v = value;
    m_Subnet = v;
    m_SubnetIsSet = true;
}

bool WiFiDeviceStatus::subnetIsSet() const
{
    return m_SubnetIsSet;
}

void WiFiDeviceStatus::unsetSubnet()
{
    m_SubnetIsSet = false;
}



utility::string_t WiFiDeviceStatus::getGateway() const
{
    return m_Gateway;
}

void WiFiDeviceStatus::setGateway(const utility::string_t& value)
{
	utility::string_t v = value;
    m_Gateway = v;
    m_GatewayIsSet = true;
}

bool WiFiDeviceStatus::gatewayIsSet() const
{
    return m_GatewayIsSet;
}

void WiFiDeviceStatus::unsetGateway()
{
    m_GatewayIsSet = false;
}



std::vector<utility::string_t>& WiFiDeviceStatus::getNetworks()
{
    return m_Networks;
}

void WiFiDeviceStatus::setNetworks(const std::vector<utility::string_t>& value)
{
	std::vector<utility::string_t> v = value;
    m_Networks = v;
    m_NetworksIsSet = true;
}

bool WiFiDeviceStatus::networksIsSet() const
{
    return m_NetworksIsSet;
}

void WiFiDeviceStatus::unsetNetworks()
{
    m_NetworksIsSet = false;
}


bool WiFiDeviceStatus::isConnected() const
{
    return m_Connected;
}

void WiFiDeviceStatus::setConnected(bool value)
{
	bool v = value;
    m_Connected = v;
    m_ConnectedIsSet = true;
}

bool WiFiDeviceStatus::connectedIsSet() const
{
    return m_ConnectedIsSet;
}

void WiFiDeviceStatus::unsetConnected()
{
    m_ConnectedIsSet = false;
}


std::shared_ptr<DHCPState> WiFiDeviceStatus::getDhcpState() const
{
    return m_DhcpState;
}

void WiFiDeviceStatus::setDhcpState(const std::shared_ptr<DHCPState>& value)
{
	std::shared_ptr<DHCPState> v = value;
    m_DhcpState = v;
    m_DhcpStateIsSet = true;
}

bool WiFiDeviceStatus::dhcpStateIsSet() const
{
    return m_DhcpStateIsSet;
}

void WiFiDeviceStatus::unsetDhcpState()
{
    m_DhcpStateIsSet = false;
}


std::shared_ptr<InterfaceSetupState> WiFiDeviceStatus::getInterfaceSetupState() const
{
    return m_InterfaceSetupState;
}

void WiFiDeviceStatus::setInterfaceSetupState(const std::shared_ptr<InterfaceSetupState>& value)
{
	std::shared_ptr<InterfaceSetupState> v = value;
    m_InterfaceSetupState = v;
    m_InterfaceSetupStateIsSet = true;
}

bool WiFiDeviceStatus::interfaceSetupStateIsSet() const
{
    return m_InterfaceSetupStateIsSet;
}

void WiFiDeviceStatus::unsetInterfaceSetupState()
{
    m_InterfaceSetupStateIsSet = false;
}


utility::string_t WiFiDeviceStatus::getIpAddressOffered() const
{
    return m_IpAddressOffered;
}

void WiFiDeviceStatus::setIpAddressOffered(const utility::string_t& value)
{
	utility::string_t v = value;
    m_IpAddressOffered = v;
    m_IpAddressOfferedIsSet = true;
}

bool WiFiDeviceStatus::ipAddressOfferedIsSet() const
{
    return m_IpAddressOfferedIsSet;
}

void WiFiDeviceStatus::unsetIpAddressOffered()
{
    m_IpAddressOfferedIsSet = false;
}



utility::string_t WiFiDeviceStatus::getLinkState() const
{
    return m_LinkState;
}

void WiFiDeviceStatus::setLinkState(const utility::string_t& value)
{
	utility::string_t v = value;
    m_LinkState = v;
    m_LinkStateIsSet = true;
}

bool WiFiDeviceStatus::linkStateIsSet() const
{
    return m_LinkStateIsSet;
}

void WiFiDeviceStatus::unsetLinkState()
{
    m_LinkStateIsSet = false;
}



utility::string_t WiFiDeviceStatus::getWifiDongleState() const
{
    return m_WifiDongleState;
}

void WiFiDeviceStatus::setWifiDongleState(const utility::string_t& value)
{
	utility::string_t v = value;
    m_WifiDongleState = v;
    m_WifiDongleStateIsSet = true;
}

bool WiFiDeviceStatus::wifiDongleStateIsSet() const
{
    return m_WifiDongleStateIsSet;
}

void WiFiDeviceStatus::unsetWifiDongleState()
{
    m_WifiDongleStateIsSet = false;
}



utility::string_t WiFiDeviceStatus::getAuthenticationState() const
{
    return m_AuthenticationState;
}

void WiFiDeviceStatus::setAuthenticationState(const utility::string_t& value)
{
	utility::string_t v = value;
    m_AuthenticationState = v;
    m_AuthenticationStateIsSet = true;
}

bool WiFiDeviceStatus::authenticationStateIsSet() const
{
    return m_AuthenticationStateIsSet;
}

void WiFiDeviceStatus::unsetAuthenticationState()
{
    m_AuthenticationStateIsSet = false;
}



}
}
}
}

