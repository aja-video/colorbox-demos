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
 * OAIStatus.h
 *
 * 
 */

#ifndef OAIStatus_H
#define OAIStatus_H

#include <QJsonObject>

#include "OAIStatusInfo.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIStatus : public OAIObject {
public:
    OAIStatus();
    OAIStatus(QString json);
    ~OAIStatus() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIStatusInfo getDeviceDieTemp() const;
    void setDeviceDieTemp(const OAIStatusInfo &device_die_temp);
    bool is_device_die_temp_Set() const;
    bool is_device_die_temp_Valid() const;

    QString getSystemDate() const;
    void setSystemDate(const QString &system_date);
    bool is_system_date_Set() const;
    bool is_system_date_Valid() const;

    QString getSystemTime() const;
    void setSystemTime(const QString &system_time);
    bool is_system_time_Set() const;
    bool is_system_time_Valid() const;

    QString getSystemUptime() const;
    void setSystemUptime(const QString &system_uptime);
    bool is_system_uptime_Set() const;
    bool is_system_uptime_Valid() const;

    QString getSystemOsName() const;
    void setSystemOsName(const QString &system_os_name);
    bool is_system_os_name_Set() const;
    bool is_system_os_name_Valid() const;

    QString getSystemSerialNumber() const;
    void setSystemSerialNumber(const QString &system_serial_number);
    bool is_system_serial_number_Set() const;
    bool is_system_serial_number_Valid() const;

    QString getSystemBoardRevision() const;
    void setSystemBoardRevision(const QString &system_board_revision);
    bool is_system_board_revision_Set() const;
    bool is_system_board_revision_Valid() const;

    QString getSystemCatalogNumber() const;
    void setSystemCatalogNumber(const QString &system_catalog_number);
    bool is_system_catalog_number_Set() const;
    bool is_system_catalog_number_Valid() const;

    QString getSystemAppSwVersion() const;
    void setSystemAppSwVersion(const QString &system_app_sw_version);
    bool is_system_app_sw_version_Set() const;
    bool is_system_app_sw_version_Valid() const;

    QString getSystemSupportInfo() const;
    void setSystemSupportInfo(const QString &system_support_info);
    bool is_system_support_info_Set() const;
    bool is_system_support_info_Valid() const;

    bool isEulaAccepted() const;
    void setEulaAccepted(const bool &eula_accepted);
    bool is_eula_accepted_Set() const;
    bool is_eula_accepted_Valid() const;

    bool isLicenseActive() const;
    void setLicenseActive(const bool &license_active);
    bool is_license_active_Set() const;
    bool is_license_active_Valid() const;

    bool isBbcLutsLicensed() const;
    void setBbcLutsLicensed(const bool &bbc_luts_licensed);
    bool is_bbc_luts_licensed_Set() const;
    bool is_bbc_luts_licensed_Valid() const;

    bool isOrionEngineLicensed() const;
    void setOrionEngineLicensed(const bool &orion_engine_licensed);
    bool is_orion_engine_licensed_Set() const;
    bool is_orion_engine_licensed_Valid() const;

    bool isColorfrontEngineLicensed() const;
    void setColorfrontEngineLicensed(const bool &colorfront_engine_licensed);
    bool is_colorfront_engine_licensed_Set() const;
    bool is_colorfront_engine_licensed_Valid() const;

    qint32 getResetTime() const;
    void setResetTime(const qint32 &reset_time);
    bool is_reset_time_Set() const;
    bool is_reset_time_Valid() const;

    qint32 getShutdownTime() const;
    void setShutdownTime(const qint32 &shutdown_time);
    bool is_shutdown_time_Set() const;
    bool is_shutdown_time_Valid() const;

    QString getColorfrontTransformVersion() const;
    void setColorfrontTransformVersion(const QString &colorfront_transform_version);
    bool is_colorfront_transform_version_Set() const;
    bool is_colorfront_transform_version_Valid() const;

    QString getColorfrontEngineVersion() const;
    void setColorfrontEngineVersion(const QString &colorfront_engine_version);
    bool is_colorfront_engine_version_Set() const;
    bool is_colorfront_engine_version_Valid() const;

    QString getOrionVersion() const;
    void setOrionVersion(const QString &orion_version);
    bool is_orion_version_Set() const;
    bool is_orion_version_Valid() const;

    QString getBbcLutVersion() const;
    void setBbcLutVersion(const QString &bbc_lut_version);
    bool is_bbc_lut_version_Set() const;
    bool is_bbc_lut_version_Valid() const;

    QString getNbcuLutVersion() const;
    void setNbcuLutVersion(const QString &nbcu_lut_version);
    bool is_nbcu_lut_version_Set() const;
    bool is_nbcu_lut_version_Valid() const;

    bool isCpuBusy() const;
    void setCpuBusy(const bool &cpu_busy);
    bool is_cpu_busy_Set() const;
    bool is_cpu_busy_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

    bool applyMinMaxConstraints();
