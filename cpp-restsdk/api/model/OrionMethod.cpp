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



#include "OrionMethod.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



namespace
{
using EnumUnderlyingType = utility::string_t;

OrionMethod::eOrionMethod toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("Luma")))
        return OrionMethod::eOrionMethod::OrionMethod_LUMA;
    if (val == utility::conversions::to_string_t(U("Max(RGB)")))
        return OrionMethod::eOrionMethod::OrionMethod_MAX_RGB_;
    return {};
}

EnumUnderlyingType fromEnum(OrionMethod::eOrionMethod e)
{
    switch (e)
    {
    case OrionMethod::eOrionMethod::OrionMethod_LUMA:
        return U("Luma");
    case OrionMethod::eOrionMethod::OrionMethod_MAX_RGB_:
        return U("Max(RGB)");
    default:
        break;
    }
    return {};
}
}

OrionMethod::OrionMethod()
{
}

OrionMethod::~OrionMethod()
{
}

void OrionMethod::validate()
{
    // TODO: implement validation
}

bool OrionMethod::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

web::json::value OrionMethod::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool OrionMethod::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void OrionMethod::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool OrionMethod::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

OrionMethod::eOrionMethod OrionMethod::getValue() const
{
   return m_value;
}

void OrionMethod::setValue(OrionMethod::eOrionMethod const value)
{
   m_value = value;
}


}
}
}
}


