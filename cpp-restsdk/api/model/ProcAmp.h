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
 * ProcAmp.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ProcAmp_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ProcAmp_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ProcAmp
    : public ModelBase
{
public:
    ProcAmp();
    virtual ~ProcAmp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool applyMinMaxConstraints() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ProcAmp members

    /// <summary>
    /// 
    /// </summary>
    double getBlack() const;
    bool blackIsSet() const;
    void unsetBlack();

    void setBlack(double value);

    double blackMin() const;
    double blackMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getGain() const;
    bool gainIsSet() const;
    void unsetGain();

    void setGain(double value);

    double gainMin() const;
    double gainMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getHue() const;
    bool hueIsSet() const;
    void unsetHue();

    void setHue(double value);

    double hueMin() const;
    double hueMax() const;

    /// <summary>
    /// 
    /// </summary>
    double getSat() const;
    bool satIsSet() const;
    void unsetSat();

    void setSat(double value);

    double satMin() const;
    double satMax() const;

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUnitsBlack() const;
    bool unitsBlackIsSet() const;
    void unsetUnitsBlack();

    void setUnitsBlack(const utility::string_t& value);


    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUnitsGain() const;
    bool unitsGainIsSet() const;
    void unsetUnitsGain();

    void setUnitsGain(const utility::string_t& value);


    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUnitsHue() const;
    bool unitsHueIsSet() const;
    void unsetUnitsHue();

    void setUnitsHue(const utility::string_t& value);


    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUnitsSat() const;
    bool unitsSatIsSet() const;
    void unsetUnitsSat();

    void setUnitsSat(const utility::string_t& value);



protected:
    double m_Black;
    bool m_BlackIsSet;
    double m_Gain;
    bool m_GainIsSet;
    double m_Hue;
    bool m_HueIsSet;
    double m_Sat;
    bool m_SatIsSet;
    utility::string_t m_UnitsBlack;
    bool m_UnitsBlackIsSet;
    utility::string_t m_UnitsGain;
    bool m_UnitsGainIsSet;
    utility::string_t m_UnitsHue;
    bool m_UnitsHueIsSet;
    utility::string_t m_UnitsSat;
    bool m_UnitsSatIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ProcAmp_H_ */
