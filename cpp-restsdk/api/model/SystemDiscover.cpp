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
 * Copyright (C) 2020-2022 AJA Video Systems Inc.  All rights reserved.
 */



#include "SystemDiscover.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




SystemDiscover::SystemDiscover()
{
    m_ServiceDescription = utility::conversions::to_string_t("");
    m_ServiceDescriptionIsSet = false;
    m_ServiceType = utility::conversions::to_string_t("");
    m_ServiceTypeIsSet = false;
    m_ServiceDomain = utility::conversions::to_string_t("");
    m_ServiceDomainIsSet = false;
    m_HostName = utility::conversions::to_string_t("");
    m_HostNameIsSet = false;
    m_IpAddress = utility::conversions::to_string_t("");
    m_IpAddressIsSet = false;
    m_Port = 0.0;
    m_PortIsSet = false;
    m_DeviceName = utility::conversions::to_string_t("");
    m_DeviceNameIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_BoardType = utility::conversions::to_string_t("");
    m_BoardTypeIsSet = false;
    m_BoardNumber = utility::conversions::to_string_t("");
    m_BoardNumberIsSet = false;
    m_BoardID = utility::conversions::to_string_t("");
    m_BoardIDIsSet = false;
}

SystemDiscover::~SystemDiscover()
{
}

void SystemDiscover::validate()
{
    // TODO: implement validation
}

bool SystemDiscover::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	if (serviceDescriptionIsSet())
	{
		bool serviceDescriptionChanged = false;
		utility::string_t v = getServiceDescription();
		if (serviceDescriptionChanged) { setServiceDescription(v); anyMinMaxValueChanged = true; }
	}
	if (serviceTypeIsSet())
	{
		bool serviceTypeChanged = false;
		utility::string_t v = getServiceType();
		if (serviceTypeChanged) { setServiceType(v); anyMinMaxValueChanged = true; }
	}
	if (serviceDomainIsSet())
	{
		bool serviceDomainChanged = false;
		utility::string_t v = getServiceDomain();
		if (serviceDomainChanged) { setServiceDomain(v); anyMinMaxValueChanged = true; }
	}
	if (hostNameIsSet())
	{
		bool hostNameChanged = false;
		utility::string_t v = getHostName();
		if (hostNameChanged) { setHostName(v); anyMinMaxValueChanged = true; }
	}
	if (ipAddressIsSet())
	{
		bool ipAddressChanged = false;
		utility::string_t v = getIpAddress();
		if (ipAddressChanged) { setIpAddress(v); anyMinMaxValueChanged = true; }
	}
	if (portIsSet())
	{
		bool portChanged = false;
		double v = getPort();
		if (portChanged) { setPort(v); anyMinMaxValueChanged = true; }
	}
	if (deviceNameIsSet())
	{
		bool deviceNameChanged = false;
		utility::string_t v = getDeviceName();
		if (deviceNameChanged) { setDeviceName(v); anyMinMaxValueChanged = true; }
	}
	if (descriptionIsSet())
	{
		bool descriptionChanged = false;
		utility::string_t v = getDescription();
		if (descriptionChanged) { setDescription(v); anyMinMaxValueChanged = true; }
	}
	if (boardTypeIsSet())
	{
		bool boardTypeChanged = false;
		utility::string_t v = getBoardType();
		if (boardTypeChanged) { setBoardType(v); anyMinMaxValueChanged = true; }
	}
	if (boardNumberIsSet())
	{
		bool boardNumberChanged = false;
		utility::string_t v = getBoardNumber();
		if (boardNumberChanged) { setBoardNumber(v); anyMinMaxValueChanged = true; }
	}
	if (boardIDIsSet())
	{
		bool boardIDChanged = false;
		utility::string_t v = getBoardID();
		if (boardIDChanged) { setBoardID(v); anyMinMaxValueChanged = true; }
	}
	return anyMinMaxValueChanged;
}

web::json::value SystemDiscover::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ServiceDescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("serviceDescription"))] = ModelBase::toJson(m_ServiceDescription);
    }
    if(m_ServiceTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("serviceType"))] = ModelBase::toJson(m_ServiceType);
    }
    if(m_ServiceDomainIsSet)
    {
        val[utility::conversions::to_string_t(U("serviceDomain"))] = ModelBase::toJson(m_ServiceDomain);
    }
    if(m_HostNameIsSet)
    {
        val[utility::conversions::to_string_t(U("hostName"))] = ModelBase::toJson(m_HostName);
    }
    if(m_IpAddressIsSet)
    {
        val[utility::conversions::to_string_t(U("ipAddress"))] = ModelBase::toJson(m_IpAddress);
    }
    if(m_PortIsSet)
    {
        val[utility::conversions::to_string_t(U("port"))] = ModelBase::toJson(m_Port);
    }
    if(m_DeviceNameIsSet)
    {
        val[utility::conversions::to_string_t(U("deviceName"))] = ModelBase::toJson(m_DeviceName);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_BoardTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("boardType"))] = ModelBase::toJson(m_BoardType);
    }
    if(m_BoardNumberIsSet)
    {
        val[utility::conversions::to_string_t(U("boardNumber"))] = ModelBase::toJson(m_BoardNumber);
    }
    if(m_BoardIDIsSet)
    {
        val[utility::conversions::to_string_t(U("boardID"))] = ModelBase::toJson(m_BoardID);
    }

    return val;
}

