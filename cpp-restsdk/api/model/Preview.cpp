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



#include "Preview.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Preview::Preview()
{
    m_ImageIsSet = false;
    m_ImageType = utility::conversions::to_string_t("");
    m_ImageTypeIsSet = false;
    m_AncDataIsSet = false;
    m_UserData1 = utility::conversions::to_string_t("");
    m_UserData1IsSet = false;
    m_UserData2 = utility::conversions::to_string_t("");
    m_UserData2IsSet = false;
}

Preview::~Preview()
{
}

void Preview::validate()
{
    // TODO: implement validation
}

bool Preview::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	if (imageTypeIsSet())
	{
		bool imageTypeChanged = false;
		utility::string_t v = getImageType();
		if (imageTypeChanged) { setImageType(v); anyMinMaxValueChanged = true; }
	}
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

web::json::value Preview::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ImageIsSet)
    {
        val[utility::conversions::to_string_t(U("image"))] = ModelBase::toJson(m_Image);
    }
    if(m_ImageTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("imageType"))] = ModelBase::toJson(m_ImageType);
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

bool Preview::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("imageType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("imageType")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_imageType;
            ok &= ModelBase::fromJson(fieldValue, refVal_imageType);
            setImageType(refVal_imageType);
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

void Preview::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ImageTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("imageType")), m_ImageType));
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

bool Preview::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("imageType"))))
    {
        utility::string_t refVal_imageType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("imageType"))), refVal_imageType );
        setImageType(refVal_imageType);
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

utility::string_t Preview::getImage() const
{
    return m_Image;
}

void Preview::setImage(const utility::string_t& value)
{
	utility::string_t v = value;
    m_Image = v;
    m_ImageIsSet = true;
}

bool Preview::imageIsSet() const
{
    return m_ImageIsSet;
}

void Preview::unsetImage()
{
    m_ImageIsSet = false;
}


utility::string_t Preview::getImageType() const
{
    return m_ImageType;
}

void Preview::setImageType(const utility::string_t& value)
{
	utility::string_t v = value;
    m_ImageType = v;
    m_ImageTypeIsSet = true;
}

bool Preview::imageTypeIsSet() const
{
    return m_ImageTypeIsSet;
}

void Preview::unsetImageType()
{
    m_ImageTypeIsSet = false;
}



utility::string_t Preview::getAncData() const
{
    return m_AncData;
}

void Preview::setAncData(const utility::string_t& value)
{
	utility::string_t v = value;
    m_AncData = v;
    m_AncDataIsSet = true;
}

bool Preview::ancDataIsSet() const
{
    return m_AncDataIsSet;
}

void Preview::unsetAncData()
{
    m_AncDataIsSet = false;
}


utility::string_t Preview::getUserData1() const
{
    return m_UserData1;
}

void Preview::setUserData1(const utility::string_t& value)
{
	utility::string_t v = value;
    m_UserData1 = v;
    m_UserData1IsSet = true;
}

bool Preview::userData1IsSet() const
{
    return m_UserData1IsSet;
}

void Preview::unsetUserData1()
{
    m_UserData1IsSet = false;
}



utility::string_t Preview::getUserData2() const
{
    return m_UserData2;
}

void Preview::setUserData2(const utility::string_t& value)
{
	utility::string_t v = value;
    m_UserData2 = v;
    m_UserData2IsSet = true;
}

bool Preview::userData2IsSet() const
{
    return m_UserData2IsSet;
}

void Preview::unsetUserData2()
{
    m_UserData2IsSet = false;
}



}
}
}
}


