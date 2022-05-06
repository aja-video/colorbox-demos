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
 * OAIFrame.h
 *
 * 
 */

#ifndef OAIFrame_H
#define OAIFrame_H

#include <QJsonObject>

#include <QByteArray>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIFrame : public OAIObject {
public:
    OAIFrame();
    OAIFrame(QString json);
    ~OAIFrame() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QByteArray getImage() const;
    void setImage(const QByteArray &image);
    bool is_image_Set() const;
    bool is_image_Valid() const;

    QByteArray getAncData() const;
    void setAncData(const QByteArray &anc_data);
    bool is_anc_data_Set() const;
    bool is_anc_data_Valid() const;

    QString getUserData1() const;
    void setUserData1(const QString &user_data1);
    bool is_user_data1_Set() const;
    bool is_user_data1_Valid() const;

    QString getUserData2() const;
    void setUserData2(const QString &user_data2);
    bool is_user_data2_Set() const;
    bool is_user_data2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

    virtual bool applyMinMaxConstraints();
private:
    void initializeModel();

    QByteArray image;
    bool m_image_isSet;
    bool m_image_isValid;

    QByteArray anc_data;
    bool m_anc_data_isSet;
    bool m_anc_data_isValid;

    QString user_data1;
    bool m_user_data1_isSet;
    bool m_user_data1_isValid;

    QString user_data2;
    bool m_user_data2_isSet;
    bool m_user_data2_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIFrame)

#endif // OAIFrame_H
