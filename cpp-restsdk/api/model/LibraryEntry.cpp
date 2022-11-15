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



#include "LibraryEntry.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




LibraryEntry::LibraryEntry()
{
    m_UserName = utility::conversions::to_string_t("");
    m_UserNameIsSet = false;
    m_FileName = utility::conversions::to_string_t("");
    m_FileNameIsSet = false;
}

LibraryEntry::~LibraryEntry()
{
}

void LibraryEntry::validate()
{
    // TODO: implement validation
}

bool LibraryEntry::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	if (userNameIsSet())
	{
		bool userNameChanged = false;
		utility::string_t v = getUserName();
		if (userNameChanged) { setUserName(v); anyMinMaxValueChanged = true; }
	}
	if (fileNameIsSet())
	{
		bool fileNameChanged = false;
		utility::string_t v = getFileName();
		if (fileNameChanged) { setFileName(v); anyMinMaxValueChanged = true; }
	}
	return anyMinMaxValueChanged;
}

web::json::value LibraryEntry::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_UserNameIsSet)
    {
        val[utility::conversions::to_string_t(U("userName"))] = ModelBase::toJson(m_UserName);
    }
    if(m_FileNameIsSet)
    {
        val[utility::conversions::to_string_t(U("fileName"))] = ModelBase::toJson(m_FileName);
    }

    return val;
}

bool LibraryEntry::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("userName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("userName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_userName;
            ok &= ModelBase::fromJson(fieldValue, refVal_userName);
            setUserName(refVal_userName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("fileName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("fileName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_fileName;
            ok &= ModelBase::fromJson(fieldValue, refVal_fileName);
            setFileName(refVal_fileName);
        }
    }
    
    applyMinMaxConstraints();
    return ok;
}

void LibraryEntry::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_UserNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userName")), m_UserName));
    }
    if(m_FileNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("fileName")), m_FileName));
    }
}

bool LibraryEntry::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("userName"))))
    {
        utility::string_t refVal_userName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userName"))), refVal_userName );
        setUserName(refVal_userName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("fileName"))))
    {
        utility::string_t refVal_fileName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("fileName"))), refVal_fileName );
        setFileName(refVal_fileName);
    }
    
    applyMinMaxConstraints();
    return ok;
}

utility::string_t LibraryEntry::getUserName() const
{
    return m_UserName;
}

void LibraryEntry::setUserName(const utility::string_t& value)
{
	utility::string_t v = value;
    m_UserName = v;
    m_UserNameIsSet = true;
}

bool LibraryEntry::userNameIsSet() const
{
    return m_UserNameIsSet;
}

void LibraryEntry::unsetUserName()
{
    m_UserNameIsSet = false;
}



utility::string_t LibraryEntry::getFileName() const
{
    return m_FileName;
}

void LibraryEntry::setFileName(const utility::string_t& value)
{
	utility::string_t v = value;
    m_FileName = v;
    m_FileNameIsSet = true;
}

bool LibraryEntry::fileNameIsSet() const
{
    return m_FileNameIsSet;
}

void LibraryEntry::unsetFileName()
{
    m_FileNameIsSet = false;
}



}
}
}
}

