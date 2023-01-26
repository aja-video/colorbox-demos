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
 * SystemPassword.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_SystemPassword_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_SystemPassword_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  SystemPassword
    : public ModelBase
{
public:
    SystemPassword();
    virtual ~SystemPassword();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool applyMinMaxConstraints() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SystemPassword members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCurrentPassword() const;
    bool currentPasswordIsSet() const;
    void unsetCurrentPassword();

    void setCurrentPassword(const utility::string_t& value);


    /// <summary>
    /// 
    /// </summary>
    utility::string_t getNewPassword() const;
    bool newPasswordIsSet() const;
    void unsetNewPassword();

    void setNewPassword(const utility::string_t& value);



protected:
    utility::string_t m_CurrentPassword;
    bool m_CurrentPasswordIsSet;
    utility::string_t m_NewPassword;
    bool m_NewPasswordIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_SystemPassword_H_ */
