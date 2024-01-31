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
 * To upload an image to the library(tiff,png,jpg,dpx) see Dialog::handleUploadImageButton()
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
 * /amf/ AMF
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
    connect(_ui->uploadButton,&QPushButton::pressed,this,&Dialog::handleUploadButton);
    connect(_ui->downloadButton,&QPushButton::pressed,this,&Dialog::handleDownloadButton);
    connect(_ui->selectButton,&QPushButton::pressed,this,&Dialog::handleSelectButton);
    connect(_ui->libraryList,&QListWidget::itemDoubleClicked,this,&Dialog::handleSelectButton);
    connect(_ui->libraryTabWidget,&QTabWidget::currentChanged,this,&Dialog::handleLibraryTabChanged);

    // API related slots

    connect(&_api, &OAIDefaultApi::get1dLutLibrarySignal, this, &Dialog::handleGetLibrary);
    connect(&_api, &OAIDefaultApi::get1dLutLibrarySignalE, this, &Dialog::handleGetLibraryError);
    connect(&_api, &OAIDefaultApi::get3dLutLibrarySignal, this, &Dialog::handleGetLibrary);
    connect(&_api, &OAIDefaultApi::get3dLutLibrarySignalE, this, &Dialog::handleGetLibraryError);
    connect(&_api, &OAIDefaultApi::getMatrixLibrarySignal, this, &Dialog::handleGetLibrary);
    connect(&_api, &OAIDefaultApi::getMatrixLibrarySignalE, this, &Dialog::handleGetLibraryError);
    connect(&_api, &OAIDefaultApi::getImageLibrarySignal, this, &Dialog::handleGetLibrary);
    connect(&_api, &OAIDefaultApi::getImageLibrarySignalE, this, &Dialog::handleGetLibraryError);
    connect(&_api, &OAIDefaultApi::getOverlayLibrarySignal, this, &Dialog::handleGetLibrary);
    connect(&_api, &OAIDefaultApi::getOverlayLibrarySignalE, this, &Dialog::handleGetLibraryError);
    connect(&_api, &OAIDefaultApi::getAmfLibrarySignal, this, &Dialog::handleGetLibrary);
    connect(&_api, &OAIDefaultApi::getAmfLibrarySignalE, this, &Dialog::handleGetLibraryError);
    connect(&_api, &OAIDefaultApi::uploadFileSignal, this, &Dialog::handleUploadFile);
    connect(&_api, &OAIDefaultApi::uploadFileSignalE, this, &Dialog::handleUploadFileError);

    _ui->uploadButton->setToolTip("Select Image to upload to ColorBox");
    _ui->downloadButton->setToolTip("Download Image from ColorBox to demos bin directory");
    _ui->selectButton->setToolTip("Select Image on ColorBox for FrameStore");

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
    _ui->libraryTabWidget->setCurrentIndex(settings.value("LibraryTabIndex").toInt());

}

void Dialog::saveSettings()
{
    QSettings settings(QSettings::UserScope, "aja", "ColorBoxLibraryExample");
    settings.setValue("IPAddress",_ui->ipAddressLineEdit->text());
    settings.setValue("LibraryTabIndex",_ui->libraryTabWidget->currentIndex());

}


Dialog::LibaryTabEnum Dialog::getCurrentLibraryEnum()
{
    int index = _ui->libraryTabWidget->currentIndex();
    switch ( index )
    {
    case 0: return Dialog::OneDLUT;
    case 1: return Dialog::ThreeDLUT;
    case 2: return Dialog::MATRIX;
    case 3: return Dialog::IMAGE;
    case 4: return Dialog::OVERLAY;
    case 5: return Dialog::AMF;
    default: return Dialog::IMAGE;
    }
}

void Dialog::getCurrentLibrary()
{
    int index = _ui->libraryTabWidget->currentIndex();

    qDebug() << "Current Library" << index;
    switch ( index )
    {
    case Dialog::OneDLUT:
        _api.get1dLutLibrary();
        _ui->uploadButton->setText("Upload 1DLUT");
        _ui->downloadButton->setText("Download 1DLUT");
        _ui->selectButton->setText("Select 1DLUT");
    break;
    case Dialog::ThreeDLUT:
        _api.get3dLutLibrary();
        _ui->uploadButton->setText("Upload 3DLUT");
        _ui->downloadButton->setText("Download 3DLUT");
        _ui->selectButton->setText("Select 3DLUT");

    break;
    case Dialog::MATRIX:
        _api.getMatrixLibrary();
        _ui->uploadButton->setText("Upload Matrix");
        _ui->downloadButton->setText("Download Matrix");
        _ui->selectButton->setText("Select Matrix");
    break;
    case Dialog::IMAGE:
        _api.getImageLibrary();
        _ui->uploadButton->setText("Upload Image");
        _ui->downloadButton->setText("Download Image");
        _ui->selectButton->setText("Select Image");
    break;
    case Dialog::OVERLAY:
        _api.getOverlayLibrary();
        _ui->uploadButton->setText("Upload Overlay");
        _ui->downloadButton->setText("Download Overlay");
        _ui->selectButton->setText("Select Overlay");
    break;
    case Dialog::AMF:
        _api.getAmfLibrary();
        _ui->uploadButton->setText("Upload AMF File");
        _ui->downloadButton->setText("Download AMF File");
        _ui->selectButton->setText("Select AMF File");
    break;
    }

}

