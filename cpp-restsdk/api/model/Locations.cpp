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



#include "Locations.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



namespace
{
using EnumUnderlyingType = utility::string_t;

Locations::eLocations toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("Top Left")))
        return Locations::eLocations::Locations_TOP_LEFT;
    if (val == utility::conversions::to_string_t(U("Top Center")))
        return Locations::eLocations::Locations_TOP_CENTER;
    if (val == utility::conversions::to_string_t(U("Top Right")))
        return Locations::eLocations::Locations_TOP_RIGHT;
    if (val == utility::conversions::to_string_t(U("Bottom Left")))
        return Locations::eLocations::Locations_BOTTOM_LEFT;
    if (val == utility::conversions::to_string_t(U("Bottom Center")))
        return Locations::eLocations::Locations_BOTTOM_CENTER;
    if (val == utility::conversions::to_string_t(U("Bottom Right")))
        return Locations::eLocations::Locations_BOTTOM_RIGHT;
    return {};
}

EnumUnderlyingType fromEnum(Locations::eLocations e)
{
    switch (e)
    {
    case Locations::eLocations::Locations_TOP_LEFT:
        return U("Top Left");
    case Locations::eLocations::Locations_TOP_CENTER:
        return U("Top Center");
    case Locations::eLocations::Locations_TOP_RIGHT:
        return U("Top Right");
    case Locations::eLocations::Locations_BOTTOM_LEFT:
        return U("Bottom Left");
    case Locations::eLocations::Locations_BOTTOM_CENTER:
        return U("Bottom Center");
    case Locations::eLocations::Locations_BOTTOM_RIGHT:
        return U("Bottom Right");
    default:
        break;
    }
    return {};
}
}

Locations::Locations()
{
}

Locations::~Locations()
{
}

void Locations::validate()
{
    // TODO: implement validation
}

bool Locations::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

web::json::value Locations::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool Locations::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void Locations::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool Locations::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

Locations::eLocations Locations::getValue() const
{
   return m_value;
}

void Locations::setValue(Locations::eLocations const value)
{
   m_value = value;
}


}
}
}
}


