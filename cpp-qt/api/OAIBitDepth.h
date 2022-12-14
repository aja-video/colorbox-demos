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
 * OAIBitDepth.h
 *
 * 
 */

#ifndef OAIBitDepth_H
#define OAIBitDepth_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIBitDepth : public OAIEnum {
public:
    OAIBitDepth();
    OAIBitDepth(QString json);
    ~OAIBitDepth() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIBitDepth {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        AUTO, 
        _10_BIT, 
        _12_BIT
    };
    OAIBitDepth::eOAIBitDepth getValue() const;
    void setValue(const OAIBitDepth::eOAIBitDepth& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

    bool applyMinMaxConstraints();
private:
    void initializeModel();

    eOAIBitDepth m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBitDepth)

#endif // OAIBitDepth_H
