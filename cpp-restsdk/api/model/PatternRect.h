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
 * PatternRect.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_PatternRect_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_PatternRect_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  PatternRect
    : public ModelBase
{
public:
    PatternRect();
    virtual ~PatternRect();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool applyMinMaxConstraints() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PatternRect members

    /// <summary>
    /// The x start point in for the rect, normalized to 0.0 - 1.0
    /// </summary>
    double getXstart() const;
    bool xstartIsSet() const;
    void unsetXstart();

    void setXstart(double value);

    double xstartMin() const;
    double xstartMax() const;

    /// <summary>
    /// The y start point in for the rect, normalized to 0.0 - 1.0
    /// </summary>
    double getYstart() const;
    bool ystartIsSet() const;
    void unsetYstart();

    void setYstart(double value);

    double ystartMin() const;
    double ystartMax() const;

    /// <summary>
    /// The width of the rect, normalized to 0.0 - 1.0
    /// </summary>
    double getWidth() const;
    bool widthIsSet() const;
    void unsetWidth();

    void setWidth(double value);

    double widthMin() const;
    double widthMax() const;

    /// <summary>
    /// The height of the rect, normalized to 0.0 - 1.0
    /// </summary>
    double getHeight() const;
    bool heightIsSet() const;
    void unsetHeight();

    void setHeight(double value);

    double heightMin() const;
    double heightMax() const;


protected:
    double m_Xstart;
    bool m_XstartIsSet;
    double m_Ystart;
    bool m_YstartIsSet;
    double m_Width;
    bool m_WidthIsSet;
    double m_Height;
    bool m_HeightIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_PatternRect_H_ */
