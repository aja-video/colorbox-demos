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
 * FrameStore.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_FrameStore_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_FrameStore_H_


#include "ModelBase.h"

#include "model/VideoConvertChoice.h"
#include "model/VideoFormat.h"
#include "model/FileTypeChoice.h"
#include "model/RgbRange.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  FrameStore
    : public ModelBase
{
public:
    FrameStore();
    virtual ~FrameStore();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool applyMinMaxConstraints() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FrameStore members

    /// <summary>
    /// true if frame store is enabled else disabled
    /// </summary>
    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetEnabled();

    void setEnabled(bool value);


    /// <summary>
    /// true if frame store can be dynamically adjusted
    /// </summary>
    bool isDynamic() const;
    bool dynamicIsSet() const;
    void unsetDynamic();

    void setDynamic(bool value);


    /// <summary>
    /// The custom name for the captured image
    /// </summary>
    utility::string_t getImageName() const;
    bool imageNameIsSet() const;
    void unsetImageName();

    void setImageName(const utility::string_t& value);


    /// <summary>
    /// Flag to append the timecode of the captured image onto the filename
    /// </summary>
    bool isTimecodeAppended() const;
    bool timecodeAppendedIsSet() const;
    void unsetTimecodeAppended();

    void setTimecodeAppended(bool value);


    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<FileTypeChoice> getFileType() const;
    bool fileTypeIsSet() const;
    void unsetFileType();

    void setFileType(const std::shared_ptr<FileTypeChoice>& value);


    /// <summary>
    /// library entry number, zero is black
    /// </summary>
    int32_t getLibraryEntry() const;
    bool libraryEntryIsSet() const;
    void unsetLibraryEntry();

    void setLibraryEntry(int32_t value);


    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<VideoFormat> getFormat() const;
    bool formatIsSet() const;
    void unsetFormat();

    void setFormat(const std::shared_ptr<VideoFormat>& value);


    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<VideoConvertChoice> getConvert() const;
    bool convertIsSet() const;
    void unsetConvert();

    void setConvert(const std::shared_ptr<VideoConvertChoice>& value);


    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RgbRange> getRgbRange() const;
    bool rgbRangeIsSet() const;
    void unsetRgbRange();

    void setRgbRange(const std::shared_ptr<RgbRange>& value);



protected:
    bool m_Enabled;
    bool m_EnabledIsSet;
    bool m_Dynamic;
    bool m_DynamicIsSet;
    utility::string_t m_ImageName;
    bool m_ImageNameIsSet;
    bool m_TimecodeAppended;
    bool m_TimecodeAppendedIsSet;
    std::shared_ptr<FileTypeChoice> m_FileType;
    bool m_FileTypeIsSet;
    int32_t m_LibraryEntry;
    bool m_LibraryEntryIsSet;
    std::shared_ptr<VideoFormat> m_Format;
    bool m_FormatIsSet;
    std::shared_ptr<VideoConvertChoice> m_Convert;
    bool m_ConvertIsSet;
    std::shared_ptr<RgbRange> m_RgbRange;
    bool m_RgbRangeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_FrameStore_H_ */