void Dialog::ipAddressEdited()
{
    qDebug() << "IP Address" << _ui->ipAddressLineEdit->displayText().simplified();

    if ( _currentIPAddress == _ui->ipAddressLineEdit->displayText().simplified())
        return;

    _cbConnected = false;

    _currentIPAddress = _ui->ipAddressLineEdit->displayText().simplified();
    _api.setUrlForServers(_currentIPAddress);

    // Get current libary based on chosen tab
    getCurrentLibrary();

}

void Dialog::handleLibraryTabChanged(int index)
{
    if ( _cbConnected)
         getCurrentLibrary();

}

void Dialog::handleGetLibrary(QList<OpenAPI::OAILibraryEntry> summary)
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

    // This part of course optional
    if ( getCurrentLibraryEnum() == Dialog::IMAGE)
    {
        // Enable Framestore if using FrameStore Library
        OAIFrameStore frameStore;
        frameStore.setEnabled(true);
        frameStore.setDynamic(false);
        _api.setFrameStore(frameStore);
    }
    else
    {
        // Else use the "Live" pipeline
        OAIFrameStore frameStore;
        frameStore.setEnabled(false);
        frameStore.setDynamic(false);
        _api.setFrameStore(frameStore);

    }

}

void Dialog::handleGetLibraryError(QList<OpenAPI::OAILibraryEntry> summary,QNetworkReply::NetworkError error_type, QString error_str)
{
    Q_UNUSED(summary)
    Q_UNUSED(error_type)

    qDebug() << error_str;
    _ui->connectLabel->setText("NOT CONNECTED");
    _cbConnected = false;

}

QString getUploadFileFilter(Dialog::LibaryTabEnum libEnum)
{
    switch ( libEnum )
    {
    case Dialog::LibaryTabEnum::OneDLUT:
        return QString("1D LUT Files (*.cube *.spi1d )");
        break;
    case Dialog::LibaryTabEnum::ThreeDLUT:
        return QString("3D LUT Files (*.cube *.spi3d )");
        break;
    case Dialog::LibaryTabEnum::MATRIX:
        return QString("Matrix Files (*.ajamtx *.spimtx )");
        break;
    case Dialog::LibaryTabEnum::IMAGE:
        return QString(".image Files (*.tif *.tiff *.png *.jpg *.dpx)");
        break;
    case Dialog::LibaryTabEnum::OVERLAY:
        return QString(".image Files (*.tif *.tiff *.png )");
        break;
    case Dialog::LibaryTabEnum::AMF:
        return QString("AMF Files (*.amf )");
        break;
    }
}
QString getCurrentFileAttribute(Dialog::LibaryTabEnum libEnum)
{
    switch ( libEnum )
    {
    case Dialog::LibaryTabEnum::OneDLUT:
        return QString("lut_1d");
        break;
    case Dialog::LibaryTabEnum::ThreeDLUT:
        return QString("lut_3d");
        break;
    case Dialog::LibaryTabEnum::MATRIX:
        return QString("matrix");
        break;
    case Dialog::LibaryTabEnum::IMAGE:
        return QString("image");
        break;
    case Dialog::LibaryTabEnum::OVERLAY:
        return QString("overlay");
        break;
    case Dialog::LibaryTabEnum::AMF:
        return QString("amf");
        break;
    }
}
void Dialog::handleUploadButton()
{
    QMutexLocker lock(&_libraryMutex);

    if ( _cbConnected == false )
        return;

    QString fileFilter = getUploadFileFilter(getCurrentLibraryEnum());
    QString fileName = QFileDialog::getOpenFileName(this, tr("Choose a File to Upload"),
                                                    ".",
                                                    fileFilter);
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
        if ( getCurrentLibraryEnum() != Dialog::AMF)
        {
            // Just upload 1 File.
            int entryChoice = _ui->libraryList->currentRow()+1;
            OAIHttpFileElement fileElement;
            fileElement.setFileName(fileName);
            QString fileType = getCurrentFileAttribute(getCurrentLibraryEnum());
            _api.uploadFile(fileElement,fileType,entryChoice);
        }
        else
        {
            // Potential Multiple files to be uploaded with AMF Upload
            QStringList filesToUpload = parseAMFFile(fileName);
        }
    }

}


