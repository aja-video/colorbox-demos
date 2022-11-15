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



#include "PipelineRange.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



namespace
{
using EnumUnderlyingType = utility::string_t;

PipelineRange::ePipelineRange toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("SMPTEFull")))
        return PipelineRange::ePipelineRange::PipelineRange_SMPTEFULL;
    if (val == utility::conversions::to_string_t(U("SMPTENarrow")))
        return PipelineRange::ePipelineRange::PipelineRange_SMPTENARROW;
    if (val == utility::conversions::to_string_t(U("SMPTESDIFull")))
        return PipelineRange::ePipelineRange::PipelineRange_SMPTESDIFULL;
    return {};
}

EnumUnderlyingType fromEnum(PipelineRange::ePipelineRange e)
{
    switch (e)
    {
    case PipelineRange::ePipelineRange::PipelineRange_SMPTEFULL:
        return U("SMPTEFull");
    case PipelineRange::ePipelineRange::PipelineRange_SMPTENARROW:
        return U("SMPTENarrow");
    case PipelineRange::ePipelineRange::PipelineRange_SMPTESDIFULL:
        return U("SMPTESDIFull");
    default:
        break;
    }
    return {};
}
}

PipelineRange::PipelineRange()
{
}

PipelineRange::~PipelineRange()
{
}

void PipelineRange::validate()
{
    // TODO: implement validation
}

bool PipelineRange::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

web::json::value PipelineRange::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool PipelineRange::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void PipelineRange::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool PipelineRange::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

PipelineRange::ePipelineRange PipelineRange::getValue() const
{
   return m_value;
}

void PipelineRange::setValue(PipelineRange::ePipelineRange const value)
{
   m_value = value;
}


}
}
}
}

