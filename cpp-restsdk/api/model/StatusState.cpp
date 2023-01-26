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



#include "StatusState.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



namespace
{
using EnumUnderlyingType = utility::string_t;

StatusState::eStatusState toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("StatusStateGood")))
        return StatusState::eStatusState::StatusState_STATUSSTATEGOOD;
    if (val == utility::conversions::to_string_t(U("StatusStateMaybe")))
        return StatusState::eStatusState::StatusState_STATUSSTATEMAYBE;
    if (val == utility::conversions::to_string_t(U("StatusStateBad")))
        return StatusState::eStatusState::StatusState_STATUSSTATEBAD;
    if (val == utility::conversions::to_string_t(U("StatusStateUnknown")))
        return StatusState::eStatusState::StatusState_STATUSSTATEUNKNOWN;
    return {};
}

EnumUnderlyingType fromEnum(StatusState::eStatusState e)
{
    switch (e)
    {
    case StatusState::eStatusState::StatusState_STATUSSTATEGOOD:
        return U("StatusStateGood");
    case StatusState::eStatusState::StatusState_STATUSSTATEMAYBE:
        return U("StatusStateMaybe");
    case StatusState::eStatusState::StatusState_STATUSSTATEBAD:
        return U("StatusStateBad");
    case StatusState::eStatusState::StatusState_STATUSSTATEUNKNOWN:
        return U("StatusStateUnknown");
    default:
        break;
    }
    return {};
}
}

StatusState::StatusState()
{
}

StatusState::~StatusState()
{
}

void StatusState::validate()
{
    // TODO: implement validation
}

bool StatusState::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

web::json::value StatusState::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool StatusState::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void StatusState::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool StatusState::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

StatusState::eStatusState StatusState::getValue() const
{
   return m_value;
}

void StatusState::setValue(StatusState::eStatusState const value)
{
   m_value = value;
}


}
}
}
}


