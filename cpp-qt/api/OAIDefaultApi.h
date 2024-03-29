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

#ifndef OAI_OAIDefaultApi_H
#define OAI_OAIDefaultApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"


#include "OAIAncCaptureFilter.h"
#include "OAIBbcConfig.h"
#include "OAICalibrationPattern.h"
#include "OAIColorfrontConfig.h"
#include "OAIFrameStore.h"
#include "OAIHttpFileElement.h"
#include "OAILibraryControl.h"
#include "OAILibraryEntry.h"
#include "OAINbcConfig.h"
#include "OAINetConfig.h"
#include "OAINetDevice.h"
#include "OAINetParams.h"
#include "OAINetStatus.h"
#include "OAIOrionConfig.h"
#include "OAIOutputConfig.h"
#include "OAIOverlay.h"
#include "OAIPipelineStages.h"
#include "OAIPreview.h"
#include "OAIRouting.h"
#include "OAISDI.h"
#include "OAIStatus.h"
#include "OAISystemConfig.h"
#include "OAISystemDiscover.h"
#include "OAISystemPassword.h"
#include "OAISystemPasswordResponse.h"
#include "OAISystemStatus.h"
#include "OAIWiFiDeviceConfig.h"
#include "OAIWiFiDeviceStatus.h"
#include <QList>
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIDefaultApi : public QObject {
    Q_OBJECT

public:
    OAIDefaultApi(const int timeOut = 0);
    ~OAIDefaultApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void useBasicAuth(const QString &username = "", const QString &password = "");
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables = QMap<QString, OAIServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);


    void get1dLutLibrary();


    void get3dLutLibrary();

    /**
    * @param[in]  dev_idx qint32 [required]
    */
    void getActiveParamsForGivenNetDeviceIndex(const qint32 &dev_idx);


    void getAllNetDevices();


    void getAllStatus();


    void getAllSystemDiscovers();


    void getAncCaptureFilter();


    void getBbcConfig();


    void getCalibrationPattern();


    void getColorfrontConfig();

    /**
    * @param[in]  dev_idx qint32 [required]
    */
    void getConfigForGivenNetDeviceIndex(const qint32 &dev_idx);


    void getFrameStore();


    void getImageLibrary();


    void getLibraryControl();


    void getMatrixLibrary();


    void getNbcConfig();


    void getOrionConfig();


    void getOrionPresetLibrary();


    void getOutputConfig();


    void getOutputStatus();


    void getOverlay();


    void getOverlayLibrary();


    void getPipelineStages();


    void getPreviewImage();


    void getRouting();


    void getSdiInputConfig();


    void getSdiInputStatus();

    /**
    * @param[in]  dev_idx qint32 [required]
    */
    void getStagedParamsForGivenNetDeviceIndex(const qint32 &dev_idx);

    /**
    * @param[in]  dev_idx qint32 [required]
    */
    void getStatusForGivenNetDeviceIndex(const qint32 &dev_idx);


    void getSystemConfig();


    void getSystemPresetLibrary();


    void getSystemStatus();


    void getWiFiConfig();


    void getWiFiStatus();

    /**
    * @param[in]  dev_idx qint32 [required]
    * @param[in]  oai_net_params OAINetParams [required]
    */
    void setActiveParamsForGivenNetDeviceIndex(const qint32 &dev_idx, const OAINetParams &oai_net_params);

    /**
    * @param[in]  oai_status OAIStatus [required]
    */
    void setAllStatus(const OAIStatus &oai_status);

    /**
    * @param[in]  oai_system_discover QList<OAISystemDiscover> [required]
    */
    void setAllSystemDiscovers(const QList<OAISystemDiscover> &oai_system_discover);

    /**
    * @param[in]  oai_anc_capture_filter OAIAncCaptureFilter [required]
    */
    void setAncCaptureFilter(const OAIAncCaptureFilter &oai_anc_capture_filter);

    /**
    * @param[in]  oai_bbc_config OAIBbcConfig [required]
    */
    void setBbcConfig(const OAIBbcConfig &oai_bbc_config);

    /**
    * @param[in]  oai_calibration_pattern OAICalibrationPattern [required]
    */
    void setCalibrationPattern(const OAICalibrationPattern &oai_calibration_pattern);

    /**
    * @param[in]  oai_colorfront_config OAIColorfrontConfig [required]
    */
    void setColorfrontConfig(const OAIColorfrontConfig &oai_colorfront_config);

    /**
    * @param[in]  dev_idx qint32 [required]
    * @param[in]  oai_net_config OAINetConfig [required]
    */
    void setConfigForGivenNetDeviceIndex(const qint32 &dev_idx, const OAINetConfig &oai_net_config);

    /**
    * @param[in]  oai_frame_store OAIFrameStore [required]
    */
    void setFrameStore(const OAIFrameStore &oai_frame_store);

    /**
    * @param[in]  oai_library_control OAILibraryControl [required]
    */
    void setLibraryControl(const OAILibraryControl &oai_library_control);


    void setLicenseGenerationRequest();

    /**
    * @param[in]  oai_nbc_config OAINbcConfig [required]
    */
    void setNbcConfig(const OAINbcConfig &oai_nbc_config);

    /**
    * @param[in]  oai_orion_config OAIOrionConfig [required]
    */
    void setOrionConfig(const OAIOrionConfig &oai_orion_config);

    /**
    * @param[in]  oai_output_config OAIOutputConfig [required]
    */
    void setOutputConfig(const OAIOutputConfig &oai_output_config);

    /**
    * @param[in]  oai_output_config OAIOutputConfig [required]
    */
    void setOutputStatus(const OAIOutputConfig &oai_output_config);

    /**
    * @param[in]  oai_overlay OAIOverlay [required]
    */
    void setOverlay(const OAIOverlay &oai_overlay);

    /**
    * @param[in]  oai_pipeline_stages OAIPipelineStages [required]
    */
    void setPipelineStages(const OAIPipelineStages &oai_pipeline_stages);

    /**
    * @param[in]  oai_preview OAIPreview [optional]
    */
    void setPreviewImage(const ::OpenAPI::OptionalParam<OAIPreview> &oai_preview = ::OpenAPI::OptionalParam<OAIPreview>());

    /**
    * @param[in]  oai_routing OAIRouting [required]
    */
    void setRouting(const OAIRouting &oai_routing);

    /**
    * @param[in]  oaisdi OAISDI [required]
    */
    void setSdiInputConfig(const OAISDI &oaisdi);

    /**
    * @param[in]  oaisdi OAISDI [required]
    */
    void setSdiInputStatus(const OAISDI &oaisdi);

    /**
    * @param[in]  dev_idx qint32 [required]
    * @param[in]  oai_net_params OAINetParams [required]
    */
    void setStagedParamsForGivenNetDeviceIndex(const qint32 &dev_idx, const OAINetParams &oai_net_params);

    /**
    * @param[in]  dev_idx qint32 [required]
    * @param[in]  oai_net_status OAINetStatus [required]
    */
    void setStatusForGivenNetDeviceIndex(const qint32 &dev_idx, const OAINetStatus &oai_net_status);

    /**
    * @param[in]  oai_system_config OAISystemConfig [required]
    */
    void setSystemConfig(const OAISystemConfig &oai_system_config);

    /**
    * @param[in]  oai_system_password OAISystemPassword [required]
    */
    void setSystemPassword(const OAISystemPassword &oai_system_password);

    /**
    * @param[in]  oai_system_status OAISystemStatus [required]
    */
    void setSystemStatus(const OAISystemStatus &oai_system_status);

    /**
    * @param[in]  oaiwi_fi_device_config OAIWiFiDeviceConfig [required]
    */
    void setWiFiConfig(const OAIWiFiDeviceConfig &oaiwi_fi_device_config);

    /**
    * @param[in]  oaiwi_fi_device_status OAIWiFiDeviceStatus [required]
    */
    void setWiFiStatus(const OAIWiFiDeviceStatus &oaiwi_fi_device_status);

    /**
    * @param[in]  file OAIHttpFileElement [optional]
    * @param[in]  kind QString [optional]
    * @param[in]  entry qint32 [optional]
    */
    void uploadFile(const ::OpenAPI::OptionalParam<OAIHttpFileElement> &file = ::OpenAPI::OptionalParam<OAIHttpFileElement>(), const ::OpenAPI::OptionalParam<QString> &kind = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &entry = ::OpenAPI::OptionalParam<qint32>());


    void setUrlForServers(const QString &host, int port = -1, const QString &protocol = "http", const QString &endPoint = "/v2");

