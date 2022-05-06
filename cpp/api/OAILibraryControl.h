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
 * OAILibraryControl.h
 *
 * 
 */

#ifndef OAILibraryControl_H
#define OAILibraryControl_H

#include <QJsonObject>

#include "OAILibrary.h"
#include "OAILibraryAction.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAILibraryControl : public OAIObject {
public:
    OAILibraryControl();
    OAILibraryControl(QString json);
    ~OAILibraryControl() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAILibrary getLibrary() const;
    void setLibrary(const OAILibrary &library);
    bool is_library_Set() const;
    bool is_library_Valid() const;

    qint32 getEntry() const;
    void setEntry(const qint32 &entry);
    bool is_entry_Set() const;
    bool is_entry_Valid() const;

    OAILibraryAction getAction() const;
    void setAction(const OAILibraryAction &action);
    bool is_action_Set() const;
    bool is_action_Valid() const;

    QString getData() const;
    void setData(const QString &data);
    bool is_data_Set() const;
    bool is_data_Valid() const;

    QString getErrorMsg() const;
    void setErrorMsg(const QString &error_msg);
    bool is_error_msg_Set() const;
    bool is_error_msg_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

    virtual bool applyMinMaxConstraints();
private:
    void initializeModel();

    OAILibrary library;
    bool m_library_isSet;
    bool m_library_isValid;

    qint32 entry;
    bool m_entry_isSet;
    bool m_entry_isValid;

    OAILibraryAction action;
    bool m_action_isSet;
    bool m_action_isValid;

    QString data;
    bool m_data_isSet;
    bool m_data_isValid;

    QString error_msg;
    bool m_error_msg_isSet;
    bool m_error_msg_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAILibraryControl)

#endif // OAILibraryControl_H
