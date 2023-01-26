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



#include "NetConfig.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




NetConfig::NetConfig()
{
    m_IpConfigIsSet = false;
    m_IpChangeCommit = 0;
    m_IpChangeCommitIsSet = false;
}

NetConfig::~NetConfig()
{
}

void NetConfig::validate()
{
    // TODO: implement validation
}

bool NetConfig::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	if (ipChangeCommitIsSet())
	{
		bool ipChangeCommitChanged = false;
		int32_t v = getIpChangeCommit();
		if (ipChangeCommitChanged) { setIpChangeCommit(v); anyMinMaxValueChanged = true; }
	}
	return anyMinMaxValueChanged;
}

web::json::value NetConfig::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IpConfigIsSet)
    {
        val[utility::conversions::to_string_t(U("ipConfig"))] = ModelBase::toJson(m_IpConfig);
    }
    if(m_IpChangeCommitIsSet)
    {
        val[utility::conversions::to_string_t(U("ipChangeCommit"))] = ModelBase::toJson(m_IpChangeCommit);
    }

    return val;
}

bool NetConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("ipConfig"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ipConfig")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<IpConfig> refVal_ipConfig;
            ok &= ModelBase::fromJson(fieldValue, refVal_ipConfig);
            setIpConfig(refVal_ipConfig);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ipChangeCommit"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ipChangeCommit")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_ipChangeCommit;
            ok &= ModelBase::fromJson(fieldValue, refVal_ipChangeCommit);
            setIpChangeCommit(refVal_ipChangeCommit);
        }
    }
    
    applyMinMaxConstraints();
    return ok;
}

void NetConfig::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IpConfigIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ipConfig")), m_IpConfig));
    }
    if(m_IpChangeCommitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ipChangeCommit")), m_IpChangeCommit));
    }
}

bool NetConfig::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("ipConfig"))))
    {
        std::shared_ptr<IpConfig> refVal_ipConfig;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ipConfig"))), refVal_ipConfig );
        setIpConfig(refVal_ipConfig);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ipChangeCommit"))))
    {
        int32_t refVal_ipChangeCommit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ipChangeCommit"))), refVal_ipChangeCommit );
        setIpChangeCommit(refVal_ipChangeCommit);
    }
    
    applyMinMaxConstraints();
    return ok;
}

std::shared_ptr<IpConfig> NetConfig::getIpConfig() const
{
    return m_IpConfig;
}

void NetConfig::setIpConfig(const std::shared_ptr<IpConfig>& value)
{
	std::shared_ptr<IpConfig> v = value;
    m_IpConfig = v;
    m_IpConfigIsSet = true;
}

bool NetConfig::ipConfigIsSet() const
{
    return m_IpConfigIsSet;
}

void NetConfig::unsetIpConfig()
{
    m_IpConfigIsSet = false;
}


int32_t NetConfig::getIpChangeCommit() const
{
    return m_IpChangeCommit;
}

void NetConfig::setIpChangeCommit(int32_t value)
{
	int32_t v = value;
    m_IpChangeCommit = v;
    m_IpChangeCommitIsSet = true;
}

bool NetConfig::ipChangeCommitIsSet() const
{
    return m_IpChangeCommitIsSet;
}

void NetConfig::unsetIpChangeCommit()
{
    m_IpChangeCommitIsSet = false;
}



}
}
}
}


