/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
/*!
 * Librarian
 * The demo demostrates how to interface to a ColorBox Library. This example
 * uses the framestore library but the same basic technique can be used for the
 * 1DLUT,3DLUT and Matrix library
 *
 * To get the ColorBox Image library call _api.getImageLibrary();
 * or _api.get1dLutLibrary(), _api.get3dLutLibrary() or _api.getMatrixLibrary() for other libraries.
 * This will generate a signal where you can capture the library items(see Dialog::handleGetImageLibrary)
 *
 * To upload an image to the library(tiff,png,jpg) see Dialog::handleUploadImageButton()
 *
 * To download an image from the library see Dialog::handleDownloadImageButton().
 * This will download the selected image to the local bin directory for the demos.
 * This just uses http download based on the file location on the colorbox library.
 * For example, http://192.168.1.140/library/im/05/image.jpg
 * or http://192.168.1.140/library/3d/01/ACESConfig1_2_SLog3to709.cube
 * /1d/ 1DLUT
 * /3d/ 3DLUT
 * /mx/ Matrix
 * /im/ Image
 *
 * To select a library element to update the ColorBox Framestore see Dialog::handleSelectImageButton().
 * When you select this button, the selected image file will be recalled to the Framestore.
 * For selecting LUTs and matrices in their respective libraries use
 * OpenAPI::OAIPipelineStages(each OAIStage within has a library entry)
 *
 * In the demo's UI, a blank line in the list represents an empty slot in the libary
 *
 * This demo does not constantly update the library so if it is modified somewhere
 * else it will only get updated when an image is uploaded.
 *
 */

#include "dialog.h"
#include "ui_dialog.h"
#include <QFileDialog>
#include <QDebug>
#include <QElapsedTimer>
#include <QMessageBox>
#include <QMutexLocker>
#include "tiffio.h"

using namespace OpenAPI;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent),
      _cbConnected(false),
      _fileDownloader(nullptr),
      _ui(new Ui::Dialog)
{
    _api.useBasicAuth("admin","admin");
    _ui->setupUi(this);

	setWindowFlags(Qt::WindowMinMaxButtonsHint | Qt::WindowCloseButtonHint);

    // UI related Code
    connect(_ui->ipAddressLineEdit,&QLineEdit::editingFinished,this,&Dialog::ipAddressEdited);
    connect(_ui->uploadImageButton,&QPushButton::pressed,this,&Dialog::handleUploadImageButton);
    connect(_ui->downloadImageButton,&QPushButton::pressed,this,&Dialog::handleDownloadImageButton);
    connect(_ui->selectImageButton,&QPushButton::pressed,this,&Dialog::handleSelectImageButton);
    connect(_ui->libraryList,&QListWidget::itemDoubleClicked,this,&Dialog::handleSelectImageButton);

    // API related slots
    connect(&_api, &OAIDefaultApi::uploadFileSignal, this, &Dialog::handleUploadFile);
    connect(&_api, &OAIDefaultApi::uploadFileSignalE, this, &Dialog::handleUploadFileError);

    connect(&_api, &OAIDefaultApi::getImageLibrarySignal, this, &Dialog::handleGetImageLibrary);
    connect(&_api, &OAIDefaultApi::getImageLibrarySignalE, this, &Dialog::handleGetImageLibrary);

    _ui->uploadImageButton->setToolTip("Select Image to upload to ColorBox");
    _ui->downloadImageButton->setToolTip("Download Image from ColorBox to demos bin directory");
    _ui->selectImageButton->setToolTip("Select Image on ColorBox for FrameStore");

    recallSettings();
    ipAddressEdited();

    this->setFocus();
}

Dialog::~Dialog()
{
    saveSettings();
    delete _ui;
}


void Dialog::recallSettings()
{
    QSettings settings(QSettings::UserScope, "aja", "ColorBoxLibraryExample");
    _ui->ipAddressLineEdit->setText(settings.value("IPAddress").toString());

}

void Dialog::saveSettings()
{
    QSettings settings(QSettings::UserScope, "aja", "ColorBoxLibraryExample");
    settings.setValue("IPAddress",_ui->ipAddressLineEdit->text());

}

void Dialog::ipAddressEdited()
{
    qDebug() << "IP Address" << _ui->ipAddressLineEdit->displayText().simplified();

    if ( _currentIPAddress == _ui->ipAddressLineEdit->displayText().simplified())
        return;

    _cbConnected = false;

    _currentIPAddress = _ui->ipAddressLineEdit->displayText().simplified();
    _api.setUrlForServers(_currentIPAddress);

    // Get current image libary
    _api.getImageLibrary();

}


