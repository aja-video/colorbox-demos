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



#include "PatternColor.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




PatternColor::PatternColor()
{
    m_Depth = 0;
    m_DepthIsSet = false;
    m_Blue = 0;
    m_BlueIsSet = false;
    m_Green = 0;
    m_GreenIsSet = false;
    m_Red = 0;
    m_RedIsSet = false;
}

PatternColor::~PatternColor()
{
}

void PatternColor::validate()
{
    // TODO: implement validation
}

bool PatternColor::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	if (depthIsSet())
	{
		bool depthChanged = false;
		int32_t v = getDepth();
		int32_t min = depthMin();
		int32_t max = depthMax();
		if (v < min) { v = min; depthChanged = true; }
		if (v > max) { v = max; depthChanged = true; }
		if (depthChanged) { setDepth(v); anyMinMaxValueChanged = true; }
	}
	if (blueIsSet())
	{
		bool blueChanged = false;
		int32_t v = getBlue();
		int32_t min = blueMin();
		int32_t max = blueMax();
		if (v < min) { v = min; blueChanged = true; }
		if (v > max) { v = max; blueChanged = true; }
		if (blueChanged) { setBlue(v); anyMinMaxValueChanged = true; }
	}
	if (greenIsSet())
	{
		bool greenChanged = false;
		int32_t v = getGreen();
		int32_t min = greenMin();
		int32_t max = greenMax();
		if (v < min) { v = min; greenChanged = true; }
		if (v > max) { v = max; greenChanged = true; }
		if (greenChanged) { setGreen(v); anyMinMaxValueChanged = true; }
	}
	if (redIsSet())
	{
		bool redChanged = false;
		int32_t v = getRed();
		int32_t min = redMin();
		int32_t max = redMax();
		if (v < min) { v = min; redChanged = true; }
		if (v > max) { v = max; redChanged = true; }
		if (redChanged) { setRed(v); anyMinMaxValueChanged = true; }
	}
	return anyMinMaxValueChanged;
}

web::json::value PatternColor::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DepthIsSet)
    {
        val[utility::conversions::to_string_t(U("depth"))] = ModelBase::toJson(m_Depth);
    }
    if(m_BlueIsSet)
    {
        val[utility::conversions::to_string_t(U("blue"))] = ModelBase::toJson(m_Blue);
    }
    if(m_GreenIsSet)
    {
        val[utility::conversions::to_string_t(U("green"))] = ModelBase::toJson(m_Green);
    }
    if(m_RedIsSet)
    {
        val[utility::conversions::to_string_t(U("red"))] = ModelBase::toJson(m_Red);
    }

    return val;
}

bool PatternColor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("depth"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("depth")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_depth;
            ok &= ModelBase::fromJson(fieldValue, refVal_depth);
            setDepth(refVal_depth);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("blue"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("blue")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_blue;
            ok &= ModelBase::fromJson(fieldValue, refVal_blue);
            setBlue(refVal_blue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("green"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("green")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_green;
            ok &= ModelBase::fromJson(fieldValue, refVal_green);
            setGreen(refVal_green);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("red"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("red")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_red;
            ok &= ModelBase::fromJson(fieldValue, refVal_red);
            setRed(refVal_red);
        }
    }
    
    applyMinMaxConstraints();
    return ok;
}

void PatternColor::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_DepthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("depth")), m_Depth));
    }
    if(m_BlueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("blue")), m_Blue));
    }
    if(m_GreenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("green")), m_Green));
    }
    if(m_RedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("red")), m_Red));
    }
}

bool PatternColor::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("depth"))))
    {
        int32_t refVal_depth;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("depth"))), refVal_depth );
        setDepth(refVal_depth);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("blue"))))
    {
        int32_t refVal_blue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("blue"))), refVal_blue );
        setBlue(refVal_blue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("green"))))
    {
        int32_t refVal_green;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("green"))), refVal_green );
        setGreen(refVal_green);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("red"))))
    {
        int32_t refVal_red;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("red"))), refVal_red );
        setRed(refVal_red);
    }
    
    applyMinMaxConstraints();
    return ok;
}

int32_t PatternColor::getDepth() const
{
    return m_Depth;
}

void PatternColor::setDepth(int32_t value)
{
	int32_t v = value;
	int32_t min = depthMin();
	int32_t max = depthMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
    m_Depth = v;
    m_DepthIsSet = true;
}

bool PatternColor::depthIsSet() const
{
    return m_DepthIsSet;
}

void PatternColor::unsetDepth()
{
    m_DepthIsSet = false;
}

int32_t PatternColor::depthMin() const {
	return 8;
}

int32_t PatternColor::depthMax() const {
	return 16;
}

int32_t PatternColor::getBlue() const
{
    return m_Blue;
}

void PatternColor::setBlue(int32_t value)
{
	int32_t v = value;
	int32_t min = blueMin();
	int32_t max = blueMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
    m_Blue = v;
    m_BlueIsSet = true;
}

bool PatternColor::blueIsSet() const
{
    return m_BlueIsSet;
}

void PatternColor::unsetBlue()
{
    m_BlueIsSet = false;
}

int32_t PatternColor::blueMin() const {
	return 0;
}

int32_t PatternColor::blueMax() const {
	return 65535;
}

int32_t PatternColor::getGreen() const
{
    return m_Green;
}

void PatternColor::setGreen(int32_t value)
{
	int32_t v = value;
	int32_t min = greenMin();
	int32_t max = greenMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
    m_Green = v;
    m_GreenIsSet = true;
}

bool PatternColor::greenIsSet() const
{
    return m_GreenIsSet;
}

void PatternColor::unsetGreen()
{
    m_GreenIsSet = false;
}

int32_t PatternColor::greenMin() const {
	return 0;
}

int32_t PatternColor::greenMax() const {
	return 65535;
}

int32_t PatternColor::getRed() const
{
    return m_Red;
}

void PatternColor::setRed(int32_t value)
{
	int32_t v = value;
	int32_t min = redMin();
	int32_t max = redMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
    m_Red = v;
    m_RedIsSet = true;
}

bool PatternColor::redIsSet() const
{
    return m_RedIsSet;
}

void PatternColor::unsetRed()
{
    m_RedIsSet = false;
}

int32_t PatternColor::redMin() const {
	return 0;
}

int32_t PatternColor::redMax() const {
	return 65535;
}

}
}
}
}


