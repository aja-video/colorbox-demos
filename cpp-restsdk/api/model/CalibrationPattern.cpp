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



#include "CalibrationPattern.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




CalibrationPattern::CalibrationPattern()
{
    m_BgColorIsSet = false;
    m_FgColorIsSet = false;
    m_FgRectIsSet = false;
    m_Stamp = utility::conversions::to_string_t("");
    m_StampIsSet = false;
}

CalibrationPattern::~CalibrationPattern()
{
}

void CalibrationPattern::validate()
{
    // TODO: implement validation
}

bool CalibrationPattern::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	if (stampIsSet())
	{
		bool stampChanged = false;
		utility::string_t v = getStamp();
		if (stampChanged) { setStamp(v); anyMinMaxValueChanged = true; }
	}
	return anyMinMaxValueChanged;
}

web::json::value CalibrationPattern::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_BgColorIsSet)
    {
        val[utility::conversions::to_string_t(U("bgColor"))] = ModelBase::toJson(m_BgColor);
    }
    if(m_FgColorIsSet)
    {
        val[utility::conversions::to_string_t(U("fgColor"))] = ModelBase::toJson(m_FgColor);
    }
    if(m_FgRectIsSet)
    {
        val[utility::conversions::to_string_t(U("fgRect"))] = ModelBase::toJson(m_FgRect);
    }
    if(m_StampIsSet)
    {
        val[utility::conversions::to_string_t(U("stamp"))] = ModelBase::toJson(m_Stamp);
    }

    return val;
}

bool CalibrationPattern::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("bgColor"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bgColor")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PatternColor> refVal_bgColor;
            ok &= ModelBase::fromJson(fieldValue, refVal_bgColor);
            setBgColor(refVal_bgColor);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("fgColor"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("fgColor")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PatternColor> refVal_fgColor;
            ok &= ModelBase::fromJson(fieldValue, refVal_fgColor);
            setFgColor(refVal_fgColor);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("fgRect"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("fgRect")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PatternRect> refVal_fgRect;
            ok &= ModelBase::fromJson(fieldValue, refVal_fgRect);
            setFgRect(refVal_fgRect);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("stamp"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("stamp")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_stamp;
            ok &= ModelBase::fromJson(fieldValue, refVal_stamp);
            setStamp(refVal_stamp);
        }
    }
    
    applyMinMaxConstraints();
    return ok;
}

void CalibrationPattern::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_BgColorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bgColor")), m_BgColor));
    }
    if(m_FgColorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("fgColor")), m_FgColor));
    }
    if(m_FgRectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("fgRect")), m_FgRect));
    }
    if(m_StampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("stamp")), m_Stamp));
    }
}

bool CalibrationPattern::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("bgColor"))))
    {
        std::shared_ptr<PatternColor> refVal_bgColor;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bgColor"))), refVal_bgColor );
        setBgColor(refVal_bgColor);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("fgColor"))))
    {
        std::shared_ptr<PatternColor> refVal_fgColor;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("fgColor"))), refVal_fgColor );
        setFgColor(refVal_fgColor);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("fgRect"))))
    {
        std::shared_ptr<PatternRect> refVal_fgRect;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("fgRect"))), refVal_fgRect );
        setFgRect(refVal_fgRect);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("stamp"))))
    {
        utility::string_t refVal_stamp;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("stamp"))), refVal_stamp );
        setStamp(refVal_stamp);
    }
    
    applyMinMaxConstraints();
    return ok;
}

std::shared_ptr<PatternColor> CalibrationPattern::getBgColor() const
{
    return m_BgColor;
}

void CalibrationPattern::setBgColor(const std::shared_ptr<PatternColor>& value)
{
	std::shared_ptr<PatternColor> v = value;
    m_BgColor = v;
    m_BgColorIsSet = true;
}

bool CalibrationPattern::bgColorIsSet() const
{
    return m_BgColorIsSet;
}

void CalibrationPattern::unsetBgColor()
{
    m_BgColorIsSet = false;
}


std::shared_ptr<PatternColor> CalibrationPattern::getFgColor() const
{
    return m_FgColor;
}

void CalibrationPattern::setFgColor(const std::shared_ptr<PatternColor>& value)
{
	std::shared_ptr<PatternColor> v = value;
    m_FgColor = v;
    m_FgColorIsSet = true;
}

bool CalibrationPattern::fgColorIsSet() const
{
    return m_FgColorIsSet;
}

void CalibrationPattern::unsetFgColor()
{
    m_FgColorIsSet = false;
}


std::shared_ptr<PatternRect> CalibrationPattern::getFgRect() const
{
    return m_FgRect;
}

void CalibrationPattern::setFgRect(const std::shared_ptr<PatternRect>& value)
{
	std::shared_ptr<PatternRect> v = value;
    m_FgRect = v;
    m_FgRectIsSet = true;
}

bool CalibrationPattern::fgRectIsSet() const
{
    return m_FgRectIsSet;
}

void CalibrationPattern::unsetFgRect()
{
    m_FgRectIsSet = false;
}


utility::string_t CalibrationPattern::getStamp() const
{
    return m_Stamp;
}

void CalibrationPattern::setStamp(const utility::string_t& value)
{
	utility::string_t v = value;
    m_Stamp = v;
    m_StampIsSet = true;
}

bool CalibrationPattern::stampIsSet() const
{
    return m_StampIsSet;
}

void CalibrationPattern::unsetStamp()
{
    m_StampIsSet = false;
}



}
}
}
}


