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



#include "Routing.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Routing::Routing()
{
    m_ModeIsSet = false;
    m_PreviewTapIsSet = false;
    m_PipelineBypassButton = false;
    m_PipelineBypassButtonIsSet = false;
    m_PipelineBypassUser = false;
    m_PipelineBypassUserIsSet = false;
}

Routing::~Routing()
{
}

void Routing::validate()
{
    // TODO: implement validation
}

bool Routing::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	return anyMinMaxValueChanged;
}

web::json::value Routing::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ModeIsSet)
    {
        val[utility::conversions::to_string_t(U("mode"))] = ModelBase::toJson(m_Mode);
    }
    if(m_PreviewTapIsSet)
    {
        val[utility::conversions::to_string_t(U("previewTap"))] = ModelBase::toJson(m_PreviewTap);
    }
    if(m_PipelineBypassButtonIsSet)
    {
        val[utility::conversions::to_string_t(U("pipelineBypassButton"))] = ModelBase::toJson(m_PipelineBypassButton);
    }
    if(m_PipelineBypassUserIsSet)
    {
        val[utility::conversions::to_string_t(U("pipelineBypassUser"))] = ModelBase::toJson(m_PipelineBypassUser);
    }

    return val;
}

bool Routing::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("mode"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("mode")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Mode> refVal_mode;
            ok &= ModelBase::fromJson(fieldValue, refVal_mode);
            setMode(refVal_mode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("previewTap"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("previewTap")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PreviewTap> refVal_previewTap;
            ok &= ModelBase::fromJson(fieldValue, refVal_previewTap);
            setPreviewTap(refVal_previewTap);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pipelineBypassButton"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pipelineBypassButton")));
        if(!fieldValue.is_null())
        {
            bool refVal_pipelineBypassButton;
            ok &= ModelBase::fromJson(fieldValue, refVal_pipelineBypassButton);
            setPipelineBypassButton(refVal_pipelineBypassButton);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pipelineBypassUser"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pipelineBypassUser")));
        if(!fieldValue.is_null())
        {
            bool refVal_pipelineBypassUser;
            ok &= ModelBase::fromJson(fieldValue, refVal_pipelineBypassUser);
            setPipelineBypassUser(refVal_pipelineBypassUser);
        }
    }
    
    applyMinMaxConstraints();
    return ok;
}

void Routing::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("mode")), m_Mode));
    }
    if(m_PreviewTapIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("previewTap")), m_PreviewTap));
    }
    if(m_PipelineBypassButtonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pipelineBypassButton")), m_PipelineBypassButton));
    }
    if(m_PipelineBypassUserIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pipelineBypassUser")), m_PipelineBypassUser));
    }
}

bool Routing::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("mode"))))
    {
        std::shared_ptr<Mode> refVal_mode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("mode"))), refVal_mode );
        setMode(refVal_mode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("previewTap"))))
    {
        std::shared_ptr<PreviewTap> refVal_previewTap;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("previewTap"))), refVal_previewTap );
        setPreviewTap(refVal_previewTap);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pipelineBypassButton"))))
    {
        bool refVal_pipelineBypassButton;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pipelineBypassButton"))), refVal_pipelineBypassButton );
        setPipelineBypassButton(refVal_pipelineBypassButton);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pipelineBypassUser"))))
    {
        bool refVal_pipelineBypassUser;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pipelineBypassUser"))), refVal_pipelineBypassUser );
        setPipelineBypassUser(refVal_pipelineBypassUser);
    }
    
    applyMinMaxConstraints();
    return ok;
}

std::shared_ptr<Mode> Routing::getMode() const
{
    return m_Mode;
}

void Routing::setMode(const std::shared_ptr<Mode>& value)
{
	std::shared_ptr<Mode> v = value;
    m_Mode = v;
    m_ModeIsSet = true;
}

bool Routing::modeIsSet() const
{
    return m_ModeIsSet;
}

void Routing::unsetMode()
{
    m_ModeIsSet = false;
}


std::shared_ptr<PreviewTap> Routing::getPreviewTap() const
{
    return m_PreviewTap;
}

void Routing::setPreviewTap(const std::shared_ptr<PreviewTap>& value)
{
	std::shared_ptr<PreviewTap> v = value;
    m_PreviewTap = v;
    m_PreviewTapIsSet = true;
}

bool Routing::previewTapIsSet() const
{
    return m_PreviewTapIsSet;
}

void Routing::unsetPreviewTap()
{
    m_PreviewTapIsSet = false;
}


bool Routing::isPipelineBypassButton() const
{
    return m_PipelineBypassButton;
}

void Routing::setPipelineBypassButton(bool value)
{
	bool v = value;
    m_PipelineBypassButton = v;
    m_PipelineBypassButtonIsSet = true;
}

bool Routing::pipelineBypassButtonIsSet() const
{
    return m_PipelineBypassButtonIsSet;
}

void Routing::unsetPipelineBypassButton()
{
    m_PipelineBypassButtonIsSet = false;
}


bool Routing::isPipelineBypassUser() const
{
    return m_PipelineBypassUser;
}

void Routing::setPipelineBypassUser(bool value)
{
	bool v = value;
    m_PipelineBypassUser = v;
    m_PipelineBypassUserIsSet = true;
}

bool Routing::pipelineBypassUserIsSet() const
{
    return m_PipelineBypassUserIsSet;
}

void Routing::unsetPipelineBypassUser()
{
    m_PipelineBypassUserIsSet = false;
}


}
}
}
}


