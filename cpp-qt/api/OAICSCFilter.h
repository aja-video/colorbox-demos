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
 * OAICSCFilter.h
 *
 * 
 */

#ifndef OAICSCFilter_H
#define OAICSCFilter_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICSCFilter : public OAIEnum {
public:
    OAICSCFilter();
    OAICSCFilter(QString json);
    ~OAICSCFilter() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAICSCFilter {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        NONE, 
        AUTO, 
        FULL, 
        LIGHT
    };
    OAICSCFilter::eOAICSCFilter getValue() const;
    void setValue(const OAICSCFilter::eOAICSCFilter& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

    bool applyMinMaxConstraints();
private:
    void initializeModel();

    eOAICSCFilter m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICSCFilter)

#endif // OAICSCFilter_H
