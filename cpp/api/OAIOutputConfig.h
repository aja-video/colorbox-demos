/**
 * OpenAPI Soji
 * This is a REST API for the AJA Soji product.
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
 * OAIOutputConfig.h
 *
 * 
 */

#ifndef OAIOutputConfig_H
#define OAIOutputConfig_H

#include <QJsonObject>

#include "OAIBitDepth.h"
#include "OAIColorSpace.h"
#include "OAIColorimetry.h"
#include "OAIConnection.h"
#include "OAICrop4k2k.h"
#include "OAIRgbRange.h"
#include "OAIScanMode.h"
#include "OAISdiMode3g.h"
#include "OAITransfer.h"
#include "OAIVideoFormat.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIOutputConfig : public OAIObject {
public:
    OAIOutputConfig();
    OAIOutputConfig(QString json);
    ~OAIOutputConfig() override;

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

    OAISdiMode3g getSdiMode3g() const;
    void setSdiMode3g(const OAISdiMode3g &sdi_mode3g);
    bool is_sdi_mode3g_Set() const;
    bool is_sdi_mode3g_Valid() const;

    OAICrop4k2k getHdmiCrop4k2k() const;
    void setHdmiCrop4k2k(const OAICrop4k2k &hdmi_crop4k2k);
    bool is_hdmi_crop4k2k_Set() const;
    bool is_hdmi_crop4k2k_Valid() const;

    OAIConnection getHdmiConnection() const;
    void setHdmiConnection(const OAIConnection &hdmi_connection);
    bool is_hdmi_connection_Set() const;
    bool is_hdmi_connection_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

    virtual bool applyMinMaxConstraints();
private:
    void initializeModel();

    OAIColorSpace color_space;
    bool m_color_space_isSet;
    bool m_color_space_isValid;

    OAIRgbRange rgb_range;
    bool m_rgb_range_isSet;
    bool m_rgb_range_isValid;

    OAIBitDepth bit_depth;
    bool m_bit_depth_isSet;
    bool m_bit_depth_isValid;

    OAIScanMode scan_mode;
    bool m_scan_mode_isSet;
    bool m_scan_mode_isValid;

    OAIColorimetry colorimetry;
    bool m_colorimetry_isSet;
    bool m_colorimetry_isValid;

    OAITransfer transfer;
    bool m_transfer_isSet;
    bool m_transfer_isValid;

    OAIVideoFormat format;
    bool m_format_isSet;
    bool m_format_isValid;

    OAISdiMode3g sdi_mode3g;
    bool m_sdi_mode3g_isSet;
    bool m_sdi_mode3g_isValid;

    OAICrop4k2k hdmi_crop4k2k;
    bool m_hdmi_crop4k2k_isSet;
    bool m_hdmi_crop4k2k_isValid;

    OAIConnection hdmi_connection;
    bool m_hdmi_connection_isSet;
    bool m_hdmi_connection_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOutputConfig)

#endif // OAIOutputConfig_H