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
 * OAIStatusInfo.h
 *
 * 
 */

#ifndef OAIStatusInfo_H
#define OAIStatusInfo_H

#include <QJsonObject>

#include "OAIStatusState.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIStatusInfo : public OAIObject {
public:
    OAIStatusInfo();
    OAIStatusInfo(QString json);
    ~OAIStatusInfo() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    double getUpperBoundGood() const;
    void setUpperBoundGood(const double &upper_bound_good);
    bool is_upper_bound_good_Set() const;
    bool is_upper_bound_good_Valid() const;

    double getUpperBoundMaybe() const;
    void setUpperBoundMaybe(const double &upper_bound_maybe);
    bool is_upper_bound_maybe_Set() const;
    bool is_upper_bound_maybe_Valid() const;

    QString getValue() const;
    void setValue(const QString &value);
    bool is_value_Set() const;
    bool is_value_Valid() const;

    double getValueInt() const;
    void setValueInt(const double &value_int);
    bool is_value_int_Set() const;
    bool is_value_int_Valid() const;

    QString getLabel() const;
    void setLabel(const QString &label);
    bool is_label_Set() const;
    bool is_label_Valid() const;

    QString getExtraValue() const;
    void setExtraValue(const QString &extra_value);
    bool is_extra_value_Set() const;
    bool is_extra_value_Valid() const;

    QString getExtraLabel() const;
    void setExtraLabel(const QString &extra_label);
    bool is_extra_label_Set() const;
    bool is_extra_label_Valid() const;

    OAIStatusState getState() const;
    void setState(const OAIStatusState &state);
    bool is_state_Set() const;
    bool is_state_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

    bool applyMinMaxConstraints();
private:
    void initializeModel();

    double m_upper_bound_good;
    bool m_upper_bound_good_isSet;
    bool m_upper_bound_good_isValid;

    double m_upper_bound_maybe;
    bool m_upper_bound_maybe_isSet;
    bool m_upper_bound_maybe_isValid;

    QString m_value;
    bool m_value_isSet;
    bool m_value_isValid;

    double m_value_int;
    bool m_value_int_isSet;
    bool m_value_int_isValid;

    QString m_label;
    bool m_label_isSet;
    bool m_label_isValid;

    QString m_extra_value;
    bool m_extra_value_isSet;
    bool m_extra_value_isValid;

    QString m_extra_label;
    bool m_extra_label_isSet;
    bool m_extra_label_isValid;

    OAIStatusState m_state;
    bool m_state_isSet;
    bool m_state_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIStatusInfo)

#endif // OAIStatusInfo_H