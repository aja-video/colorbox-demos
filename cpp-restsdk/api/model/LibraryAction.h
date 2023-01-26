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

/*
 * LibraryAction.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_LibraryAction_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_LibraryAction_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  LibraryAction
    : public ModelBase
{
public:
    LibraryAction();
    virtual ~LibraryAction();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool applyMinMaxConstraints() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eLibraryAction
    {
        LibraryAction_IDLE,
        LibraryAction_DELETEENTRY,
        LibraryAction_STOREENTRY,
        LibraryAction_RECALLENTRY,
        LibraryAction_SETUSERNAME,
        LibraryAction_CAPTURE,
        LibraryAction_RESCAN,
    };

    eLibraryAction getValue() const;
    void setValue(eLibraryAction const value);

    protected:
        eLibraryAction m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_LibraryAction_H_ */
