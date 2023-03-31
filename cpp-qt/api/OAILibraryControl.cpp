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

#include "OAILibraryControl.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAILibraryControl::OAILibraryControl(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAILibraryControl::OAILibraryControl() {
    this->initializeModel();
}

OAILibraryControl::~OAILibraryControl() {}

void OAILibraryControl::initializeModel() {

    m_library_isSet = false;
    m_library_isValid = false;

    m_entry_isSet = false;
    m_entry_isValid = false;

    m_action_isSet = false;
    m_action_isValid = false;

    m_data_isSet = false;
    m_data_isValid = false;

    m_error_msg_isSet = false;
    m_error_msg_isValid = false;
}

void OAILibraryControl::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAILibraryControl::fromJsonObject(QJsonObject json) {

    m_library_isValid = ::OpenAPI::fromJsonValue(m_library, json[QString("library")]);
    m_library_isSet = !json[QString("library")].isNull() && m_library_isValid;

    m_entry_isValid = ::OpenAPI::fromJsonValue(m_entry, json[QString("entry")]);
    m_entry_isSet = !json[QString("entry")].isNull() && m_entry_isValid;

    m_action_isValid = ::OpenAPI::fromJsonValue(m_action, json[QString("action")]);
    m_action_isSet = !json[QString("action")].isNull() && m_action_isValid;

    m_data_isValid = ::OpenAPI::fromJsonValue(m_data, json[QString("data")]);
    m_data_isSet = !json[QString("data")].isNull() && m_data_isValid;

    m_error_msg_isValid = ::OpenAPI::fromJsonValue(m_error_msg, json[QString("errorMsg")]);
    m_error_msg_isSet = !json[QString("errorMsg")].isNull() && m_error_msg_isValid;

    applyMinMaxConstraints();
}

QString OAILibraryControl::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAILibraryControl::asJsonObject() const {
    QJsonObject obj;
    if (m_library.isSet()) {
        obj.insert(QString("library"), ::OpenAPI::toJsonValue(m_library));
    }
    if (m_entry_isSet) {
        obj.insert(QString("entry"), ::OpenAPI::toJsonValue(m_entry));
    }
    if (m_action.isSet()) {
        obj.insert(QString("action"), ::OpenAPI::toJsonValue(m_action));
    }
    if (m_data_isSet) {
        obj.insert(QString("data"), ::OpenAPI::toJsonValue(m_data));
    }
    if (m_error_msg_isSet) {
        obj.insert(QString("errorMsg"), ::OpenAPI::toJsonValue(m_error_msg));
    }
    return obj;
}

OAILibrary OAILibraryControl::getLibrary() const {
    return m_library;
}
void OAILibraryControl::setLibrary(const OAILibrary &library) {
	OAILibrary v = library;
	this->m_library = v;
    this->m_library_isSet = true;
}

bool OAILibraryControl::is_library_Set() const{
    return m_library_isSet;
}

bool OAILibraryControl::is_library_Valid() const{
    return m_library_isValid;
}


qint32 OAILibraryControl::getEntry() const {
    return m_entry;
}
void OAILibraryControl::setEntry(const qint32 &entry) {
	qint32 v = entry;
	this->m_entry = v;
    this->m_entry_isSet = true;
}

bool OAILibraryControl::is_entry_Set() const{
    return m_entry_isSet;
}

bool OAILibraryControl::is_entry_Valid() const{
    return m_entry_isValid;
}



OAILibraryAction OAILibraryControl::getAction() const {
    return m_action;
}
void OAILibraryControl::setAction(const OAILibraryAction &action) {
	OAILibraryAction v = action;
	this->m_action = v;
    this->m_action_isSet = true;
}

bool OAILibraryControl::is_action_Set() const{
    return m_action_isSet;
}

bool OAILibraryControl::is_action_Valid() const{
    return m_action_isValid;
}


QString OAILibraryControl::getData() const {
    return m_data;
}
void OAILibraryControl::setData(const QString &data) {
	QString v = data;
	this->m_data = v;
    this->m_data_isSet = true;
}

bool OAILibraryControl::is_data_Set() const{
    return m_data_isSet;
}

bool OAILibraryControl::is_data_Valid() const{
    return m_data_isValid;
}



QString OAILibraryControl::getErrorMsg() const {
    return m_error_msg;
}
void OAILibraryControl::setErrorMsg(const QString &error_msg) {
	QString v = error_msg;
	this->m_error_msg = v;
    this->m_error_msg_isSet = true;
}

bool OAILibraryControl::is_error_msg_Set() const{
    return m_error_msg_isSet;
}

bool OAILibraryControl::is_error_msg_Valid() const{
    return m_error_msg_isValid;
}



bool OAILibraryControl::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_library.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_entry_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_action.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_data_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_error_msg_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAILibraryControl::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

bool OAILibraryControl::applyMinMaxConstraints() {
	bool anyMinMaxValueChanged = false;
	if (is_entry_Set())
	{
		bool entryChanged = false;
		qint32 v = getEntry();
		if (entryChanged) { setEntry(v); anyMinMaxValueChanged = true; }
	}
	if (is_data_Set())
	{
		bool dataChanged = false;
		QString v = getData();
		if (dataChanged) { setData(v); anyMinMaxValueChanged = true; }
	}
	if (is_error_msg_Set())
	{
		bool errorMsgChanged = false;
		QString v = getErrorMsg();
		if (errorMsgChanged) { setErrorMsg(v); anyMinMaxValueChanged = true; }
	}
	return anyMinMaxValueChanged;
}

} // namespace OpenAPI
