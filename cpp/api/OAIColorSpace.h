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
 * OAIColorSpace.h
 *
 * 
 */

#ifndef OAIColorSpace_H
#define OAIColorSpace_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIColorSpace : public OAIEnum {
public:
    OAIColorSpace();
    OAIColorSpace(QString json);
    ~OAIColorSpace() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIColorSpace {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        AUTO, 
        _4_2_2_YCBCR, 
        _4_4_4_RGB
    };
    OAIColorSpace::eOAIColorSpace getValue() const;
    void setValue(const OAIColorSpace::eOAIColorSpace& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

    virtual bool applyMinMaxConstraints();
private:
    void initializeModel();

    eOAIColorSpace m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIColorSpace)

#endif // OAIColorSpace_H
