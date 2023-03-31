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
 * CalibrationPattern.h
 *
 * Holds the information for a calibration pattern patch
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CalibrationPattern_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CalibrationPattern_H_


#include "ModelBase.h"

#include "model/PatternRect.h"
#include "model/PatternColor.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Holds the information for a calibration pattern patch
/// </summary>
class  CalibrationPattern
    : public ModelBase
{
public:
    CalibrationPattern();
    virtual ~CalibrationPattern();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool applyMinMaxConstraints() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CalibrationPattern members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PatternColor> getBgColor() const;
    bool bgColorIsSet() const;
    void unsetBgColor();

    void setBgColor(const std::shared_ptr<PatternColor>& value);


    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PatternColor> getFgColor() const;
    bool fgColorIsSet() const;
    void unsetFgColor();

    void setFgColor(const std::shared_ptr<PatternColor>& value);


    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PatternRect> getFgRect() const;
    bool fgRectIsSet() const;
    void unsetFgRect();

    void setFgRect(const std::shared_ptr<PatternRect>& value);


    /// <summary>
    /// For internal use only
    /// </summary>
    utility::string_t getStamp() const;
    bool stampIsSet() const;
    void unsetStamp();

    void setStamp(const utility::string_t& value);



protected:
    std::shared_ptr<PatternColor> m_BgColor;
    bool m_BgColorIsSet;
    std::shared_ptr<PatternColor> m_FgColor;
    bool m_FgColorIsSet;
    std::shared_ptr<PatternRect> m_FgRect;
    bool m_FgRectIsSet;
    utility::string_t m_Stamp;
    bool m_StampIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CalibrationPattern_H_ */
