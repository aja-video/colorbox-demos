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



#include "Frame.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Frame::Frame()
{
    m_ImageIsSet = false;
    m_AncDataIsSet = false;
    m_UserData1 = utility::conversions::to_string_t("");
    m_UserData1IsSet = false;
    m_UserData2 = utility::conversions::to_string_t("");
    m_UserData2IsSet = false;
}

Frame::~Frame()
{
}

void Frame::validate()
{
    // TODO: implement validation
}

bool Frame::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	if (userData1IsSet())
	{
		bool userData1Changed = false;
		utility::string_t v = getUserData1();
		if (userData1Changed) { setUserData1(v); anyMinMaxValueChanged = true; }
	}
	if (userData2IsSet())
	{
		bool userData2Changed = false;
		utility::string_t v = getUserData2();
		if (userData2Changed) { setUserData2(v); anyMinMaxValueChanged = true; }
	}
	return anyMinMaxValueChanged;
}

web::json::value Frame::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ImageIsSet)
    {
        val[utility::conversions::to_string_t(U("image"))] = ModelBase::toJson(m_Image);
    }
    if(m_AncDataIsSet)
    {
        val[utility::conversions::to_string_t(U("ancData"))] = ModelBase::toJson(m_AncData);
    }
    if(m_UserData1IsSet)
    {
        val[utility::conversions::to_string_t(U("userData1"))] = ModelBase::toJson(m_UserData1);
    }
    if(m_UserData2IsSet)
    {
        val[utility::conversions::to_string_t(U("userData2"))] = ModelBase::toJson(m_UserData2);
    }

    return val;
}

bool Frame::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("image"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("image")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_image;
            ok &= ModelBase::fromJson(fieldValue, refVal_image);
            setImage(refVal_image);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ancData"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ancData")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ancData;
            ok &= ModelBase::fromJson(fieldValue, refVal_ancData);
            setAncData(refVal_ancData);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("userData1"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("userData1")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_userData1;
            ok &= ModelBase::fromJson(fieldValue, refVal_userData1);
            setUserData1(refVal_userData1);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("userData2"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("userData2")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_userData2;
            ok &= ModelBase::fromJson(fieldValue, refVal_userData2);
            setUserData2(refVal_userData2);
        }
    }
    
    applyMinMaxConstraints();
    return ok;
}

void Frame::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ImageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("image")), m_Image));
    }
    if(m_AncDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ancData")), m_AncData));
    }
    if(m_UserData1IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userData1")), m_UserData1));
    }
    if(m_UserData2IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userData2")), m_UserData2));
    }
}

bool Frame::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("image"))))
    {
        utility::string_t refVal_image;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("image"))), refVal_image );
        setImage(refVal_image);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ancData"))))
    {
        utility::string_t refVal_ancData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ancData"))), refVal_ancData );
        setAncData(refVal_ancData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userData1"))))
    {
        utility::string_t refVal_userData1;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userData1"))), refVal_userData1 );
        setUserData1(refVal_userData1);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userData2"))))
    {
        utility::string_t refVal_userData2;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userData2"))), refVal_userData2 );
        setUserData2(refVal_userData2);
    }
    
    applyMinMaxConstraints();
    return ok;
}

utility::string_t Frame::getImage() const
{
    return m_Image;
}

void Frame::setImage(const utility::string_t& value)
{
	utility::string_t v = value;
    m_Image = v;
    m_ImageIsSet = true;
}

bool Frame::imageIsSet() const
{
    return m_ImageIsSet;
}

void Frame::unsetImage()
{
    m_ImageIsSet = false;
}


utility::string_t Frame::getAncData() const
{
    return m_AncData;
}

void Frame::setAncData(const utility::string_t& value)
{
	utility::string_t v = value;
    m_AncData = v;
    m_AncDataIsSet = true;
}

bool Frame::ancDataIsSet() const
{
    return m_AncDataIsSet;
}

void Frame::unsetAncData()
{
    m_AncDataIsSet = false;
}


utility::string_t Frame::getUserData1() const
{
    return m_UserData1;
}

void Frame::setUserData1(const utility::string_t& value)
{
	utility::string_t v = value;
    m_UserData1 = v;
    m_UserData1IsSet = true;
}

bool Frame::userData1IsSet() const
{
    return m_UserData1IsSet;
}

void Frame::unsetUserData1()
{
    m_UserData1IsSet = false;
}



utility::string_t Frame::getUserData2() const
{
    return m_UserData2;
}

void Frame::setUserData2(const utility::string_t& value)
{
	utility::string_t v = value;
    m_UserData2 = v;
    m_UserData2IsSet = true;
}

bool Frame::userData2IsSet() const
{
    return m_UserData2IsSet;
}

void Frame::unsetUserData2()
{
    m_UserData2IsSet = false;
}



}
}
}
}

