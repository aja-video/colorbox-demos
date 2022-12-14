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



#include "LibraryAction.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



namespace
{
using EnumUnderlyingType = utility::string_t;

LibraryAction::eLibraryAction toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("Idle")))
        return LibraryAction::eLibraryAction::LibraryAction_IDLE;
    if (val == utility::conversions::to_string_t(U("DeleteEntry")))
        return LibraryAction::eLibraryAction::LibraryAction_DELETEENTRY;
    if (val == utility::conversions::to_string_t(U("StoreEntry")))
        return LibraryAction::eLibraryAction::LibraryAction_STOREENTRY;
    if (val == utility::conversions::to_string_t(U("RecallEntry")))
        return LibraryAction::eLibraryAction::LibraryAction_RECALLENTRY;
    if (val == utility::conversions::to_string_t(U("SetUserName")))
        return LibraryAction::eLibraryAction::LibraryAction_SETUSERNAME;
    if (val == utility::conversions::to_string_t(U("Capture")))
        return LibraryAction::eLibraryAction::LibraryAction_CAPTURE;
    if (val == utility::conversions::to_string_t(U("Rescan")))
        return LibraryAction::eLibraryAction::LibraryAction_RESCAN;
    return {};
}

EnumUnderlyingType fromEnum(LibraryAction::eLibraryAction e)
{
    switch (e)
    {
    case LibraryAction::eLibraryAction::LibraryAction_IDLE:
        return U("Idle");
    case LibraryAction::eLibraryAction::LibraryAction_DELETEENTRY:
        return U("DeleteEntry");
    case LibraryAction::eLibraryAction::LibraryAction_STOREENTRY:
        return U("StoreEntry");
    case LibraryAction::eLibraryAction::LibraryAction_RECALLENTRY:
        return U("RecallEntry");
    case LibraryAction::eLibraryAction::LibraryAction_SETUSERNAME:
        return U("SetUserName");
    case LibraryAction::eLibraryAction::LibraryAction_CAPTURE:
        return U("Capture");
    case LibraryAction::eLibraryAction::LibraryAction_RESCAN:
        return U("Rescan");
    default:
        break;
    }
    return {};
}
}

LibraryAction::LibraryAction()
{
}

LibraryAction::~LibraryAction()
{
}

void LibraryAction::validate()
{
    // TODO: implement validation
}

bool LibraryAction::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

web::json::value LibraryAction::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool LibraryAction::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void LibraryAction::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool LibraryAction::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

LibraryAction::eLibraryAction LibraryAction::getValue() const
{
   return m_value;
}

void LibraryAction::setValue(LibraryAction::eLibraryAction const value)
{
   m_value = value;
}


}
}
}
}


