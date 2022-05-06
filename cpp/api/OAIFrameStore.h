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
 * OAIFrameStore.h
 *
 * 
 */

#ifndef OAIFrameStore_H
#define OAIFrameStore_H

#include <QJsonObject>

#include "OAIRgbRange.h"
#include "OAIVideoConvertChoice.h"
#include "OAIVideoFormat.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIFrameStore : public OAIObject {
public:
    OAIFrameStore();
    OAIFrameStore(QString json);
    ~OAIFrameStore() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isEnabled() const;
    void setEnabled(const bool &enabled);
    bool is_enabled_Set() const;
    bool is_enabled_Valid() const;

    bool isDynamic() const;
    void setDynamic(const bool &dynamic);
    bool is_dynamic_Set() const;
    bool is_dynamic_Valid() const;

    QString getImageName() const;
    void setImageName(const QString &image_name);
    bool is_image_name_Set() const;
    bool is_image_name_Valid() const;

    bool isClipNameAppended() const;
    void setClipNameAppended(const bool &clip_name_appended);
    bool is_clip_name_appended_Set() const;
    bool is_clip_name_appended_Valid() const;

    bool isTimecodeAppended() const;
    void setTimecodeAppended(const bool &timecode_appended);
    bool is_timecode_appended_Set() const;
    bool is_timecode_appended_Valid() const;

    qint32 getLibraryEntry() const;
    void setLibraryEntry(const qint32 &library_entry);
    bool is_library_entry_Set() const;
    bool is_library_entry_Valid() const;

    OAIVideoFormat getFormat() const;
    void setFormat(const OAIVideoFormat &format);
    bool is_format_Set() const;
    bool is_format_Valid() const;

    OAIVideoConvertChoice getConvert() const;
    void setConvert(const OAIVideoConvertChoice &convert);
    bool is_convert_Set() const;
    bool is_convert_Valid() const;

    OAIRgbRange getRgbRange() const;
    void setRgbRange(const OAIRgbRange &rgb_range);
    bool is_rgb_range_Set() const;
    bool is_rgb_range_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

    virtual bool applyMinMaxConstraints();
private:
    void initializeModel();

    bool enabled;
    bool m_enabled_isSet;
    bool m_enabled_isValid;

    bool dynamic;
    bool m_dynamic_isSet;
    bool m_dynamic_isValid;

    QString image_name;
    bool m_image_name_isSet;
    bool m_image_name_isValid;

    bool clip_name_appended;
    bool m_clip_name_appended_isSet;
    bool m_clip_name_appended_isValid;

    bool timecode_appended;
    bool m_timecode_appended_isSet;
    bool m_timecode_appended_isValid;

    qint32 library_entry;
    bool m_library_entry_isSet;
    bool m_library_entry_isValid;

    OAIVideoFormat format;
    bool m_format_isSet;
    bool m_format_isValid;

    OAIVideoConvertChoice convert;
    bool m_convert_isSet;
    bool m_convert_isValid;

    OAIRgbRange rgb_range;
    bool m_rgb_range_isSet;
    bool m_rgb_range_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIFrameStore)

#endif // OAIFrameStore_H