private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    OAIHttpRequestInput _latestInput;
    OAIHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    
    

    void get1dLutLibraryCallback(OAIHttpRequestWorker *worker);
    void get3dLutLibraryCallback(OAIHttpRequestWorker *worker);
    void getActiveParamsForGivenNetDeviceIndexCallback(OAIHttpRequestWorker *worker);
    void getAllNetDevicesCallback(OAIHttpRequestWorker *worker);
    void getAllStatusCallback(OAIHttpRequestWorker *worker);
    void getAllSystemDiscoversCallback(OAIHttpRequestWorker *worker);
    void getAncCaptureFilterCallback(OAIHttpRequestWorker *worker);
    void getBbcConfigCallback(OAIHttpRequestWorker *worker);
    void getCalibrationPatternCallback(OAIHttpRequestWorker *worker);
    void getColorfrontConfigCallback(OAIHttpRequestWorker *worker);
    void getConfigForGivenNetDeviceIndexCallback(OAIHttpRequestWorker *worker);
    void getFrameStoreCallback(OAIHttpRequestWorker *worker);
    void getImageLibraryCallback(OAIHttpRequestWorker *worker);
    void getLibraryControlCallback(OAIHttpRequestWorker *worker);
    void getMatrixLibraryCallback(OAIHttpRequestWorker *worker);
    void getNbcConfigCallback(OAIHttpRequestWorker *worker);
    void getOrionConfigCallback(OAIHttpRequestWorker *worker);
    void getOrionPresetLibraryCallback(OAIHttpRequestWorker *worker);
    void getOutputConfigCallback(OAIHttpRequestWorker *worker);
    void getOutputStatusCallback(OAIHttpRequestWorker *worker);
    void getOverlayCallback(OAIHttpRequestWorker *worker);
    void getOverlayLibraryCallback(OAIHttpRequestWorker *worker);
    void getPipelineStagesCallback(OAIHttpRequestWorker *worker);
    void getPreviewImageCallback(OAIHttpRequestWorker *worker);
    void getRoutingCallback(OAIHttpRequestWorker *worker);
    void getSdiInputConfigCallback(OAIHttpRequestWorker *worker);
    void getSdiInputStatusCallback(OAIHttpRequestWorker *worker);
    void getStagedParamsForGivenNetDeviceIndexCallback(OAIHttpRequestWorker *worker);
    void getStatusForGivenNetDeviceIndexCallback(OAIHttpRequestWorker *worker);
    void getSystemConfigCallback(OAIHttpRequestWorker *worker);
    void getSystemPresetLibraryCallback(OAIHttpRequestWorker *worker);
    void getSystemStatusCallback(OAIHttpRequestWorker *worker);
    void getWiFiConfigCallback(OAIHttpRequestWorker *worker);
    void getWiFiStatusCallback(OAIHttpRequestWorker *worker);
    void setActiveParamsForGivenNetDeviceIndexCallback(OAIHttpRequestWorker *worker);
    void setAllStatusCallback(OAIHttpRequestWorker *worker);
    void setAllSystemDiscoversCallback(OAIHttpRequestWorker *worker);
    void setAncCaptureFilterCallback(OAIHttpRequestWorker *worker);
    void setBbcConfigCallback(OAIHttpRequestWorker *worker);
    void setCalibrationPatternCallback(OAIHttpRequestWorker *worker);
    void setColorfrontConfigCallback(OAIHttpRequestWorker *worker);
    void setConfigForGivenNetDeviceIndexCallback(OAIHttpRequestWorker *worker);
    void setFrameStoreCallback(OAIHttpRequestWorker *worker);
    void setLibraryControlCallback(OAIHttpRequestWorker *worker);
    void setLicenseGenerationRequestCallback(OAIHttpRequestWorker *worker);
    void setNbcConfigCallback(OAIHttpRequestWorker *worker);
    void setOrionConfigCallback(OAIHttpRequestWorker *worker);
    void setOutputConfigCallback(OAIHttpRequestWorker *worker);
    void setOutputStatusCallback(OAIHttpRequestWorker *worker);
    void setOverlayCallback(OAIHttpRequestWorker *worker);
    void setPipelineStagesCallback(OAIHttpRequestWorker *worker);
    void setPreviewImageCallback(OAIHttpRequestWorker *worker);
    void setRoutingCallback(OAIHttpRequestWorker *worker);
    void setSdiInputConfigCallback(OAIHttpRequestWorker *worker);
    void setSdiInputStatusCallback(OAIHttpRequestWorker *worker);
    void setStagedParamsForGivenNetDeviceIndexCallback(OAIHttpRequestWorker *worker);
    void setStatusForGivenNetDeviceIndexCallback(OAIHttpRequestWorker *worker);
    void setSystemConfigCallback(OAIHttpRequestWorker *worker);
    void setSystemPasswordCallback(OAIHttpRequestWorker *worker);
    void setSystemStatusCallback(OAIHttpRequestWorker *worker);
    void setWiFiConfigCallback(OAIHttpRequestWorker *worker);
    void setWiFiStatusCallback(OAIHttpRequestWorker *worker);
    void uploadFileCallback(OAIHttpRequestWorker *worker);

