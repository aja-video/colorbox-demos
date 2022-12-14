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
 * OAINetDevice.h
 *
 * 
 */

#ifndef OAINetDevice_H
#define OAINetDevice_H

#include <QJsonObject>

#include "OAINetConfig.h"
#include "OAINetParams.h"
#include "OAINetStatus.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAINetDevice : public OAIObject {
public:
    OAINetDevice();
    OAINetDevice(QString json);
    ~OAINetDevice() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAINetConfig getConfig() const;
    void setConfig(const OAINetConfig &config);
    bool is_config_Set() const;
    bool is_config_Valid() const;

    OAINetStatus getStatus() const;
    void setStatus(const OAINetStatus &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    OAINetParams getActiveParams() const;
    void setActiveParams(const OAINetParams &active_params);
    bool is_active_params_Set() const;
    bool is_active_params_Valid() const;

    OAINetParams getStagedParams() const;
    void setStagedParams(const OAINetParams &staged_params);
    bool is_staged_params_Set() const;
    bool is_staged_params_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

    bool applyMinMaxConstraints();
private:
    void initializeModel();

    OAINetConfig m_config;
    bool m_config_isSet;
    bool m_config_isValid;

    OAINetStatus m_status;
    bool m_status_isSet;
    bool m_status_isValid;

    OAINetParams m_active_params;
    bool m_active_params_isSet;
    bool m_active_params_isValid;

    OAINetParams m_staged_params;
    bool m_staged_params_isSet;
    bool m_staged_params_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAINetDevice)

#endif // OAINetDevice_H
