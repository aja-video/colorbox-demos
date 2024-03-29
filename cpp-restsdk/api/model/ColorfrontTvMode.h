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
 * ColorfrontTvMode.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ColorfrontTvMode_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ColorfrontTvMode_H_


#include "ModelBase.h"

#include "model/ColorfrontDynRangeGamutTvModeOut.h"
#include "model/ColorfrontDynRangeGamutTvModeIn.h"
#include "model/ColorfrontEngine.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ColorfrontTvMode
    : public ModelBase
{
public:
    ColorfrontTvMode();
    virtual ~ColorfrontTvMode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool applyMinMaxConstraints() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ColorfrontTvMode members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ColorfrontEngine> getEngine() const;
    bool engineIsSet() const;
    void unsetEngine();

    void setEngine(const std::shared_ptr<ColorfrontEngine>& value);


    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ColorfrontDynRangeGamutTvModeIn> getInDynRangeGamut() const;
    bool inDynRangeGamutIsSet() const;
    void unsetInDynRangeGamut();

    void setInDynRangeGamut(const std::shared_ptr<ColorfrontDynRangeGamutTvModeIn>& value);


    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ColorfrontDynRangeGamutTvModeOut> getOutDynRangeGamut() const;
    bool outDynRangeGamutIsSet() const;
    void unsetOutDynRangeGamut();

    void setOutDynRangeGamut(const std::shared_ptr<ColorfrontDynRangeGamutTvModeOut>& value);


    /// <summary>
    /// 
    /// </summary>
    double getBrightness() const;
    bool brightnessIsSet() const;
    void unsetBrightness();

    void setBrightness(double value);

    double brightnessMin() const;
    double brightnessMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getHighlight() const;
    bool highlightIsSet() const;
    void unsetHighlight();

    void setHighlight(double value);

    double highlightMin() const;
    double highlightMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getColorfulness() const;
    bool colorfulnessIsSet() const;
    void unsetColorfulness();

    void setColorfulness(double value);

    double colorfulnessMin() const;
    double colorfulnessMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getSuperHighlight() const;
    bool superHighlightIsSet() const;
    void unsetSuperHighlight();

    void setSuperHighlight(double value);

    double superHighlightMin() const;
    double superHighlightMax() const;

    /// <summary>
    /// 
    /// </summary>
    bool isRoundtrip() const;
    bool roundtripIsSet() const;
    void unsetRoundtrip();

    void setRoundtrip(bool value);


    /// <summary>
    /// 
    /// </summary>
    bool isClampToLegal() const;
    bool clampToLegalIsSet() const;
    void unsetClampToLegal();

    void setClampToLegal(bool value);


    /// <summary>
    /// 
    /// </summary>
    bool isColorCorrector() const;
    bool colorCorrectorIsSet() const;
    void unsetColorCorrector();

    void setColorCorrector(bool value);


    /// <summary>
    /// 
    /// </summary>
    double getLiftMaster() const;
    bool liftMasterIsSet() const;
    void unsetLiftMaster();

    void setLiftMaster(double value);

    double liftMasterMin() const;
    double liftMasterMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getLiftRed() const;
    bool liftRedIsSet() const;
    void unsetLiftRed();

    void setLiftRed(double value);

    double liftRedMin() const;
    double liftRedMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getLiftGreen() const;
    bool liftGreenIsSet() const;
    void unsetLiftGreen();

    void setLiftGreen(double value);

    double liftGreenMin() const;
    double liftGreenMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getLiftBlue() const;
    bool liftBlueIsSet() const;
    void unsetLiftBlue();

    void setLiftBlue(double value);

    double liftBlueMin() const;
    double liftBlueMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getGammaMaster() const;
    bool gammaMasterIsSet() const;
    void unsetGammaMaster();

    void setGammaMaster(double value);

    double gammaMasterMin() const;
    double gammaMasterMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getGammaRed() const;
    bool gammaRedIsSet() const;
    void unsetGammaRed();

    void setGammaRed(double value);

    double gammaRedMin() const;
    double gammaRedMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getGammaGreen() const;
    bool gammaGreenIsSet() const;
    void unsetGammaGreen();

    void setGammaGreen(double value);

    double gammaGreenMin() const;
    double gammaGreenMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getGammaBlue() const;
    bool gammaBlueIsSet() const;
    void unsetGammaBlue();

    void setGammaBlue(double value);

    double gammaBlueMin() const;
    double gammaBlueMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getGainMaster() const;
    bool gainMasterIsSet() const;
    void unsetGainMaster();

    void setGainMaster(double value);

    double gainMasterMin() const;
    double gainMasterMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getGainRed() const;
    bool gainRedIsSet() const;
    void unsetGainRed();

    void setGainRed(double value);

    double gainRedMin() const;
    double gainRedMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getGainGreen() const;
    bool gainGreenIsSet() const;
    void unsetGainGreen();

    void setGainGreen(double value);

    double gainGreenMin() const;
    double gainGreenMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getGainBlue() const;
    bool gainBlueIsSet() const;
    void unsetGainBlue();

    void setGainBlue(double value);

    double gainBlueMin() const;
    double gainBlueMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getSaturation() const;
    bool saturationIsSet() const;
    void unsetSaturation();

    void setSaturation(double value);

    double saturationMin() const;
    double saturationMax() const;

    /// <summary>
    /// 
    /// </summary>
    bool isCameraCorrection() const;
    bool cameraCorrectionIsSet() const;
    void unsetCameraCorrection();

    void setCameraCorrection(bool value);


    /// <summary>
    /// 
    /// </summary>
    double getExposure() const;
    bool exposureIsSet() const;
    void unsetExposure();

    void setExposure(double value);

    double exposureMin() const;
    double exposureMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getColorTemp() const;
    bool colorTempIsSet() const;
    void unsetColorTemp();

    void setColorTemp(double value);

    double colorTempMin() const;
    double colorTempMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getTint() const;
    bool tintIsSet() const;
    void unsetTint();

    void setTint(double value);

    double tintMin() const;
    double tintMax() const;


protected:
    std::shared_ptr<ColorfrontEngine> m_Engine;
    bool m_EngineIsSet;
    std::shared_ptr<ColorfrontDynRangeGamutTvModeIn> m_InDynRangeGamut;
    bool m_InDynRangeGamutIsSet;
    std::shared_ptr<ColorfrontDynRangeGamutTvModeOut> m_OutDynRangeGamut;
    bool m_OutDynRangeGamutIsSet;
    double m_Brightness;
    bool m_BrightnessIsSet;
    double m_Highlight;
    bool m_HighlightIsSet;
    double m_Colorfulness;
    bool m_ColorfulnessIsSet;
    double m_SuperHighlight;
    bool m_SuperHighlightIsSet;
    bool m_Roundtrip;
    bool m_RoundtripIsSet;
    bool m_ClampToLegal;
    bool m_ClampToLegalIsSet;
    bool m_ColorCorrector;
    bool m_ColorCorrectorIsSet;
    double m_LiftMaster;
    bool m_LiftMasterIsSet;
    double m_LiftRed;
    bool m_LiftRedIsSet;
    double m_LiftGreen;
    bool m_LiftGreenIsSet;
    double m_LiftBlue;
    bool m_LiftBlueIsSet;
    double m_GammaMaster;
    bool m_GammaMasterIsSet;
    double m_GammaRed;
    bool m_GammaRedIsSet;
    double m_GammaGreen;
    bool m_GammaGreenIsSet;
    double m_GammaBlue;
    bool m_GammaBlueIsSet;
    double m_GainMaster;
    bool m_GainMasterIsSet;
    double m_GainRed;
    bool m_GainRedIsSet;
    double m_GainGreen;
    bool m_GainGreenIsSet;
    double m_GainBlue;
    bool m_GainBlueIsSet;
    double m_Saturation;
    bool m_SaturationIsSet;
    bool m_CameraCorrection;
    bool m_CameraCorrectionIsSet;
    double m_Exposure;
    bool m_ExposureIsSet;
    double m_ColorTemp;
    bool m_ColorTempIsSet;
    double m_Tint;
    bool m_TintIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ColorfrontTvMode_H_ */
