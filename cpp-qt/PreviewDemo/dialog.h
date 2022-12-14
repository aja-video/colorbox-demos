/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMutexLocker>
#include <OAIDefaultApi.h>
#include <OAIPreview.h>
#include <OAISDI.h>

#ifdef SUPPORT_ANC
#include "ajantv2/includes/ntv2utils.h"
#include "ajantv2/includes/ntv2vpid.h"
#include "ajaanc/includes/ancillarylist.h"
#include "ajaanc/includes/ancillarydata_timecode_atc.h"
#endif

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
    void handlePreviewTapChoice(const QString newTexString);
    void handleEnableOverlay();
    void updateUIPreview();
    void handleInputStatus(OpenAPI::OAISDI status);
    void handlePreview(OpenAPI::OAIPreview preview);
    void handlePreviewError(OpenAPI::OAIPreview summary, QNetworkReply::NetworkError error_type, QString error_str);

    void getOverlayFromColorbox(OpenAPI::OAIOverlay overlay);
    void getRoutingFromColorbox(OpenAPI::OAIRouting routing);

signals:

protected:

    void recallSettings();
    void saveSettings();

	bool _cbConnected;
    QString _currentIPAddress;
    OpenAPI::OAIDefaultApi _api;

    QMutex _updateLock;
    OpenAPI::OAISDI _status;
    OpenAPI::OAIPreview _preview;

private:
    Ui::Dialog *_ui;
};
#endif // DIALOG_H