void Dialog::handleGetImageLibrary(QList<OpenAPI::OAILibraryEntry> summary)
{
    QMutexLocker lock(&_libraryMutex);

    _cbConnected = true;
    _ui->connectLabel->setText("CONNECTED");

    _ui->libraryList->clear();
    int entryNumber = 1;
    foreach (const OpenAPI::OAILibraryEntry entry, summary)
    {
        QListWidgetItem *newLibraryItem = new QListWidgetItem;
        newLibraryItem->setText(entry.getFileName());
        newLibraryItem->setIcon(this->style()->standardIcon(QStyle::SP_ArrowForward));
        _ui->libraryList->insertItem(entryNumber,newLibraryItem );
        entryNumber++;
    }

    _ui->libraryList->setCurrentRow(0);

    // Enable Framestore(obviously optional).
    OAIFrameStore frameStore;
    frameStore.setEnabled(true);
    frameStore.setDynamic(false);
    _api.setFrameStore(frameStore);

}

void Dialog::handleGetImageLibraryError(QList<OpenAPI::OAILibraryEntry> summary,QNetworkReply::NetworkError error_type, QString error_str)
{
    Q_UNUSED(summary)
    Q_UNUSED(error_type)

    qDebug() << error_str;
    _ui->connectLabel->setText("NOT CONNECTED");
    _cbConnected = false;

}

void Dialog::handleUploadImageButton()
{
    QMutexLocker lock(&_libraryMutex);

    if ( _cbConnected == false )
        return;

    QString fileName = QFileDialog::getOpenFileName(this, tr("Choose a File to Upload"),
                                                    ".",
                                                    tr(".image Files (*.tif *.tiff *.png *.jpg)"));
    if ( fileName.length() == 0 )
        return;

    if ( _ui->libraryList->currentRow() == -1 )
    {
        // No entry chosen in library list
        QMessageBox msgBox;
        msgBox.setText("Select an location in the library list upload to.");
        msgBox.exec();

    }
    else
    {
        int entryChoice = _ui->libraryList->currentRow()+1;
        OAIHttpFileElement fileElement;
        fileElement.setFileName(fileName);
        QString fileType = "image"; // other choices are lut_1d, lut_3d, matrix
        _api.uploadFile(fileElement,fileType,entryChoice);
    }

}


void Dialog::handleUploadFile()
{
    // Refresh Library List
    _api.getImageLibrary();
}

void Dialog:: handleUploadFileError(QNetworkReply::NetworkError error_type, QString error_str)
{
    qDebug() << error_str;
}

void Dialog::handleDownloadImageButton()
{
    QMutexLocker lock(&_libraryMutex);

    if ( _cbConnected == false )
        return;

    if ( _ui->libraryList->currentRow() == -1 )
    {
        // No entry chosen in library list
        QMessageBox msgBox;
        msgBox.setText("Select an image from library list to download");
        msgBox.exec();

    }
    else
    {
        int entryNumber = _ui->libraryList->currentRow()+1;
        QListWidgetItem* item =  _ui->libraryList->currentItem();
        QString fileName = item->text();

        if ( fileName.isEmpty() )
            return;

        // Just use http download
        // im for image
        // 1d for 1dlut
        // 3d for 3dlut
        // mx for matrix

        QString urlName = QStringLiteral("http://%1/library/im/%2/%3").arg(_currentIPAddress).arg(entryNumber, 2, 10, QLatin1Char('0')).arg(fileName);
        QUrl imageUrl(urlName);
        if ( _fileDownloader ) {delete _fileDownloader; _fileDownloader=nullptr;}
        _fileDownloader = new FileDownloader(imageUrl, fileName,  this);
        connect(_fileDownloader, SIGNAL (downloaded()), this, SLOT (downLoadImage()));

    }

}

void Dialog::downLoadImage()
{
    QByteArray ba = _fileDownloader->downloadedData();
    QFile file(_fileDownloader->getFileName()); // will write to bin directory.

    if(file.open(QIODevice::WriteOnly))
    {
         file.write(ba);
         file.close();
    }

}

void Dialog::handleSelectImageButton()
{
    QMutexLocker lock(&_libraryMutex);

    if ( _cbConnected == false )
        return;

    if ( _ui->libraryList->currentRow() == -1 )
    {
        QMessageBox msgBox;
        msgBox.setText("Select a location in the library list.");
        msgBox.exec();
    }
    else
    {
        qint32 entryChoice = _ui->libraryList->currentRow()+1;
        QListWidgetItem* item =  _ui->libraryList->currentItem();
        QString fileName = item->text();

        if ( !fileName.isEmpty() )
        {
            OpenAPI::OAIFrameStore frameStore;
            frameStore.setLibraryEntry(entryChoice);
            _api.setFrameStore(frameStore);
        }
    }

}

void Dialog::keyPressEvent(QKeyEvent *event)
{
    if(  (event->key() == Qt::Key_Return) )
    {
         handleSelectImageButton();
    }

}


