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
 * ColorfrontDynRangeGamutLiveModeIn.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ColorfrontDynRangeGamutLiveModeIn_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ColorfrontDynRangeGamutLiveModeIn_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  ColorfrontDynRangeGamutLiveModeIn
    : public ModelBase
{
public:
    ColorfrontDynRangeGamutLiveModeIn();
    virtual ~ColorfrontDynRangeGamutLiveModeIn();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool applyMinMaxConstraints() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eColorfrontDynRangeGamutLiveModeIn
    {
        ColorfrontDynRangeGamutLiveModeIn_SDR_BT_709_100_NITS,
        ColorfrontDynRangeGamutLiveModeIn_SDR_EXTENDED_BT_709,
        ColorfrontDynRangeGamutLiveModeIn_PQ_BT_2020_1000_NITS,
        ColorfrontDynRangeGamutLiveModeIn_PQ_P3D65_1000_NITS,
        ColorfrontDynRangeGamutLiveModeIn_HLG_BT_2100,
        ColorfrontDynRangeGamutLiveModeIn_HLG_EXTENDED_BT_709,
        ColorfrontDynRangeGamutLiveModeIn_HLG_EXTENDED_BT_2100,
        ColorfrontDynRangeGamutLiveModeIn_SONY_SLOG3_S_GAMUT3,
        ColorfrontDynRangeGamutLiveModeIn_SONY_SLOG3_S_GAMUT3_CINE,
        ColorfrontDynRangeGamutLiveModeIn_SONY_SLOG3_BT_2020,
        ColorfrontDynRangeGamutLiveModeIn_ARRI_LOG_C_WIDE_GAMUT,
        ColorfrontDynRangeGamutLiveModeIn_ARRI_LOGC4_WIDE_GAMUT_4,
        ColorfrontDynRangeGamutLiveModeIn_PANASONIC_V_LOG,
        ColorfrontDynRangeGamutLiveModeIn_RED_LOG3G10_WIDE_GAMUT,
        ColorfrontDynRangeGamutLiveModeIn_CANON_LOG_2,
        ColorfrontDynRangeGamutLiveModeIn_CANON_LOG_3,
    };

    eColorfrontDynRangeGamutLiveModeIn getValue() const;
    void setValue(eColorfrontDynRangeGamutLiveModeIn const value);

    protected:
        eColorfrontDynRangeGamutLiveModeIn m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ColorfrontDynRangeGamutLiveModeIn_H_ */
