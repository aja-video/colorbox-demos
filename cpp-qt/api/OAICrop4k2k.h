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
 * OAICrop4k2k.h
 *
 * 
 */

#ifndef OAICrop4k2k_H
#define OAICrop4k2k_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICrop4k2k : public OAIEnum {
public:
    OAICrop4k2k();
    OAICrop4k2k(QString json);
    ~OAICrop4k2k() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAICrop4k2k {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        AUTO, 
        ENABLED, 
        DISABLED
    };
    OAICrop4k2k::eOAICrop4k2k getValue() const;
    void setValue(const OAICrop4k2k::eOAICrop4k2k& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

    bool applyMinMaxConstraints();
private:
    void initializeModel();

    eOAICrop4k2k m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICrop4k2k)

#endif // OAICrop4k2k_H