void Dialog::handleUploadFile(QString summary)
{
    // Refresh Library List
    getCurrentLibrary();
}

void Dialog:: handleUploadFileError(QString summary, QNetworkReply::NetworkError error_type, QString error_str)
{
    qDebug() << error_str;
}

QString getCurrentFilePath(Dialog::LibaryTabEnum libEnum)
{
    switch ( libEnum )
    {
    case Dialog::LibaryTabEnum::OneDLUT:
        return QString("1d");
        break;
    case Dialog::LibaryTabEnum::ThreeDLUT:
        return QString("3d");
        break;
    case Dialog::LibaryTabEnum::MATRIX:
        return QString("mx");
        break;
    case Dialog::LibaryTabEnum::IMAGE:
        return QString("im");
        break;
    case Dialog::LibaryTabEnum::OVERLAY:
        return QString("ol");
        break;
    case Dialog::LibaryTabEnum::AMF:
        return QString("amf");
        break;
    }
}

void Dialog::handleDownloadButton()
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


        QString filePath = getCurrentFilePath(getCurrentLibraryEnum());
        QString urlName = QStringLiteral("http://%1/library/%2/%3/%4").arg(_currentIPAddress).arg(filePath).arg(entryNumber, 2, 10, QLatin1Char('0')).arg(fileName);
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

void Dialog::handleSelectButton()
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

        if ( !fileName.isEmpty())
        {
            Dialog::LibaryTabEnum libEnum = getCurrentLibraryEnum();

            switch ( libEnum)
            {
            case Dialog::OneDLUT:
            {
                OAIPipelineStages stages;
                OAIStage lutStage;
                lutStage.setDynamic(false);
                lutStage.setEnabled(true);
                lutStage.setLibraryEntry(entryChoice);
                switch (_ui->lut1dChoiceComboBox->currentIndex())
                {
                case 0: // "1DL1"
                    stages.setLut1d1(lutStage);
                    break;
                case 1: // "1DL2"
                    stages.setLut1d2(lutStage);
                    break;
                case 2: // "1DL3"
                    stages.setLut1d3(lutStage);
                    break;
                case 3: // "1DL4"
                    stages.setLut1d4(lutStage);
                    break;
                }

                 _api.setPipelineStages(stages);
                break;
            }
            case Dialog::ThreeDLUT:
            {
                OAIPipelineStages stages;
                OAIStage lutStage;
                lutStage.setDynamic(false);
                lutStage.setEnabled(true);
                stages.setLut3d1(lutStage);
                lutStage.setLibraryEntry(entryChoice);
                _api.setPipelineStages(stages);
                break;
            }
            case::Dialog::MATRIX:
            {
                OAIPipelineStages stages;
                OAIStage lutStage;
                lutStage.setDynamic(false);
                lutStage.setEnabled(true);
                lutStage.setLibraryEntry(entryChoice);
                switch (_ui->lut1dChoiceComboBox->currentIndex())
                {
                case 0: // "MX2"
                    stages.setM3x32(lutStage);
                    break;
                case 1: // "MX3"
                    stages.setM3x33(lutStage);
                    break;
                }
                _api.setPipelineStages(stages);

                break;
            }
            case Dialog::IMAGE:
            {
                OpenAPI::OAIFrameStore frameStore;
                frameStore.setLibraryEntry(entryChoice);
                _api.setFrameStore(frameStore);
                break;
            }
            case Dialog::OVERLAY:
            {
                break;
            }
            case Dialog::AMF:
            {
                break;
            }

            }
        }

    }

}

void Dialog::keyPressEvent(QKeyEvent *event)
{
    if(  (event->key() == Qt::Key_Return) )
    {
         handleSelectButton();
    }

}

#include <QtXml>
QList<QDomElement> findLookTransforms(QDomElement pipeLineElement)
{
    QList<QDomElement> lookTransformElements;
    QDomNodeList lookTransformNodes = pipeLineElement.elementsByTagName("aces:lookTransform");
    for ( int lookCount=0; lookCount<lookTransformNodes.count();lookCount++)
    {
        QDomNode lookTransferNode = lookTransformNodes.at(lookCount);
        if ( lookTransferNode.isElement())
        {
            QDomElement lookTransferElement = lookTransferNode.toElement();
            lookTransformElements.append(lookTransferElement);
        }

    }
    return lookTransformElements;
}

