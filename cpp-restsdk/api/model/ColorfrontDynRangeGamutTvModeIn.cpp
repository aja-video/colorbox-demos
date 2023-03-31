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



#include "ColorfrontDynRangeGamutTvModeIn.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



namespace
{
using EnumUnderlyingType = utility::string_t;

ColorfrontDynRangeGamutTvModeIn::eColorfrontDynRangeGamutTvModeIn toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("SDR BT.709")))
        return ColorfrontDynRangeGamutTvModeIn::eColorfrontDynRangeGamutTvModeIn::ColorfrontDynRangeGamutTvModeIn_SDR_BT_709;
    if (val == utility::conversions::to_string_t(U("HLG BT.2020")))
        return ColorfrontDynRangeGamutTvModeIn::eColorfrontDynRangeGamutTvModeIn::ColorfrontDynRangeGamutTvModeIn_HLG_BT_2020;
    if (val == utility::conversions::to_string_t(U("PQ BT.2020")))
        return ColorfrontDynRangeGamutTvModeIn::eColorfrontDynRangeGamutTvModeIn::ColorfrontDynRangeGamutTvModeIn_PQ_BT_2020;
    if (val == utility::conversions::to_string_t(U("Sony SLog3 BT.2020")))
        return ColorfrontDynRangeGamutTvModeIn::eColorfrontDynRangeGamutTvModeIn::ColorfrontDynRangeGamutTvModeIn_SONY_SLOG3_BT_2020;
    return {};
}

EnumUnderlyingType fromEnum(ColorfrontDynRangeGamutTvModeIn::eColorfrontDynRangeGamutTvModeIn e)
{
    switch (e)
    {
    case ColorfrontDynRangeGamutTvModeIn::eColorfrontDynRangeGamutTvModeIn::ColorfrontDynRangeGamutTvModeIn_SDR_BT_709:
        return U("SDR BT.709");
    case ColorfrontDynRangeGamutTvModeIn::eColorfrontDynRangeGamutTvModeIn::ColorfrontDynRangeGamutTvModeIn_HLG_BT_2020:
        return U("HLG BT.2020");
    case ColorfrontDynRangeGamutTvModeIn::eColorfrontDynRangeGamutTvModeIn::ColorfrontDynRangeGamutTvModeIn_PQ_BT_2020:
        return U("PQ BT.2020");
    case ColorfrontDynRangeGamutTvModeIn::eColorfrontDynRangeGamutTvModeIn::ColorfrontDynRangeGamutTvModeIn_SONY_SLOG3_BT_2020:
        return U("Sony SLog3 BT.2020");
    default:
        break;
    }
    return {};
}
}

ColorfrontDynRangeGamutTvModeIn::ColorfrontDynRangeGamutTvModeIn()
{
}

ColorfrontDynRangeGamutTvModeIn::~ColorfrontDynRangeGamutTvModeIn()
{
}

void ColorfrontDynRangeGamutTvModeIn::validate()
{
    // TODO: implement validation
}

bool ColorfrontDynRangeGamutTvModeIn::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

web::json::value ColorfrontDynRangeGamutTvModeIn::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool ColorfrontDynRangeGamutTvModeIn::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void ColorfrontDynRangeGamutTvModeIn::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool ColorfrontDynRangeGamutTvModeIn::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

ColorfrontDynRangeGamutTvModeIn::eColorfrontDynRangeGamutTvModeIn ColorfrontDynRangeGamutTvModeIn::getValue() const
{
   return m_value;
}

void ColorfrontDynRangeGamutTvModeIn::setValue(ColorfrontDynRangeGamutTvModeIn::eColorfrontDynRangeGamutTvModeIn const value)
{
   m_value = value;
}


}
}
}
}

