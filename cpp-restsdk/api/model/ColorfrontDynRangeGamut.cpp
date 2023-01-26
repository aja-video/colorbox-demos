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



#include "ColorfrontDynRangeGamut.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



namespace
{
using EnumUnderlyingType = utility::string_t;

ColorfrontDynRangeGamut::eColorfrontDynRangeGamut toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("SDR BT.709")))
        return ColorfrontDynRangeGamut::eColorfrontDynRangeGamut::ColorfrontDynRangeGamut_SDR_BT_709;
    if (val == utility::conversions::to_string_t(U("HLG BT.2100")))
        return ColorfrontDynRangeGamut::eColorfrontDynRangeGamut::ColorfrontDynRangeGamut_HLG_BT_2100;
    if (val == utility::conversions::to_string_t(U("PQ BT.2020")))
        return ColorfrontDynRangeGamut::eColorfrontDynRangeGamut::ColorfrontDynRangeGamut_PQ_BT_2020;
    return {};
}

EnumUnderlyingType fromEnum(ColorfrontDynRangeGamut::eColorfrontDynRangeGamut e)
{
    switch (e)
    {
    case ColorfrontDynRangeGamut::eColorfrontDynRangeGamut::ColorfrontDynRangeGamut_SDR_BT_709:
        return U("SDR BT.709");
    case ColorfrontDynRangeGamut::eColorfrontDynRangeGamut::ColorfrontDynRangeGamut_HLG_BT_2100:
        return U("HLG BT.2100");
    case ColorfrontDynRangeGamut::eColorfrontDynRangeGamut::ColorfrontDynRangeGamut_PQ_BT_2020:
        return U("PQ BT.2020");
    default:
        break;
    }
    return {};
}
}

ColorfrontDynRangeGamut::ColorfrontDynRangeGamut()
{
}

ColorfrontDynRangeGamut::~ColorfrontDynRangeGamut()
{
}

void ColorfrontDynRangeGamut::validate()
{
    // TODO: implement validation
}

bool ColorfrontDynRangeGamut::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

web::json::value ColorfrontDynRangeGamut::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool ColorfrontDynRangeGamut::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void ColorfrontDynRangeGamut::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool ColorfrontDynRangeGamut::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

ColorfrontDynRangeGamut::eColorfrontDynRangeGamut ColorfrontDynRangeGamut::getValue() const
{
   return m_value;
}

void ColorfrontDynRangeGamut::setValue(ColorfrontDynRangeGamut::eColorfrontDynRangeGamut const value)
{
   m_value = value;
}


}
}
}
}


