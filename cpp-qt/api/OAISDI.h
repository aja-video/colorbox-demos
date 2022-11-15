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
 * Copyright (C) 2020-2022 AJA Video Systems, Inc.  All rights reserved.
 */

/*
 * OAISDI.h
 *
 * 
 */

#ifndef OAISDI_H
#define OAISDI_H

#include <QJsonObject>

#include "OAIBitDepth.h"
#include "OAIColorSpace.h"
#include "OAIColorimetry.h"
#include "OAIRgbRange.h"
#include "OAIScanMode.h"
#include "OAISdiMode3g.h"
#include "OAITransfer.h"
#include "OAIVideoFormat.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAISDI : public OAIObject {
public:
    OAISDI();
    OAISDI(QString json);
    ~OAISDI() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIColorSpace getColorSpace() const;
    void setColorSpace(const OAIColorSpace &color_space);
    bool is_color_space_Set() const;
    bool is_color_space_Valid() const;

    OAIRgbRange getRgbRange() const;
    void setRgbRange(const OAIRgbRange &rgb_range);
    bool is_rgb_range_Set() const;
    bool is_rgb_range_Valid() const;

    OAIBitDepth getBitDepth() const;
    void setBitDepth(const OAIBitDepth &bit_depth);
    bool is_bit_depth_Set() const;
    bool is_bit_depth_Valid() const;

    OAIScanMode getScanMode() const;
    void setScanMode(const OAIScanMode &scan_mode);
    bool is_scan_mode_Set() const;
    bool is_scan_mode_Valid() const;

    OAISdiMode3g getSdiMode3g() const;
    void setSdiMode3g(const OAISdiMode3g &sdi_mode3g);
    bool is_sdi_mode3g_Set() const;
    bool is_sdi_mode3g_Valid() const;

    OAIColorimetry getColorimetry() const;
    void setColorimetry(const OAIColorimetry &colorimetry);
    bool is_colorimetry_Set() const;
    bool is_colorimetry_Valid() const;

    OAITransfer getTransfer() const;
    void setTransfer(const OAITransfer &transfer);
    bool is_transfer_Set() const;
    bool is_transfer_Valid() const;

    OAIVideoFormat getFormat() const;
    void setFormat(const OAIVideoFormat &format);
    bool is_format_Set() const;
    bool is_format_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

    bool applyMinMaxConstraints();
private:
    void initializeModel();

    OAIColorSpace m_color_space;
    bool m_color_space_isSet;
    bool m_color_space_isValid;

    OAIRgbRange m_rgb_range;
    bool m_rgb_range_isSet;
    bool m_rgb_range_isValid;

    OAIBitDepth m_bit_depth;
    bool m_bit_depth_isSet;
    bool m_bit_depth_isValid;

    OAIScanMode m_scan_mode;
    bool m_scan_mode_isSet;
    bool m_scan_mode_isValid;

    OAISdiMode3g m_sdi_mode3g;
    bool m_sdi_mode3g_isSet;
    bool m_sdi_mode3g_isValid;

    OAIColorimetry m_colorimetry;
    bool m_colorimetry_isSet;
    bool m_colorimetry_isValid;

    OAITransfer m_transfer;
    bool m_transfer_isSet;
    bool m_transfer_isValid;

    OAIVideoFormat m_format;
    bool m_format_isSet;
    bool m_format_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISDI)

#endif // OAISDI_H