bool SystemDiscover::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("serviceDescription"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("serviceDescription")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_serviceDescription;
            ok &= ModelBase::fromJson(fieldValue, refVal_serviceDescription);
            setServiceDescription(refVal_serviceDescription);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("serviceType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("serviceType")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_serviceType;
            ok &= ModelBase::fromJson(fieldValue, refVal_serviceType);
            setServiceType(refVal_serviceType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("serviceDomain"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("serviceDomain")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_serviceDomain;
            ok &= ModelBase::fromJson(fieldValue, refVal_serviceDomain);
            setServiceDomain(refVal_serviceDomain);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t(U("ipAddress"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ipAddress")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ipAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_ipAddress);
            setIpAddress(refVal_ipAddress);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("port"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("port")));
        if(!fieldValue.is_null())
        {
            double refVal_port;
            ok &= ModelBase::fromJson(fieldValue, refVal_port);
            setPort(refVal_port);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("deviceName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("deviceName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_deviceName;
            ok &= ModelBase::fromJson(fieldValue, refVal_deviceName);
            setDeviceName(refVal_deviceName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("description"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("description")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_description;
            ok &= ModelBase::fromJson(fieldValue, refVal_description);
            setDescription(refVal_description);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("boardType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("boardType")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_boardType;
            ok &= ModelBase::fromJson(fieldValue, refVal_boardType);
            setBoardType(refVal_boardType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("boardNumber"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("boardNumber")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_boardNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_boardNumber);
            setBoardNumber(refVal_boardNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("boardID"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("boardID")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_boardID;
            ok &= ModelBase::fromJson(fieldValue, refVal_boardID);
            setBoardID(refVal_boardID);
        }
    }
    
    applyMinMaxConstraints();
    return ok;
}

void SystemDiscover::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ServiceDescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("serviceDescription")), m_ServiceDescription));
    }
    if(m_ServiceTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("serviceType")), m_ServiceType));
    }
    if(m_ServiceDomainIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("serviceDomain")), m_ServiceDomain));
    }
    if(m_HostNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("hostName")), m_HostName));
    }
    if(m_IpAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ipAddress")), m_IpAddress));
    }
    if(m_PortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("port")), m_Port));
    }
    if(m_DeviceNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("deviceName")), m_DeviceName));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_BoardTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("boardType")), m_BoardType));
    }
    if(m_BoardNumberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("boardNumber")), m_BoardNumber));
    }
    if(m_BoardIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("boardID")), m_BoardID));
    }
}

bool SystemDiscover::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("serviceDescription"))))
    {
        utility::string_t refVal_serviceDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("serviceDescription"))), refVal_serviceDescription );
        setServiceDescription(refVal_serviceDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("serviceType"))))
    {
        utility::string_t refVal_serviceType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("serviceType"))), refVal_serviceType );
        setServiceType(refVal_serviceType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("serviceDomain"))))
    {
        utility::string_t refVal_serviceDomain;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("serviceDomain"))), refVal_serviceDomain );
        setServiceDomain(refVal_serviceDomain);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("hostName"))))
    {
        utility::string_t refVal_hostName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("hostName"))), refVal_hostName );
        setHostName(refVal_hostName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ipAddress"))))
    {
        utility::string_t refVal_ipAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ipAddress"))), refVal_ipAddress );
        setIpAddress(refVal_ipAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("port"))))
    {
        double refVal_port;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("port"))), refVal_port );
        setPort(refVal_port);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("deviceName"))))
    {
        utility::string_t refVal_deviceName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("deviceName"))), refVal_deviceName );
        setDeviceName(refVal_deviceName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_description;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_description );
        setDescription(refVal_description);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("boardType"))))
    {
        utility::string_t refVal_boardType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("boardType"))), refVal_boardType );
        setBoardType(refVal_boardType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("boardNumber"))))
    {
        utility::string_t refVal_boardNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("boardNumber"))), refVal_boardNumber );
        setBoardNumber(refVal_boardNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("boardID"))))
    {
        utility::string_t refVal_boardID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("boardID"))), refVal_boardID );
        setBoardID(refVal_boardID);
    }
    
    applyMinMaxConstraints();
    return ok;
}

utility::string_t SystemDiscover::getServiceDescription() const
{
    return m_ServiceDescription;
}

void SystemDiscover::setServiceDescription(const utility::string_t& value)
{
	utility::string_t v = value;
    m_ServiceDescription = v;
    m_ServiceDescriptionIsSet = true;
}