signals:

    void get1dLutLibrarySignal(QList<OAILibraryEntry> summary);
    void get3dLutLibrarySignal(QList<OAILibraryEntry> summary);
    void getActiveParamsForGivenNetDeviceIndexSignal(OAINetParams summary);
    void getAllNetDevicesSignal(QList<OAINetDevice> summary);
    void getAllStatusSignal(OAIStatus summary);
    void getAllSystemDiscoversSignal(QList<OAISystemDiscover> summary);
    void getAncCaptureFilterSignal(OAIAncCaptureFilter summary);
    void getBbcConfigSignal(OAIBbcConfig summary);
    void getCalibrationPatternSignal(OAICalibrationPattern summary);
    void getColorfrontConfigSignal(OAIColorfrontConfig summary);
    void getConfigForGivenNetDeviceIndexSignal(OAINetConfig summary);
    void getFrameStoreSignal(OAIFrameStore summary);
    void getImageLibrarySignal(QList<OAILibraryEntry> summary);
    void getLibraryControlSignal(OAILibraryControl summary);
    void getMatrixLibrarySignal(QList<OAILibraryEntry> summary);
    void getNbcConfigSignal(OAINbcConfig summary);
    void getOrionConfigSignal(OAIOrionConfig summary);
    void getOrionPresetLibrarySignal(QList<OAILibraryEntry> summary);
    void getOutputConfigSignal(OAIOutputConfig summary);
    void getOutputStatusSignal(OAIOutputConfig summary);
    void getOverlaySignal(OAIOverlay summary);
    void getOverlayLibrarySignal(QList<OAILibraryEntry> summary);
    void getPipelineStagesSignal(OAIPipelineStages summary);
    void getPreviewImageSignal(OAIPreview summary);
    void getRoutingSignal(OAIRouting summary);
    void getSdiInputConfigSignal(OAISDI summary);
    void getSdiInputStatusSignal(OAISDI summary);
    void getStagedParamsForGivenNetDeviceIndexSignal(OAINetParams summary);
    void getStatusForGivenNetDeviceIndexSignal(OAINetStatus summary);
    void getSystemConfigSignal(OAISystemConfig summary);
    void getSystemPresetLibrarySignal(QList<OAILibraryEntry> summary);
    void getSystemStatusSignal(OAISystemStatus summary);
    void getWiFiConfigSignal(OAIWiFiDeviceConfig summary);
    void getWiFiStatusSignal(OAIWiFiDeviceStatus summary);
    void setActiveParamsForGivenNetDeviceIndexSignal();
    void setAllStatusSignal();
    void setAllSystemDiscoversSignal();
    void setAncCaptureFilterSignal();
    void setBbcConfigSignal();
    void setCalibrationPatternSignal();
    void setColorfrontConfigSignal();
    void setConfigForGivenNetDeviceIndexSignal();
    void setFrameStoreSignal();
    void setLibraryControlSignal();
    void setLicenseGenerationRequestSignal();
    void setNbcConfigSignal();
    void setOrionConfigSignal();
    void setOutputConfigSignal();
    void setOutputStatusSignal();
    void setOverlaySignal();
    void setPipelineStagesSignal();
    void setPreviewImageSignal();
    void setRoutingSignal();
    void setSdiInputConfigSignal();
    void setSdiInputStatusSignal();
    void setStagedParamsForGivenNetDeviceIndexSignal();
    void setStatusForGivenNetDeviceIndexSignal();
    void setSystemConfigSignal();
    void setSystemPasswordSignal(OAISystemPasswordResponse summary);
    void setSystemStatusSignal();
    void setWiFiConfigSignal();
    void setWiFiStatusSignal();
    void uploadFileSignal();

    void get1dLutLibrarySignalFull(OAIHttpRequestWorker *worker, QList<OAILibraryEntry> summary);
    void get3dLutLibrarySignalFull(OAIHttpRequestWorker *worker, QList<OAILibraryEntry> summary);
    void getActiveParamsForGivenNetDeviceIndexSignalFull(OAIHttpRequestWorker *worker, OAINetParams summary);
    void getAllNetDevicesSignalFull(OAIHttpRequestWorker *worker, QList<OAINetDevice> summary);
    void getAllStatusSignalFull(OAIHttpRequestWorker *worker, OAIStatus summary);
    void getAllSystemDiscoversSignalFull(OAIHttpRequestWorker *worker, QList<OAISystemDiscover> summary);
    void getAncCaptureFilterSignalFull(OAIHttpRequestWorker *worker, OAIAncCaptureFilter summary);
    void getBbcConfigSignalFull(OAIHttpRequestWorker *worker, OAIBbcConfig summary);
    void getCalibrationPatternSignalFull(OAIHttpRequestWorker *worker, OAICalibrationPattern summary);
    void getColorfrontConfigSignalFull(OAIHttpRequestWorker *worker, OAIColorfrontConfig summary);
    void getConfigForGivenNetDeviceIndexSignalFull(OAIHttpRequestWorker *worker, OAINetConfig summary);
    void getFrameStoreSignalFull(OAIHttpRequestWorker *worker, OAIFrameStore summary);
    void getImageLibrarySignalFull(OAIHttpRequestWorker *worker, QList<OAILibraryEntry> summary);
    void getLibraryControlSignalFull(OAIHttpRequestWorker *worker, OAILibraryControl summary);
    void getMatrixLibrarySignalFull(OAIHttpRequestWorker *worker, QList<OAILibraryEntry> summary);
    void getNbcConfigSignalFull(OAIHttpRequestWorker *worker, OAINbcConfig summary);
    void getOrionConfigSignalFull(OAIHttpRequestWorker *worker, OAIOrionConfig summary);
    void getOrionPresetLibrarySignalFull(OAIHttpRequestWorker *worker, QList<OAILibraryEntry> summary);
    void getOutputConfigSignalFull(OAIHttpRequestWorker *worker, OAIOutputConfig summary);
    void getOutputStatusSignalFull(OAIHttpRequestWorker *worker, OAIOutputConfig summary);
    void getOverlaySignalFull(OAIHttpRequestWorker *worker, OAIOverlay summary);
    void getOverlayLibrarySignalFull(OAIHttpRequestWorker *worker, QList<OAILibraryEntry> summary);
    void getPipelineStagesSignalFull(OAIHttpRequestWorker *worker, OAIPipelineStages summary);
    void getPreviewImageSignalFull(OAIHttpRequestWorker *worker, OAIPreview summary);
    void getRoutingSignalFull(OAIHttpRequestWorker *worker, OAIRouting summary);
    void getSdiInputConfigSignalFull(OAIHttpRequestWorker *worker, OAISDI summary);
    void getSdiInputStatusSignalFull(OAIHttpRequestWorker *worker, OAISDI summary);
    void getStagedParamsForGivenNetDeviceIndexSignalFull(OAIHttpRequestWorker *worker, OAINetParams summary);
    void getStatusForGivenNetDeviceIndexSignalFull(OAIHttpRequestWorker *worker, OAINetStatus summary);
    void getSystemConfigSignalFull(OAIHttpRequestWorker *worker, OAISystemConfig summary);
    void getSystemPresetLibrarySignalFull(OAIHttpRequestWorker *worker, QList<OAILibraryEntry> summary);
    void getSystemStatusSignalFull(OAIHttpRequestWorker *worker, OAISystemStatus summary);
    void getWiFiConfigSignalFull(OAIHttpRequestWorker *worker, OAIWiFiDeviceConfig summary);
    void getWiFiStatusSignalFull(OAIHttpRequestWorker *worker, OAIWiFiDeviceStatus summary);
    void setActiveParamsForGivenNetDeviceIndexSignalFull(OAIHttpRequestWorker *worker);
    void setAllStatusSignalFull(OAIHttpRequestWorker *worker);
    void setAllSystemDiscoversSignalFull(OAIHttpRequestWorker *worker);
    void setAncCaptureFilterSignalFull(OAIHttpRequestWorker *worker);
    void setBbcConfigSignalFull(OAIHttpRequestWorker *worker);
    void setCalibrationPatternSignalFull(OAIHttpRequestWorker *worker);
    void setColorfrontConfigSignalFull(OAIHttpRequestWorker *worker);
    void setConfigForGivenNetDeviceIndexSignalFull(OAIHttpRequestWorker *worker);
    void setFrameStoreSignalFull(OAIHttpRequestWorker *worker);
    void setLibraryControlSignalFull(OAIHttpRequestWorker *worker);
    void setLicenseGenerationRequestSignalFull(OAIHttpRequestWorker *worker);
    void setNbcConfigSignalFull(OAIHttpRequestWorker *worker);
    void setOrionConfigSignalFull(OAIHttpRequestWorker *worker);
    void setOutputConfigSignalFull(OAIHttpRequestWorker *worker);
    void setOutputStatusSignalFull(OAIHttpRequestWorker *worker);
    void setOverlaySignalFull(OAIHttpRequestWorker *worker);
    void setPipelineStagesSignalFull(OAIHttpRequestWorker *worker);
    void setPreviewImageSignalFull(OAIHttpRequestWorker *worker);
    void setRoutingSignalFull(OAIHttpRequestWorker *worker);
    void setSdiInputConfigSignalFull(OAIHttpRequestWorker *worker);
    void setSdiInputStatusSignalFull(OAIHttpRequestWorker *worker);
    void setStagedParamsForGivenNetDeviceIndexSignalFull(OAIHttpRequestWorker *worker);
    void setStatusForGivenNetDeviceIndexSignalFull(OAIHttpRequestWorker *worker);
    void setSystemConfigSignalFull(OAIHttpRequestWorker *worker);
    void setSystemPasswordSignalFull(OAIHttpRequestWorker *worker, OAISystemPasswordResponse summary);
    void setSystemStatusSignalFull(OAIHttpRequestWorker *worker);
    void setWiFiConfigSignalFull(OAIHttpRequestWorker *worker);
    void setWiFiStatusSignalFull(OAIHttpRequestWorker *worker);
    void uploadFileSignalFull(OAIHttpRequestWorker *worker);

    void get1dLutLibrarySignalE(QList<OAILibraryEntry> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void get3dLutLibrarySignalE(QList<OAILibraryEntry> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getActiveParamsForGivenNetDeviceIndexSignalE(OAINetParams summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getAllNetDevicesSignalE(QList<OAINetDevice> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getAllStatusSignalE(OAIStatus summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getAllSystemDiscoversSignalE(QList<OAISystemDiscover> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getAncCaptureFilterSignalE(OAIAncCaptureFilter summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getBbcConfigSignalE(OAIBbcConfig summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getCalibrationPatternSignalE(OAICalibrationPattern summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getColorfrontConfigSignalE(OAIColorfrontConfig summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getConfigForGivenNetDeviceIndexSignalE(OAINetConfig summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getFrameStoreSignalE(OAIFrameStore summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getImageLibrarySignalE(QList<OAILibraryEntry> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getLibraryControlSignalE(OAILibraryControl summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getMatrixLibrarySignalE(QList<OAILibraryEntry> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getNbcConfigSignalE(OAINbcConfig summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getOrionConfigSignalE(OAIOrionConfig summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getOrionPresetLibrarySignalE(QList<OAILibraryEntry> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getOutputConfigSignalE(OAIOutputConfig summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getOutputStatusSignalE(OAIOutputConfig summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getOverlaySignalE(OAIOverlay summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getOverlayLibrarySignalE(QList<OAILibraryEntry> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getPipelineStagesSignalE(OAIPipelineStages summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getPreviewImageSignalE(OAIPreview summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getRoutingSignalE(OAIRouting summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getSdiInputConfigSignalE(OAISDI summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getSdiInputStatusSignalE(OAISDI summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getStagedParamsForGivenNetDeviceIndexSignalE(OAINetParams summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getStatusForGivenNetDeviceIndexSignalE(OAINetStatus summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getSystemConfigSignalE(OAISystemConfig summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getSystemPresetLibrarySignalE(QList<OAILibraryEntry> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getSystemStatusSignalE(OAISystemStatus summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getWiFiConfigSignalE(OAIWiFiDeviceConfig summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getWiFiStatusSignalE(OAIWiFiDeviceStatus summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setActiveParamsForGivenNetDeviceIndexSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setAllStatusSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setAllSystemDiscoversSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setAncCaptureFilterSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setBbcConfigSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setCalibrationPatternSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setColorfrontConfigSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setConfigForGivenNetDeviceIndexSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setFrameStoreSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setLibraryControlSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setLicenseGenerationRequestSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setNbcConfigSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setOrionConfigSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setOutputConfigSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setOutputStatusSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setOverlaySignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setPipelineStagesSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setPreviewImageSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setRoutingSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setSdiInputConfigSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setSdiInputStatusSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setStagedParamsForGivenNetDeviceIndexSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setStatusForGivenNetDeviceIndexSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setSystemConfigSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setSystemPasswordSignalE(OAISystemPasswordResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setSystemStatusSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setWiFiConfigSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setWiFiStatusSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void uploadFileSignalE(QNetworkReply::NetworkError error_type, QString error_str);

    void get1dLutLibrarySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void get3dLutLibrarySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getActiveParamsForGivenNetDeviceIndexSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getAllNetDevicesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getAllStatusSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getAllSystemDiscoversSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getAncCaptureFilterSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getBbcConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getCalibrationPatternSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getColorfrontConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getConfigForGivenNetDeviceIndexSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getFrameStoreSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getImageLibrarySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getLibraryControlSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getMatrixLibrarySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getNbcConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getOrionConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getOrionPresetLibrarySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getOutputConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getOutputStatusSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getOverlaySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getOverlayLibrarySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getPipelineStagesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getPreviewImageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getRoutingSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getSdiInputConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getSdiInputStatusSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getStagedParamsForGivenNetDeviceIndexSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getStatusForGivenNetDeviceIndexSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getSystemConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getSystemPresetLibrarySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getSystemStatusSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getWiFiConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getWiFiStatusSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setActiveParamsForGivenNetDeviceIndexSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setAllStatusSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setAllSystemDiscoversSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setAncCaptureFilterSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setBbcConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setCalibrationPatternSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setColorfrontConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setConfigForGivenNetDeviceIndexSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setFrameStoreSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setLibraryControlSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setLicenseGenerationRequestSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setNbcConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setOrionConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setOutputConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setOutputStatusSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setOverlaySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setPipelineStagesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setPreviewImageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setRoutingSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setSdiInputConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setSdiInputStatusSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setStagedParamsForGivenNetDeviceIndexSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setStatusForGivenNetDeviceIndexSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setSystemConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setSystemPasswordSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setSystemStatusSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setWiFiConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setWiFiStatusSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void uploadFileSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
