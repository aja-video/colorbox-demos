/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMouseEvent>
#include "colorboxdemocommon.h"
#include "ajawebsocketinterface.h"
#include <OAIDefaultApi.h>
#include "filedownloader.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

public slots:
    void ipAddressEdited();
    void handleUploadImageButton();
    void handleDownloadImageButton();
    void handleSelectImageButton();

    // OpenAPI Slots
    void handleUploadFile();
    void handleUploadFileError(QNetworkReply::NetworkError error_type, QString error_str)  ;
    void handleGetImageLibrary(QList<OpenAPI::OAILibraryEntry> summary);
    void handleGetImageLibraryError(QList<OpenAPI::OAILibraryEntry> summary,QNetworkReply::NetworkError error_type, QString error_str);

    void downLoadImage();

signals:


protected:

    void recallSettings();
    void saveSettings();

	bool _cbConnected;

    void keyPressEvent(QKeyEvent *);

	OpenAPI::OAIDefaultApi _api;
	QString _currentIPAddress;

    FileDownloader* _fileDownloader;
    QMutex _libraryMutex;

private:
    Ui::Dialog *_ui;
};
#endif // DIALOG_H