bool SystemDiscover::serviceDescriptionIsSet() const
{
    return m_ServiceDescriptionIsSet;
}

void SystemDiscover::unsetServiceDescription()
{
    m_ServiceDescriptionIsSet = false;
}



utility::string_t SystemDiscover::getServiceType() const
{
    return m_ServiceType;
}

void SystemDiscover::setServiceType(const utility::string_t& value)
{
	utility::string_t v = value;
    m_ServiceType = v;
    m_ServiceTypeIsSet = true;
}

bool SystemDiscover::serviceTypeIsSet() const
{
    return m_ServiceTypeIsSet;
}

void SystemDiscover::unsetServiceType()
{
    m_ServiceTypeIsSet = false;
}



utility::string_t SystemDiscover::getServiceDomain() const
{
    return m_ServiceDomain;
}

void SystemDiscover::setServiceDomain(const utility::string_t& value)
{
	utility::string_t v = value;
    m_ServiceDomain = v;
    m_ServiceDomainIsSet = true;
}

bool SystemDiscover::serviceDomainIsSet() const
{
    return m_ServiceDomainIsSet;
}

void SystemDiscover::unsetServiceDomain()
{
    m_ServiceDomainIsSet = false;
}



utility::string_t SystemDiscover::getHostName() const
{
    return m_HostName;
}

void SystemDiscover::setHostName(const utility::string_t& value)
{
	utility::string_t v = value;
    m_HostName = v;
    m_HostNameIsSet = true;
}

bool SystemDiscover::hostNameIsSet() const
{
    return m_HostNameIsSet;
}

void SystemDiscover::unsetHostName()
{
    m_HostNameIsSet = false;
}



utility::string_t SystemDiscover::getIpAddress() const
{
    return m_IpAddress;
}

void SystemDiscover::setIpAddress(const utility::string_t& value)
{
	utility::string_t v = value;
    m_IpAddress = v;
    m_IpAddressIsSet = true;
}

bool SystemDiscover::ipAddressIsSet() const
{
    return m_IpAddressIsSet;
}

void SystemDiscover::unsetIpAddress()
{
    m_IpAddressIsSet = false;
}



double SystemDiscover::getPort() const
{
    return m_Port;
}

void SystemDiscover::setPort(double value)
{
	double v = value;
    m_Port = v;
    m_PortIsSet = true;
}

bool SystemDiscover::portIsSet() const
{
    return m_PortIsSet;
}

void SystemDiscover::unsetPort()
{
    m_PortIsSet = false;
}



utility::string_t SystemDiscover::getDeviceName() const
{
    return m_DeviceName;
}

void SystemDiscover::setDeviceName(const utility::string_t& value)
{
	utility::string_t v = value;
    m_DeviceName = v;
    m_DeviceNameIsSet = true;
}

bool SystemDiscover::deviceNameIsSet() const
{
    return m_DeviceNameIsSet;
}

void SystemDiscover::unsetDeviceName()
{
    m_DeviceNameIsSet = false;
}



utility::string_t SystemDiscover::getDescription() const
{
    return m_Description;
}

void SystemDiscover::setDescription(const utility::string_t& value)
{
	utility::string_t v = value;
    m_Description = v;
    m_DescriptionIsSet = true;
}

bool SystemDiscover::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void SystemDiscover::unsetDescription()
{
    m_DescriptionIsSet = false;
}



utility::string_t SystemDiscover::getBoardType() const
{
    return m_BoardType;
}

void SystemDiscover::setBoardType(const utility::string_t& value)
{
	utility::string_t v = value;
    m_BoardType = v;
    m_BoardTypeIsSet = true;
}

bool SystemDiscover::boardTypeIsSet() const
{
    return m_BoardTypeIsSet;
}

void SystemDiscover::unsetBoardType()
{
    m_BoardTypeIsSet = false;
}



utility::string_t SystemDiscover::getBoardNumber() const
{
    return m_BoardNumber;
}

void SystemDiscover::setBoardNumber(const utility::string_t& value)
{
	utility::string_t v = value;
    m_BoardNumber = v;
    m_BoardNumberIsSet = true;
}

bool SystemDiscover::boardNumberIsSet() const
{
    return m_BoardNumberIsSet;
}

void SystemDiscover::unsetBoardNumber()
{
    m_BoardNumberIsSet = false;
}



utility::string_t SystemDiscover::getBoardID() const
{
    return m_BoardID;
}

void SystemDiscover::setBoardID(const utility::string_t& value)
{
	utility::string_t v = value;
    m_BoardID = v;
    m_BoardIDIsSet = true;
}

bool SystemDiscover::boardIDIsSet() const
{
    return m_BoardIDIsSet;
}

void SystemDiscover::unsetBoardID()
{
    m_BoardIDIsSet = false;
}



}
}
}
}


