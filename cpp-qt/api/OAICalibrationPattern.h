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
 * OAICalibrationPattern.h
 *
 * Holds the information for a calibration pattern patch
 */

#ifndef OAICalibrationPattern_H
#define OAICalibrationPattern_H

#include <QJsonObject>

#include "OAIPatternColor.h"
#include "OAIPatternRect.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICalibrationPattern : public OAIObject {
public:
    OAICalibrationPattern();
    OAICalibrationPattern(QString json);
    ~OAICalibrationPattern() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIPatternColor getBgColor() const;
    void setBgColor(const OAIPatternColor &bg_color);
    bool is_bg_color_Set() const;
    bool is_bg_color_Valid() const;

    OAIPatternColor getFgColor() const;
    void setFgColor(const OAIPatternColor &fg_color);
    bool is_fg_color_Set() const;
    bool is_fg_color_Valid() const;

    OAIPatternRect getFgRect() const;
    void setFgRect(const OAIPatternRect &fg_rect);
    bool is_fg_rect_Set() const;
    bool is_fg_rect_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

    bool applyMinMaxConstraints();
private:
    void initializeModel();

    OAIPatternColor m_bg_color;
    bool m_bg_color_isSet;
    bool m_bg_color_isValid;

    OAIPatternColor m_fg_color;
    bool m_fg_color_isSet;
    bool m_fg_color_isValid;

    OAIPatternRect m_fg_rect;
    bool m_fg_rect_isSet;
    bool m_fg_rect_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICalibrationPattern)

#endif // OAICalibrationPattern_H