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
 * NetConfig.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_NetConfig_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_NetConfig_H_


#include "ModelBase.h"

#include "model/IpConfig.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  NetConfig
    : public ModelBase
{
public:
    NetConfig();
    virtual ~NetConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool applyMinMaxConstraints() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// NetConfig members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<IpConfig> getIpConfig() const;
    bool ipConfigIsSet() const;
    void unsetIpConfig();

    void setIpConfig(const std::shared_ptr<IpConfig>& value);


    /// <summary>
    /// 
    /// </summary>
    int32_t getIpChangeCommit() const;
    bool ipChangeCommitIsSet() const;
    void unsetIpChangeCommit();

    void setIpChangeCommit(int32_t value);



protected:
    std::shared_ptr<IpConfig> m_IpConfig;
    bool m_IpConfigIsSet;
    int32_t m_IpChangeCommit;
    bool m_IpChangeCommitIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_NetConfig_H_ */
