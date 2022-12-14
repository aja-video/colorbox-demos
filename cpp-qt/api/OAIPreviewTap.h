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
 * OAIPreviewTap.h
 *
 * 
 */

#ifndef OAIPreviewTap_H
#define OAIPreviewTap_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPreviewTap : public OAIEnum {
public:
    OAIPreviewTap();
    OAIPreviewTap(QString json);
    ~OAIPreviewTap() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIPreviewTap {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        INPUT, 
        OUTPUT
    };
    OAIPreviewTap::eOAIPreviewTap getValue() const;
    void setValue(const OAIPreviewTap::eOAIPreviewTap& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

    bool applyMinMaxConstraints();
private:
    void initializeModel();

    eOAIPreviewTap m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPreviewTap)

#endif // OAIPreviewTap_H