private:
    void initializeModel();

    OAIStatusInfo m_device_die_temp;
    bool m_device_die_temp_isSet;
    bool m_device_die_temp_isValid;

    QString m_system_date;
    bool m_system_date_isSet;
    bool m_system_date_isValid;

    QString m_system_time;
    bool m_system_time_isSet;
    bool m_system_time_isValid;

    QString m_system_uptime;
    bool m_system_uptime_isSet;
    bool m_system_uptime_isValid;

    QString m_system_os_name;
    bool m_system_os_name_isSet;
    bool m_system_os_name_isValid;

    QString m_system_serial_number;
    bool m_system_serial_number_isSet;
    bool m_system_serial_number_isValid;

    QString m_system_board_revision;
    bool m_system_board_revision_isSet;
    bool m_system_board_revision_isValid;

    QString m_system_catalog_number;
    bool m_system_catalog_number_isSet;
    bool m_system_catalog_number_isValid;

    QString m_system_app_sw_version;
    bool m_system_app_sw_version_isSet;
    bool m_system_app_sw_version_isValid;

    QString m_system_support_info;
    bool m_system_support_info_isSet;
    bool m_system_support_info_isValid;

    bool m_eula_accepted;
    bool m_eula_accepted_isSet;
    bool m_eula_accepted_isValid;

    bool m_license_active;
    bool m_license_active_isSet;
    bool m_license_active_isValid;

    bool m_bbc_luts_licensed;
    bool m_bbc_luts_licensed_isSet;
    bool m_bbc_luts_licensed_isValid;

    bool m_orion_engine_licensed;
    bool m_orion_engine_licensed_isSet;
    bool m_orion_engine_licensed_isValid;

    bool m_colorfront_engine_licensed;
    bool m_colorfront_engine_licensed_isSet;
    bool m_colorfront_engine_licensed_isValid;

    qint32 m_reset_time;
    bool m_reset_time_isSet;
    bool m_reset_time_isValid;

    qint32 m_shutdown_time;
    bool m_shutdown_time_isSet;
    bool m_shutdown_time_isValid;

    QString m_colorfront_transform_version;
    bool m_colorfront_transform_version_isSet;
    bool m_colorfront_transform_version_isValid;

    QString m_colorfront_engine_version;
    bool m_colorfront_engine_version_isSet;
    bool m_colorfront_engine_version_isValid;

    QString m_orion_version;
    bool m_orion_version_isSet;
    bool m_orion_version_isValid;

    QString m_bbc_lut_version;
    bool m_bbc_lut_version_isSet;
    bool m_bbc_lut_version_isValid;

    QString m_nbcu_lut_version;
    bool m_nbcu_lut_version_isSet;
    bool m_nbcu_lut_version_isValid;

    bool m_cpu_busy;
    bool m_cpu_busy_isSet;
    bool m_cpu_busy_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIStatus)

#endif // OAIStatus_H
