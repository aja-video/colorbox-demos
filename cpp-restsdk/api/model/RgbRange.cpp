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



#include "RgbRange.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



namespace
{
using EnumUnderlyingType = utility::string_t;

RgbRange::eRgbRange toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("Auto")))
        return RgbRange::eRgbRange::RgbRange_AUTO;
    if (val == utility::conversions::to_string_t(U("SMPTE Full")))
        return RgbRange::eRgbRange::RgbRange_SMPTE_FULL;
    if (val == utility::conversions::to_string_t(U("SMPTE Narrow")))
        return RgbRange::eRgbRange::RgbRange_SMPTE_NARROW;
    return {};
}

EnumUnderlyingType fromEnum(RgbRange::eRgbRange e)
{
    switch (e)
    {
    case RgbRange::eRgbRange::RgbRange_AUTO:
        return U("Auto");
    case RgbRange::eRgbRange::RgbRange_SMPTE_FULL:
        return U("SMPTE Full");
    case RgbRange::eRgbRange::RgbRange_SMPTE_NARROW:
        return U("SMPTE Narrow");
    default:
        break;
    }
    return {};
}
}

RgbRange::RgbRange()
{
}

RgbRange::~RgbRange()
{
}

void RgbRange::validate()
{
    // TODO: implement validation
}

bool RgbRange::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

web::json::value RgbRange::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool RgbRange::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void RgbRange::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool RgbRange::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }
    {
        EnumUnderlyingType e;
        ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), e);
        if (ok)
        {
            auto v = toEnum(e);
            setValue(v);
        }
    }
    return ok;
}

RgbRange::eRgbRange RgbRange::getValue() const
{
   return m_value;
}

void RgbRange::setValue(RgbRange::eRgbRange const value)
{
   m_value = value;
}


}
}
}
}