QDomElement findInputTransform(QDomElement pipeLineElement)
{
    QDomNodeList inputTransformNodes = pipeLineElement.elementsByTagName("aces:inputTransform");
    QDomElement inputTransformElement;
    if (inputTransformNodes.size() == 1 )
    {
        QDomNode inputTransformNode = inputTransformNodes.at(0);
        if ( inputTransformNode.isElement())
        {
            inputTransformElement = inputTransformNode.toElement();
        }

    }
    return  inputTransformElement;
}

QDomElement getPipelineElement(QString fileName)
{
    QDomDocument document;
    QDomElement pipelineElement;
    // Open a file for reading
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Failed to open the file for reading.";
        return pipelineElement;
    }
    else
    {
        // loading
        if(!document.setContent(&file))
        {
            qDebug() << "Failed to load the file for reading.";
            return pipelineElement;
        }
        file.close();
    }
    QDomElement root = document.firstChildElement();
    QDomNodeList pipelineNodes = root.elementsByTagName("aces:pipeline");
    if (pipelineNodes.size() == 1 )
    {
        QDomNode pipelineNode = pipelineNodes.at(0);
        if(pipelineNode.isElement())
        {
            pipelineElement = pipelineNode.toElement();

        }

    }

    return pipelineElement;

}

QStringList Dialog::parseAMFFile(QString fileName)
{
    qDebug() << "parseAMFFile" << fileName;

    QStringList fileList;
    // Start with AMF File
    fileList.push_back(fileName);

    QDir d = QFileInfo(fileName).absoluteDir();
    QString filePath=d.absolutePath();
    qDebug() << "Path" << filePath;

    QDomElement pipelineElement = getPipelineElement(fileName);
    if ( !pipelineElement.isElement())
    {
        qDebug() << "Pipeline Element Not Found";
        fileList.clear();
        return fileList;
    }

    QDomElement inputTranformElement = findInputTransform(pipelineElement);
    if ( inputTranformElement.isElement())
    {
        QDomNodeList fileNodes = inputTranformElement.elementsByTagName("aces:file");
        QDomNode fileNode = fileNodes.at(0);
        if ( fileNode.isElement())
        {
            QDomElement fileElement = fileNode.toElement();
            QString foundFileName = fileElement.text();
            QString fullFileName;
            QFileInfo fi(foundFileName);
            if (fi.exists() && fi.isFile())
            {
                fullFileName = foundFileName;
            }
            else
            {
                QDirIterator dirIt(filePath,QDirIterator::Subdirectories);
                while (dirIt.hasNext()) {
                    dirIt.next();
                    if (QFileInfo(dirIt.filePath()).isFile())
                        if ( dirIt.fileInfo().fileName() == foundFileName )
                        {
                            fullFileName =  dirIt.fileInfo().absoluteFilePath();
                            qDebug() << fullFileName;
                        }

                }
            }

            if ( fullFileName.size())
            {
                qDebug() << "Input File" << fullFileName;
            }
        }


    }
    QList<QDomElement> lookTransformElements = findLookTransforms(pipelineElement);
    qDebug() << "Num Looks " << lookTransformElements.size();
    for ( int lookNumber=0; lookNumber < lookTransformElements.size(); lookNumber++)
    {
        ;//loadLookTransform(lookTransformElements.at(lookNumber),config,grpTransform,filePath);
        QDomElement lookTransformElement = lookTransformElements.at(lookNumber);
        QDomElement fileElement =  lookTransformElement.firstChildElement("aces:file");
        if ( fileElement.isElement())
        {
            QString foundFileName = fileElement.text();
            QString fullFileName;
            QFileInfo fi(foundFileName);
            if (fi.exists() && fi.isFile())
            {
                fullFileName = foundFileName;
            }
            else
            {
                ///kluge but this will work
                if ( foundFileName.startsWith("./"))
                    foundFileName = foundFileName.remove("./");

                //qDebug() << fileName;
                QDirIterator dirIt(filePath,QDirIterator::Subdirectories);
                while (dirIt.hasNext()) {
                    dirIt.next();
//                    if (QFileInfo(dirIt.filePath()).isFile())
//                        qDebug() << dirIt.fileInfo().fileName() << fileName;
                    if ( dirIt.fileInfo().fileName() == foundFileName )
                    {
                        fullFileName =  dirIt.fileInfo().absoluteFilePath();
                        //qDebug() << fullFileName;
                    }

                }
            }

            if ( fullFileName.size())
            {
                qDebug() << "Look File" << fullFileName;
            }
        }

    }

    return fileList;
}
