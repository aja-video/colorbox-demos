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



#include "InterfaceSetupState.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



namespace
{
using EnumUnderlyingType = utility::string_t;

InterfaceSetupState::eInterfaceSetupState toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("Uninitialized")))
        return InterfaceSetupState::eInterfaceSetupState::InterfaceSetupState_UNINITIALIZED;
    if (val == utility::conversions::to_string_t(U("Preparing")))
        return InterfaceSetupState::eInterfaceSetupState::InterfaceSetupState_PREPARING;
    if (val == utility::conversions::to_string_t(U("Complete")))
        return InterfaceSetupState::eInterfaceSetupState::InterfaceSetupState_COMPLETE;
    return {};
}

EnumUnderlyingType fromEnum(InterfaceSetupState::eInterfaceSetupState e)
{
    switch (e)
    {
    case InterfaceSetupState::eInterfaceSetupState::InterfaceSetupState_UNINITIALIZED:
        return U("Uninitialized");
    case InterfaceSetupState::eInterfaceSetupState::InterfaceSetupState_PREPARING:
        return U("Preparing");
    case InterfaceSetupState::eInterfaceSetupState::InterfaceSetupState_COMPLETE:
        return U("Complete");
    default:
        break;
    }
    return {};
}
}

InterfaceSetupState::InterfaceSetupState()
{
}

InterfaceSetupState::~InterfaceSetupState()
{
}

void InterfaceSetupState::validate()
{
    // TODO: implement validation
}

bool InterfaceSetupState::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

web::json::value InterfaceSetupState::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool InterfaceSetupState::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void InterfaceSetupState::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool InterfaceSetupState::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

InterfaceSetupState::eInterfaceSetupState InterfaceSetupState::getValue() const
{
   return m_value;
}

void InterfaceSetupState::setValue(InterfaceSetupState::eInterfaceSetupState const value)
{
   m_value = value;
}


}
}
}
}


