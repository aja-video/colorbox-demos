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



#include "Stage.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Stage::Stage()
{
    m_Enabled = false;
    m_EnabledIsSet = false;
    m_Dynamic = false;
    m_DynamicIsSet = false;
    m_LibraryEntry = 0;
    m_LibraryEntryIsSet = false;
    m_ColorCorrectorIsSet = false;
    m_ProcAmpIsSet = false;
}

Stage::~Stage()
{
}

void Stage::validate()
{
    // TODO: implement validation
}

bool Stage::applyMinMaxConstraints()
{
	bool anyMinMaxValueChanged = false;
	if (libraryEntryIsSet())
	{
		bool libraryEntryChanged = false;
		int32_t v = getLibraryEntry();
		if (libraryEntryChanged) { setLibraryEntry(v); anyMinMaxValueChanged = true; }
	}
	return anyMinMaxValueChanged;
}

web::json::value Stage::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_EnabledIsSet)
    {
        val[utility::conversions::to_string_t(U("enabled"))] = ModelBase::toJson(m_Enabled);
    }
    if(m_DynamicIsSet)
    {
        val[utility::conversions::to_string_t(U("dynamic"))] = ModelBase::toJson(m_Dynamic);
    }
    if(m_LibraryEntryIsSet)
    {
        val[utility::conversions::to_string_t(U("libraryEntry"))] = ModelBase::toJson(m_LibraryEntry);
    }
    if(m_ColorCorrectorIsSet)
    {
        val[utility::conversions::to_string_t(U("colorCorrector"))] = ModelBase::toJson(m_ColorCorrector);
    }
    if(m_ProcAmpIsSet)
    {
        val[utility::conversions::to_string_t(U("procAmp"))] = ModelBase::toJson(m_ProcAmp);
    }

    return val;
}

bool Stage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("enabled"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("enabled")));
        if(!fieldValue.is_null())
        {
            bool refVal_enabled;
            ok &= ModelBase::fromJson(fieldValue, refVal_enabled);
            setEnabled(refVal_enabled);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("dynamic"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("dynamic")));
        if(!fieldValue.is_null())
        {
            bool refVal_dynamic;
            ok &= ModelBase::fromJson(fieldValue, refVal_dynamic);
            setDynamic(refVal_dynamic);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("libraryEntry"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("libraryEntry")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_libraryEntry;
            ok &= ModelBase::fromJson(fieldValue, refVal_libraryEntry);
            setLibraryEntry(refVal_libraryEntry);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("colorCorrector"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("colorCorrector")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ColorCorrector> refVal_colorCorrector;
            ok &= ModelBase::fromJson(fieldValue, refVal_colorCorrector);
            setColorCorrector(refVal_colorCorrector);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("procAmp"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("procAmp")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ProcAmp> refVal_procAmp;
            ok &= ModelBase::fromJson(fieldValue, refVal_procAmp);
            setProcAmp(refVal_procAmp);
        }
    }
    
    applyMinMaxConstraints();
    return ok;
}

void Stage::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_EnabledIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("enabled")), m_Enabled));
    }
    if(m_DynamicIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("dynamic")), m_Dynamic));
    }
    if(m_LibraryEntryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("libraryEntry")), m_LibraryEntry));
    }
    if(m_ColorCorrectorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("colorCorrector")), m_ColorCorrector));
    }
    if(m_ProcAmpIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("procAmp")), m_ProcAmp));
    }
}

bool Stage::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("enabled"))))
    {
        bool refVal_enabled;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("enabled"))), refVal_enabled );
        setEnabled(refVal_enabled);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("dynamic"))))
    {
        bool refVal_dynamic;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("dynamic"))), refVal_dynamic );
        setDynamic(refVal_dynamic);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("libraryEntry"))))
    {
        int32_t refVal_libraryEntry;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("libraryEntry"))), refVal_libraryEntry );
        setLibraryEntry(refVal_libraryEntry);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("colorCorrector"))))
    {
        std::shared_ptr<ColorCorrector> refVal_colorCorrector;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("colorCorrector"))), refVal_colorCorrector );
        setColorCorrector(refVal_colorCorrector);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("procAmp"))))
    {
        std::shared_ptr<ProcAmp> refVal_procAmp;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("procAmp"))), refVal_procAmp );
        setProcAmp(refVal_procAmp);
    }
    
    applyMinMaxConstraints();
    return ok;
}

bool Stage::isEnabled() const
{
    return m_Enabled;
}

void Stage::setEnabled(bool value)
{
	bool v = value;
    m_Enabled = v;
    m_EnabledIsSet = true;
}

bool Stage::enabledIsSet() const
{
    return m_EnabledIsSet;
}

void Stage::unsetEnabled()
{
    m_EnabledIsSet = false;
}


bool Stage::isDynamic() const
{
    return m_Dynamic;
}

void Stage::setDynamic(bool value)
{
	bool v = value;
    m_Dynamic = v;
    m_DynamicIsSet = true;
}

bool Stage::dynamicIsSet() const
{
    return m_DynamicIsSet;
}

void Stage::unsetDynamic()
{
    m_DynamicIsSet = false;
}


int32_t Stage::getLibraryEntry() const
{
    return m_LibraryEntry;
}

void Stage::setLibraryEntry(int32_t value)
{
	int32_t v = value;
    m_LibraryEntry = v;
    m_LibraryEntryIsSet = true;
}

bool Stage::libraryEntryIsSet() const
{
    return m_LibraryEntryIsSet;
}

void Stage::unsetLibraryEntry()
{
    m_LibraryEntryIsSet = false;
}



std::shared_ptr<ColorCorrector> Stage::getColorCorrector() const
{
    return m_ColorCorrector;
}

void Stage::setColorCorrector(const std::shared_ptr<ColorCorrector>& value)
{
	std::shared_ptr<ColorCorrector> v = value;
    m_ColorCorrector = v;
    m_ColorCorrectorIsSet = true;
}

bool Stage::colorCorrectorIsSet() const
{
    return m_ColorCorrectorIsSet;
}

void Stage::unsetColorCorrector()
{
    m_ColorCorrectorIsSet = false;
}


std::shared_ptr<ProcAmp> Stage::getProcAmp() const
{
    return m_ProcAmp;
}

void Stage::setProcAmp(const std::shared_ptr<ProcAmp>& value)
{
	std::shared_ptr<ProcAmp> v = value;
    m_ProcAmp = v;
    m_ProcAmpIsSet = true;
}

bool Stage::procAmpIsSet() const
{
    return m_ProcAmpIsSet;
}

void Stage::unsetProcAmp()
{
    m_ProcAmpIsSet = false;
}


}
}
}
}


