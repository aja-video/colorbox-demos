/**
 * OpenAPI ColorBox
 * This is a REST API for the AJA ColorBox product.
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@aja.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 *       Do not edit the class manually.
 *
 * Copyright (C) 2020-2022 AJA Video Systems Inc.  All rights reserved.
 */

/*
 * OAIColorfrontLiveMode.h
 *
 * 
 */

#ifndef OAIColorfrontLiveMode_H
#define OAIColorfrontLiveMode_H

#include <QJsonObject>

#include "OAIColorfrontDynRangeGamutLiveModeIn.h"
#include "OAIColorfrontDynRangeGamutLiveModeOut.h"
#include "OAIColorfrontEngine.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIColorfrontLiveMode : public OAIObject {
public:
    OAIColorfrontLiveMode();
    OAIColorfrontLiveMode(QString json);
    ~OAIColorfrontLiveMode() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIColorfrontEngine getEngine() const;
    void setEngine(const OAIColorfrontEngine &engine);
    bool is_engine_Set() const;
    bool is_engine_Valid() const;

    OAIColorfrontDynRangeGamutLiveModeIn getInDynRangeGamut() const;
    void setInDynRangeGamut(const OAIColorfrontDynRangeGamutLiveModeIn &in_dyn_range_gamut);
    bool is_in_dyn_range_gamut_Set() const;
    bool is_in_dyn_range_gamut_Valid() const;

    OAIColorfrontDynRangeGamutLiveModeOut getOutDynRangeGamut() const;
    void setOutDynRangeGamut(const OAIColorfrontDynRangeGamutLiveModeOut &out_dyn_range_gamut);
    bool is_out_dyn_range_gamut_Set() const;
    bool is_out_dyn_range_gamut_Valid() const;

    bool isSdrPreview() const;
    void setSdrPreview(const bool &sdr_preview);
    bool is_sdr_preview_Set() const;
    bool is_sdr_preview_Valid() const;

    double getHdrAmount() const;
    void setHdrAmount(const double &hdr_amount);
    bool is_hdr_amount_Set() const;
    bool is_hdr_amount_Valid() const;
    double hdrAmountMin() const;
    double hdrAmountMax() const;

    double getAmbLightComp() const;
    void setAmbLightComp(const double &amb_light_comp);
    bool is_amb_light_comp_Set() const;
    bool is_amb_light_comp_Valid() const;
    double ambLightCompMin() const;
    double ambLightCompMax() const;

    double getHdrLogLook() const;
    void setHdrLogLook(const double &hdr_log_look);
    bool is_hdr_log_look_Set() const;
    bool is_hdr_log_look_Valid() const;
    double hdrLogLookMin() const;
    double hdrLogLookMax() const;

    double getSdrSoftness() const;
    void setSdrSoftness(const double &sdr_softness);
    bool is_sdr_softness_Set() const;
    bool is_sdr_softness_Valid() const;
    double sdrSoftnessMin() const;
    double sdrSoftnessMax() const;

    double getLiftMaster() const;
    void setLiftMaster(const double &lift_master);
    bool is_lift_master_Set() const;
    bool is_lift_master_Valid() const;
    double liftMasterMin() const;
    double liftMasterMax() const;

    double getLiftRed() const;
    void setLiftRed(const double &lift_red);
    bool is_lift_red_Set() const;
    bool is_lift_red_Valid() const;
    double liftRedMin() const;
    double liftRedMax() const;

    double getLiftGreen() const;
    void setLiftGreen(const double &lift_green);
    bool is_lift_green_Set() const;
    bool is_lift_green_Valid() const;
    double liftGreenMin() const;
    double liftGreenMax() const;

    double getLiftBlue() const;
    void setLiftBlue(const double &lift_blue);
    bool is_lift_blue_Set() const;
    bool is_lift_blue_Valid() const;
    double liftBlueMin() const;
    double liftBlueMax() const;

    double getGammaMaster() const;
    void setGammaMaster(const double &gamma_master);
    bool is_gamma_master_Set() const;
    bool is_gamma_master_Valid() const;
    double gammaMasterMin() const;
    double gammaMasterMax() const;

    double getGammaRed() const;
    void setGammaRed(const double &gamma_red);
    bool is_gamma_red_Set() const;
    bool is_gamma_red_Valid() const;
    double gammaRedMin() const;
    double gammaRedMax() const;

    double getGammaGreen() const;
    void setGammaGreen(const double &gamma_green);
    bool is_gamma_green_Set() const;
    bool is_gamma_green_Valid() const;
    double gammaGreenMin() const;
    double gammaGreenMax() const;

    double getGammaBlue() const;
    void setGammaBlue(const double &gamma_blue);
    bool is_gamma_blue_Set() const;
    bool is_gamma_blue_Valid() const;
    double gammaBlueMin() const;
    double gammaBlueMax() const;

    double getGainMaster() const;
    void setGainMaster(const double &gain_master);
    bool is_gain_master_Set() const;
    bool is_gain_master_Valid() const;
    double gainMasterMin() const;
    double gainMasterMax() const;

    double getGainRed() const;
    void setGainRed(const double &gain_red);
    bool is_gain_red_Set() const;
    bool is_gain_red_Valid() const;
    double gainRedMin() const;
    double gainRedMax() const;

    double getGainGreen() const;
    void setGainGreen(const double &gain_green);
    bool is_gain_green_Set() const;
    bool is_gain_green_Valid() const;
    double gainGreenMin() const;
    double gainGreenMax() const;

    double getGainBlue() const;
    void setGainBlue(const double &gain_blue);
    bool is_gain_blue_Set() const;
    bool is_gain_blue_Valid() const;
    double gainBlueMin() const;
    double gainBlueMax() const;

    double getSaturation() const;
    void setSaturation(const double &saturation);
    bool is_saturation_Set() const;
    bool is_saturation_Valid() const;
    double saturationMin() const;
    double saturationMax() const;

    double getExposure() const;
    void setExposure(const double &exposure);
    bool is_exposure_Set() const;
    bool is_exposure_Valid() const;
    double exposureMin() const;
    double exposureMax() const;

    double getColorTemp() const;
    void setColorTemp(const double &color_temp);
    bool is_color_temp_Set() const;
    bool is_color_temp_Valid() const;
    double colorTempMin() const;
    double colorTempMax() const;

    double getTint() const;
    void setTint(const double &tint);
    bool is_tint_Set() const;
    bool is_tint_Valid() const;
    double tintMin() const;
    double tintMax() const;

    double getPqOutputNitLevel() const;
    void setPqOutputNitLevel(const double &pq_output_nit_level);
    bool is_pq_output_nit_level_Set() const;
    bool is_pq_output_nit_level_Valid() const;
    double pqOutputNitLevelMin() const;
    double pqOutputNitLevelMax() const;

    bool isP3ColorspaceClamp() const;
    void setP3ColorspaceClamp(const bool &p3_colorspace_clamp);
    bool is_p3_colorspace_clamp_Set() const;
    bool is_p3_colorspace_clamp_Valid() const;

    double getBt2408Mode() const;
    void setBt2408Mode(const double &bt2408_mode);
    bool is_bt2408_mode_Set() const;
    bool is_bt2408_mode_Valid() const;
    double bt2408ModeMin() const;
    double bt2408ModeMax() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

    bool applyMinMaxConstraints();
