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
 * ColorfrontDynRangeGamutTvModeIn.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ColorfrontDynRangeGamutTvModeIn_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ColorfrontDynRangeGamutTvModeIn_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  ColorfrontDynRangeGamutTvModeIn
    : public ModelBase
{
public:
    ColorfrontDynRangeGamutTvModeIn();
    virtual ~ColorfrontDynRangeGamutTvModeIn();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool applyMinMaxConstraints() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eColorfrontDynRangeGamutTvModeIn
    {
        ColorfrontDynRangeGamutTvModeIn_SDR_BT_709,
        ColorfrontDynRangeGamutTvModeIn_HLG_BT_2020,
        ColorfrontDynRangeGamutTvModeIn_PQ_BT_2020,
        ColorfrontDynRangeGamutTvModeIn_SONY_SLOG3_BT_2020,
    };

    eColorfrontDynRangeGamutTvModeIn getValue() const;
    void setValue(eColorfrontDynRangeGamutTvModeIn const value);

    protected:
        eColorfrontDynRangeGamutTvModeIn m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ColorfrontDynRangeGamutTvModeIn_H_ */
