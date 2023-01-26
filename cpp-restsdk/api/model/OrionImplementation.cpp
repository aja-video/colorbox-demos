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



#include "OrionImplementation.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



namespace
{
using EnumUnderlyingType = utility::string_t;

OrionImplementation::eOrionImplementation toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("Engine")))
        return OrionImplementation::eOrionImplementation::OrionImplementation_ENGINE;
    if (val == utility::conversions::to_string_t(U("Render")))
        return OrionImplementation::eOrionImplementation::OrionImplementation_RENDER;
    return {};
}

EnumUnderlyingType fromEnum(OrionImplementation::eOrionImplementation e)
{
    switch (e)
    {
    case OrionImplementation::eOrionImplementation::OrionImplementation_ENGINE:
        return U("Engine");
    case OrionImplementation::eOrionImplementation::OrionImplementation_RENDER:
        return U("Render");
    default:
        break;
    }
    return {};
}
}

OrionImplementation::OrionImplementation()
{
}

OrionImplementation::~OrionImplementation()
{
}

void OrionImplementation::validate()
{
    // TODO: implement validation
}

bool OrionImplementation::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

web::json::value OrionImplementation::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool OrionImplementation::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void OrionImplementation::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool OrionImplementation::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

OrionImplementation::eOrionImplementation OrionImplementation::getValue() const
{
   return m_value;
}

void OrionImplementation::setValue(OrionImplementation::eOrionImplementation const value)
{
   m_value = value;
}


}
}
}
}