private:
    void initializeModel();

    OAIColorfrontEngine m_engine;
    bool m_engine_isSet;
    bool m_engine_isValid;

    OAIColorfrontDynRangeGamutLiveModeIn m_in_dyn_range_gamut;
    bool m_in_dyn_range_gamut_isSet;
    bool m_in_dyn_range_gamut_isValid;

    OAIColorfrontDynRangeGamutLiveModeOut m_out_dyn_range_gamut;
    bool m_out_dyn_range_gamut_isSet;
    bool m_out_dyn_range_gamut_isValid;

    bool m_sdr_preview;
    bool m_sdr_preview_isSet;
    bool m_sdr_preview_isValid;

    double m_hdr_amount;
    bool m_hdr_amount_isSet;
    bool m_hdr_amount_isValid;

    double m_amb_light_comp;
    bool m_amb_light_comp_isSet;
    bool m_amb_light_comp_isValid;

    double m_hdr_log_look;
    bool m_hdr_log_look_isSet;
    bool m_hdr_log_look_isValid;

    double m_sdr_softness;
    bool m_sdr_softness_isSet;
    bool m_sdr_softness_isValid;

    double m_lift_master;
    bool m_lift_master_isSet;
    bool m_lift_master_isValid;

    double m_lift_red;
    bool m_lift_red_isSet;
    bool m_lift_red_isValid;

    double m_lift_green;
    bool m_lift_green_isSet;
    bool m_lift_green_isValid;

    double m_lift_blue;
    bool m_lift_blue_isSet;
    bool m_lift_blue_isValid;

    double m_gamma_master;
    bool m_gamma_master_isSet;
    bool m_gamma_master_isValid;

    double m_gamma_red;
    bool m_gamma_red_isSet;
    bool m_gamma_red_isValid;

    double m_gamma_green;
    bool m_gamma_green_isSet;
    bool m_gamma_green_isValid;

    double m_gamma_blue;
    bool m_gamma_blue_isSet;
    bool m_gamma_blue_isValid;

    double m_gain_master;
    bool m_gain_master_isSet;
    bool m_gain_master_isValid;

    double m_gain_red;
    bool m_gain_red_isSet;
    bool m_gain_red_isValid;

    double m_gain_green;
    bool m_gain_green_isSet;
    bool m_gain_green_isValid;

    double m_gain_blue;
    bool m_gain_blue_isSet;
    bool m_gain_blue_isValid;

    double m_saturation;
    bool m_saturation_isSet;
    bool m_saturation_isValid;

    double m_exposure;
    bool m_exposure_isSet;
    bool m_exposure_isValid;

    double m_color_temp;
    bool m_color_temp_isSet;
    bool m_color_temp_isValid;

    double m_tint;
    bool m_tint_isSet;
    bool m_tint_isValid;

    double m_pq_output_nit_level;
    bool m_pq_output_nit_level_isSet;
    bool m_pq_output_nit_level_isValid;

    bool m_p3_colorspace_clamp;
    bool m_p3_colorspace_clamp_isSet;
    bool m_p3_colorspace_clamp_isValid;

    double m_bt2408_mode;
    bool m_bt2408_mode_isSet;
    bool m_bt2408_mode_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIColorfrontLiveMode)

#endif // OAIColorfrontLiveMode_H
