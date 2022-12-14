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

/*
 * ScanMode.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ScanMode_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ScanMode_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  ScanMode
    : public ModelBase
{
public:
    ScanMode();
    virtual ~ScanMode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool applyMinMaxConstraints() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eScanMode
    {
        ScanMode_AUTO,
        ScanMode_PROGRESSIVE,
        ScanMode_INTERLACED,
        ScanMode_PSF,
    };

    eScanMode getValue() const;
    void setValue(eScanMode const value);

    protected:
        eScanMode m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ScanMode_H_ */
