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
 * OAIColorfrontEngine.h
 *
 * 
 */

#ifndef OAIColorfrontEngine_H
#define OAIColorfrontEngine_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIColorfrontEngine : public OAIEnum {
public:
    OAIColorfrontEngine();
    OAIColorfrontEngine(QString json);
    ~OAIColorfrontEngine() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIColorfrontEngine {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        DEFAULT, 
        ADJUST
    };
    OAIColorfrontEngine::eOAIColorfrontEngine getValue() const;
    void setValue(const OAIColorfrontEngine::eOAIColorfrontEngine& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

    bool applyMinMaxConstraints();
private:
    void initializeModel();

    eOAIColorfrontEngine m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIColorfrontEngine)

#endif // OAIColorfrontEngine_H