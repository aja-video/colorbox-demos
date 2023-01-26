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
 * DefaultApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_DefaultApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_DefaultApi_H_



#include "ApiClient.h"

#include "model/AncCaptureFilter.h"
#include "model/BbcConfig.h"
#include "model/CalibrationPattern.h"
#include "model/ColorfrontConfig.h"
#include "model/FrameStore.h"
#include "HttpContent.h"
#include "model/LibraryControl.h"
#include "model/LibraryEntry.h"
#include "model/NbcConfig.h"
#include "model/NetConfig.h"
#include "model/NetDevice.h"
#include "model/NetParams.h"
#include "model/NetStatus.h"
#include "model/OrionConfig.h"
#include "model/OutputConfig.h"
#include "model/Overlay.h"
#include "model/PipelineStages.h"
#include "model/Preview.h"
#include "model/Routing.h"
#include "model/SDI.h"
#include "model/Status.h"
#include "model/SystemConfig.h"
#include "model/SystemDiscover.h"
#include "model/SystemPassword.h"
#include "model/SystemPasswordResponse.h"
#include "model/SystemStatus.h"
#include "model/WiFiDeviceConfig.h"
#include "model/WiFiDeviceStatus.h"
#include <vector>
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  DefaultApi 
{
public:

    explicit DefaultApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~DefaultApi();

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get the 1d LUT Library array
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<LibraryEntry>>> get1dLutLibrary(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get the 3d LUT Library array
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<LibraryEntry>>> get3dLutLibrary(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Return an object with active params for network interface at devIdx
    /// </remarks>
    /// <param name="devIdx"></param>
    pplx::task<std::shared_ptr<NetParams>> getActiveParamsForGivenNetDeviceIndex(
        int32_t devIdx
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Return an array of all the NetDevice objects.
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<NetDevice>>> getAllNetDevices(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Return the complete status object
    /// </remarks>
    pplx::task<std::shared_ptr<Status>> getAllStatus(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Return an array of objects with the discovered devices
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<SystemDiscover>>> getAllSystemDiscovers(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Return the acn capture filter object
    /// </remarks>
    pplx::task<std::shared_ptr<AncCaptureFilter>> getAncCaptureFilter(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get the BbcConfig object
    /// </remarks>
    pplx::task<std::shared_ptr<BbcConfig>> getBbcConfig(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Return the calibration pattern object
    /// </remarks>
    pplx::task<std::shared_ptr<CalibrationPattern>> getCalibrationPattern(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get the ColorfrontConfig object
    /// </remarks>
    pplx::task<std::shared_ptr<ColorfrontConfig>> getColorfrontConfig(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Return an object with config for network interface at devIdx
    /// </remarks>
    /// <param name="devIdx"></param>
    pplx::task<std::shared_ptr<NetConfig>> getConfigForGivenNetDeviceIndex(
        int32_t devIdx
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get the frame store configuration
    /// </remarks>
    pplx::task<std::shared_ptr<FrameStore>> getFrameStore(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get the image Library array
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<LibraryEntry>>> getImageLibrary(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get the library control object
    /// </remarks>
    pplx::task<std::shared_ptr<LibraryControl>> getLibraryControl(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get the matrix Library array
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<LibraryEntry>>> getMatrixLibrary(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get the NbcConfig object
    /// </remarks>
    pplx::task<std::shared_ptr<NbcConfig>> getNbcConfig(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get the OrionConfig object
    /// </remarks>
    pplx::task<std::shared_ptr<OrionConfig>> getOrionConfig(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get the SDI/HDMI output config
    /// </remarks>
    pplx::task<std::shared_ptr<OutputConfig>> getOutputConfig(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get the SDI/HDMI output status
    /// </remarks>
    pplx::task<std::shared_ptr<OutputConfig>> getOutputStatus(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get the overlay configuration
    /// </remarks>
    pplx::task<std::shared_ptr<Overlay>> getOverlay(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get the stages object
    /// </remarks>
    pplx::task<std::shared_ptr<PipelineStages>> getPipelineStages(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Return a preview image
    /// </remarks>
    pplx::task<std::shared_ptr<Preview>> getPreviewImage(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get the routing object
    /// </remarks>
    pplx::task<std::shared_ptr<Routing>> getRouting(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get the SDI input config
    /// </remarks>
    pplx::task<std::shared_ptr<SDI>> getSdiInputConfig(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get the SDI input status
    /// </remarks>
    pplx::task<std::shared_ptr<SDI>> getSdiInputStatus(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Return an object with staged params for network interface at devIdx
    /// </remarks>
    /// <param name="devIdx"></param>
    pplx::task<std::shared_ptr<NetParams>> getStagedParamsForGivenNetDeviceIndex(
        int32_t devIdx
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Return an object with status for network interface at devIdx
    /// </remarks>
    /// <param name="devIdx"></param>
    pplx::task<std::shared_ptr<NetStatus>> getStatusForGivenNetDeviceIndex(
        int32_t devIdx
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Return an object with the system configuration
    /// </remarks>
    pplx::task<std::shared_ptr<SystemConfig>> getSystemConfig(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get the System Preset Library array
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<LibraryEntry>>> getSystemPresetLibrary(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Return an object with the system status
    /// </remarks>
    pplx::task<std::shared_ptr<SystemStatus>> getSystemStatus(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Return the complete wifi config object
    /// </remarks>
    pplx::task<std::shared_ptr<WiFiDeviceConfig>> getWiFiConfig(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Return the complete wifi status object
    /// </remarks>
    pplx::task<std::shared_ptr<WiFiDeviceStatus>> getWiFiStatus(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Set the active params for network interface at devIdx
    /// </remarks>
    /// <param name="devIdx"></param>
    /// <param name="netParams">Net Device params object</param>
    pplx::task<void> setActiveParamsForGivenNetDeviceIndex(
        int32_t devIdx,
        std::shared_ptr<NetParams> netParams
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Modify the status object
    /// </remarks>
    /// <param name="status">Status object</param>
    pplx::task<void> setAllStatus(
        std::shared_ptr<Status> status
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Modify the array of discovered devices
    /// </remarks>
    /// <param name="systemDiscover">Array of system discover objects</param>
    pplx::task<void> setAllSystemDiscovers(
        std::vector<std::shared_ptr<SystemDiscover>> systemDiscover
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Modify the anc capture filter object
    /// </remarks>
    /// <param name="ancCaptureFilter">AncCaptureFilter object</param>
    pplx::task<void> setAncCaptureFilter(
        std::shared_ptr<AncCaptureFilter> ancCaptureFilter
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Modify the BbcConfig object
    /// </remarks>
    /// <param name="bbcConfig">BbcConfig object</param>
    pplx::task<void> setBbcConfig(
        std::shared_ptr<BbcConfig> bbcConfig
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Modify the calibration pattern object
    /// </remarks>
    /// <param name="calibrationPattern">CalibrationPattern object</param>
    pplx::task<void> setCalibrationPattern(
        std::shared_ptr<CalibrationPattern> calibrationPattern
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Modify the ColorfrontConfig object
    /// </remarks>
    /// <param name="colorfrontConfig">ColorfrontConfig object</param>
    pplx::task<void> setColorfrontConfig(
        std::shared_ptr<ColorfrontConfig> colorfrontConfig
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Set the config for network interface at devIdx
    /// </remarks>
    /// <param name="devIdx"></param>
    /// <param name="netConfig">Net Device config object</param>
    pplx::task<void> setConfigForGivenNetDeviceIndex(
        int32_t devIdx,
        std::shared_ptr<NetConfig> netConfig
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Set the frame store config
    /// </remarks>
    /// <param name="frameStore">FrameStore object</param>
    pplx::task<void> setFrameStore(
        std::shared_ptr<FrameStore> frameStore
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Perform actions on Library entries
    /// </remarks>
    /// <param name="libraryControl">LibraryControl object</param>
    pplx::task<void> setLibraryControl(
        std::shared_ptr<LibraryControl> libraryControl
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Request a license request file to be generated
    /// </remarks>
    pplx::task<void> setLicenseGenerationRequest(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Modify the NbcConfig object
    /// </remarks>
    /// <param name="nbcConfig">NbcConfig object</param>
    pplx::task<void> setNbcConfig(
        std::shared_ptr<NbcConfig> nbcConfig
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Modify the OrionConfig object
    /// </remarks>
    /// <param name="orionConfig">OrionConfig object</param>
    pplx::task<void> setOrionConfig(
        std::shared_ptr<OrionConfig> orionConfig
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Set the SDI/HDMI output config
    /// </remarks>
    /// <param name="outputConfig">OutputConfig object</param>
    pplx::task<void> setOutputConfig(
        std::shared_ptr<OutputConfig> outputConfig
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Set the SDI/HDMI output status
    /// </remarks>
    /// <param name="outputConfig">OutputConfig object</param>
    pplx::task<void> setOutputStatus(
        std::shared_ptr<OutputConfig> outputConfig
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Set the overlay configuration
    /// </remarks>
    /// <param name="overlay">Overlay object</param>
    pplx::task<void> setOverlay(
        std::shared_ptr<Overlay> overlay
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Modify the stages object
    /// </remarks>
    /// <param name="pipelineStages">Stages object</param>
    pplx::task<void> setPipelineStages(
        std::shared_ptr<PipelineStages> pipelineStages
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Set the preview image
    /// </remarks>
    /// <param name="preview">base 64 JPEG encoded image (optional)</param>
    pplx::task<void> setPreviewImage(
        boost::optional<std::shared_ptr<Preview>> preview
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Modify the routing object
    /// </remarks>
    /// <param name="routing">Routing object</param>
    pplx::task<void> setRouting(
        std::shared_ptr<Routing> routing
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Set the SDI input config
    /// </remarks>
    /// <param name="sDI">SDI object</param>
    pplx::task<void> setSdiInputConfig(
        std::shared_ptr<SDI> sDI
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Set the SDI input status
    /// </remarks>
    /// <param name="sDI">SDI object</param>
    pplx::task<void> setSdiInputStatus(
        std::shared_ptr<SDI> sDI
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Set the staged params for network interface at devIdx
    /// </remarks>
    /// <param name="devIdx"></param>
    /// <param name="netParams">Net Device params object</param>
    pplx::task<void> setStagedParamsForGivenNetDeviceIndex(
        int32_t devIdx,
        std::shared_ptr<NetParams> netParams
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Set the status for network interface at devIdx
    /// </remarks>
    /// <param name="devIdx"></param>
    /// <param name="netStatus">Net Device status object</param>
    pplx::task<void> setStatusForGivenNetDeviceIndex(
        int32_t devIdx,
        std::shared_ptr<NetStatus> netStatus
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Modify the system configuration
    /// </remarks>
    /// <param name="systemConfig">System config object</param>
    pplx::task<void> setSystemConfig(
        std::shared_ptr<SystemConfig> systemConfig
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Update the system password
    /// </remarks>
    /// <param name="systemPassword">System password object</param>
    pplx::task<std::shared_ptr<SystemPasswordResponse>> setSystemPassword(
        std::shared_ptr<SystemPassword> systemPassword
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Modify the system status
    /// </remarks>
    /// <param name="systemStatus">System status object</param>
    pplx::task<void> setSystemStatus(
        std::shared_ptr<SystemStatus> systemStatus
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Modify the wifi config object
    /// </remarks>
    /// <param name="wiFiDeviceConfig">WiFi Config object</param>
    pplx::task<void> setWiFiConfig(
        std::shared_ptr<WiFiDeviceConfig> wiFiDeviceConfig
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Modify the wifi status object
    /// </remarks>
    /// <param name="wiFiDeviceStatus">WiFi Status object</param>
    pplx::task<void> setWiFiStatus(
        std::shared_ptr<WiFiDeviceStatus> wiFiDeviceStatus
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Upload a file
    /// </remarks>
    /// <param name="file"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="kind">The kind of file being uploaded valid kinds are: **lut_1d**, **lut_3d**, **matrix**, **image**, **preset**, **license**, **update** (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="entry">The entry number to upload the file to, **not** used with kinds: **license** and **update** (optional, default to 0)</param>
    pplx::task<void> uploadFile(
        boost::optional<std::shared_ptr<HttpContent>> file,
        boost::optional<utility::string_t> kind,
        boost::optional<int32_t> entry
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_DefaultApi_H_ */

