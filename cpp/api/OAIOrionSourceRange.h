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
 * OAIOrionSourceRange.h
 *
 * 
 */

#ifndef OAIOrionSourceRange_H
#define OAIOrionSourceRange_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIOrionSourceRange : public OAIEnum {
public:
    OAIOrionSourceRange();
    OAIOrionSourceRange(QString json);
    ~OAIOrionSourceRange() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIOrionSourceRange {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        NARROW, 
        FULL
    };
    OAIOrionSourceRange::eOAIOrionSourceRange getValue() const;
    void setValue(const OAIOrionSourceRange::eOAIOrionSourceRange& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

    virtual bool applyMinMaxConstraints();
private:
    void initializeModel();

    eOAIOrionSourceRange m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOrionSourceRange)

#endif // OAIOrionSourceRange_H
