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
 * OAIColorimetry.h
 *
 * 
 */

#ifndef OAIColorimetry_H
#define OAIColorimetry_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIColorimetry : public OAIEnum {
public:
    OAIColorimetry();
    OAIColorimetry(QString json);
    ~OAIColorimetry() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIColorimetry {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        AUTO, 
        BT_709, 
        BT_2020
    };
    OAIColorimetry::eOAIColorimetry getValue() const;
    void setValue(const OAIColorimetry::eOAIColorimetry& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

    bool applyMinMaxConstraints();
private:
    void initializeModel();

    eOAIColorimetry m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIColorimetry)

#endif // OAIColorimetry_H