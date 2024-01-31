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

    // Needs to correspond ot index of tabs.
    enum LibaryTabEnum
    {
        OneDLUT,
        ThreeDLUT,
        MATRIX,
        IMAGE,
        OVERLAY,
        AMF
    };
public slots:
    void ipAddressEdited();
    void handleUploadButton();
    void handleDownloadButton();
    void handleSelectButton();
    void handleLibraryTabChanged(int index);

    // OpenAPI Slots
    void handleUploadFile(QString summary);
    void handleUploadFileError(QString summary, QNetworkReply::NetworkError error_type, QString error_str)  ;
    void handleGetLibrary(QList<OpenAPI::OAILibraryEntry> summary);
    void handleGetLibraryError(QList<OpenAPI::OAILibraryEntry> summary,QNetworkReply::NetworkError error_type, QString error_str);

    void getCurrentLibrary();
    Dialog::LibaryTabEnum getCurrentLibraryEnum();
    void downLoadImage();
    QStringList parseAMFFile(QString fileName);

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
