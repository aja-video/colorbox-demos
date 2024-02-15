/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
/*!
 * Librarian
 * The demo demostrates how to interface to a ColorBox Library. This example
 * This demo can be used to Upload and Download and Select a file on the
 * ColorBox 1DLUT,3DLUT and Matrix, Image, Overlay and AMF libraries
 *
 * To get a ColorBox library content this demo calls _Dialog::getCurrentLibrary()
 * to use the API to get the desired library.
 * o
 * This will generate a signal where you can capture the library items(see Dialog::handleGetLibrary)
 *
 * To upload an image something library(1d,3d,mx,im,ov,amf) see Dialog::handleUploadButton()
 *
 * To download an image from the library see Dialog::handleDownloadButton().
 * This will download the selected file to the local bin directory for the demos.
 * This just uses http download based on the file location on the colorbox library.
 * For example, http://192.168.1.140/library/im/05/image.jpg
 * or http://192.168.1.140/library/3d/01/ACESConfig1_2_SLog3to709.cube
 * /1d/ 1DLUT
 * /3d/ 3DLUT
 * /mx/ Matrix
 * /im/ Image
 * /ov/ Overlay - needs to be a 8 bit tiff or png with alpha channel
 * /amf/ AMF
 *
 * To select a library element to update the ColorBox see Dialog::handleSelectButton().
 * When you select this button, the selected file will be chosen.
 * For 1DLUTs and Matrices you need to select which Pipeline element(dropdowns in UI)
 *
 * In the demo's UI, a blank line in the list represents an empty slot in the libary
 *
 * This demo does not constantly update the library so if it is modified somewhere
 * else it will only get updated when a file is uploaded or you change libraries.
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
#include <QFontDatabase>
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
    connect(&_api, &OAIDefaultApi::uploadMultipleFilesSignal, this, &Dialog::handleUploadMultipleFiles);
    connect(&_api, &OAIDefaultApi::uploadMultipleFilesSignalE, this, &Dialog::handleUploadMultipleFilesError);

    _ui->uploadButton->setToolTip("Select Image to upload to ColorBox");
    _ui->downloadButton->setToolTip("Download Image from ColorBox to demos bin directory");
    _ui->selectButton->setToolTip("Select Image on ColorBox for FrameStore");

    recallSettings();
    ipAddressEdited();

    QFontMetrics fm(_ui->libraryList->fontMetrics());
    QFont cf = _ui->libraryList->font();
    cf.setPixelSize(17);
    _ui->libraryList->setFont(cf);
    _ui->libraryList->setSpacing(0);

    this->setFocus();
    setAcceptDrops(true);
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

void Dialog::dragEnterEvent( QDragEnterEvent *ev )
{
    if (ev->mimeData()->hasFormat("text/uri-list"))
        ev->acceptProposedAction();
    else
        ev->setAccepted( false );
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
    QString libraryName;
    _ui->downloadButton->setDisabled(false);
    _ui->matrixChoiceComboBox->setDisabled(true);
    _ui->lut1dChoiceComboBox->setDisabled(true);
    switch ( _ui->libraryTabWidget->currentIndex() )
    {
    case Dialog::OneDLUT:
        _api.get1dLutLibrary();
        libraryName = "1DLUT";
        _ui->lut1dChoiceComboBox->setDisabled(false);
    break;
    case Dialog::ThreeDLUT:
        _api.get3dLutLibrary();
         libraryName = "3DLUT";
    break;
    case Dialog::MATRIX:
        _api.getMatrixLibrary();
        libraryName = "Matrix";
        _ui->matrixChoiceComboBox->setDisabled(false);
    break;
    case Dialog::IMAGE:
        _api.getImageLibrary();
        libraryName = "Image";
    break;
    case Dialog::OVERLAY:
        _api.getOverlayLibrary();
        libraryName = "Overlay";
    break;
    case Dialog::AMF:
        _api.getAmfLibrary();
        _ui->downloadButton->setDisabled(true); // Need to download multiple files potentially
        libraryName = "AMF";
    break;
    }

    _ui->uploadButton->setText(QString("Upload %1 File").arg(libraryName));
    _ui->downloadButton->setText(QString("Download %1 File").arg(libraryName));
    _ui->selectButton->setText(QString("Select %1 File").arg(libraryName));

    _ui->uploadButton->setToolTip(QString("Upload %1  to ColorBox").arg(libraryName));
    _ui->downloadButton->setToolTip(QString("Download %1  from ColorBox").arg(libraryName));
    _ui->selectButton->setToolTip(QString("Select %1 on ColorBox").arg(libraryName));

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
        QString entryNumberString = QString::number(entryNumber).rightJustified(2,'0');
        QString libraryString = QString("%1 - %2").arg(entryNumberString).arg(entry.getFileName());
        newLibraryItem->setText(libraryString);
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
    default:
    case Dialog::LibaryTabEnum::OneDLUT:
        return QString("1D LUT Files (*.cube *.spi1d )");
        break;
    case Dialog::LibaryTabEnum::ThreeDLUT:
        return QString("3D LUT Files (*.cube *.3dl *.spi3d )");
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
    default:
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

void Dialog::dropEvent(QDropEvent *ev)
{
    qDebug() << "File Dropped";
    QList<QUrl> urls = ev->mimeData()->urls();
    if (urls.isEmpty())
        return;

    QString fileName = urls.first().toLocalFile();
    if (fileName.isEmpty())
        return;

    qDebug() << "Drop FileName" << fileName;

    QFileInfo fi(fileName);
    QString extension = QString(".%1").arg(fi.suffix());
    QString uploadFileFilter = getUploadFileFilter(getCurrentLibraryEnum());
    if ( uploadFileFilter.contains(extension))
    {
        uploadFile(fileName);
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

    uploadFile(fileName);


}

void Dialog::uploadFile(QString fileName)
{
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
        if ( getCurrentLibraryEnum() != Dialog::AMF)
        {
            // Just upload 1 File.
            OAIHttpFileElement fileElement;
            fileElement.setFileName(fileName);
            QString fileType = getCurrentFileAttribute(getCurrentLibraryEnum());
            _api.uploadFile(fileElement,fileType,entryChoice);
        }
        else
        {
            // Potential Multiple files to be uploaded with AMF Upload
            QStringList filesToUpload = parseAMFFile(fileName);
            int numFilesToUpload =filesToUpload.size();
            if (numFilesToUpload)
            {
                QString fileType = getCurrentFileAttribute(getCurrentLibraryEnum());
                QList<OAIHttpFileElement> fileElements;
                for ( int i=0; i<numFilesToUpload; i++ )
                {
                    OAIHttpFileElement fileElement;
                    qDebug() << "File to Upload" << filesToUpload.at(i);
                    fileElement.setFileName(filesToUpload.at(i));
                    fileElements.push_back(fileElement);
                }
                QFileInfo fi(fileName);
                QString selection = fi.fileName();
                _api.uploadMultipleFiles(fileElements,fileType,entryChoice,selection);
            }

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

void Dialog::handleUploadMultipleFiles(QString summary)
{
    // Refresh Library List
    getCurrentLibrary();
}

void Dialog:: handleUploadMultipleFilesError(QString summary, QNetworkReply::NetworkError error_type, QString error_str)
{
    qDebug() << error_str;
}

QString getCurrentFilePath(Dialog::LibaryTabEnum libEnum)
{
    switch ( libEnum )
    {
    default:
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
                lutStage.setLibraryEntry(entryChoice);
                lutStage.setDynamic(false);
                lutStage.setEnabled(true);
                stages.setLut3d1(lutStage);
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
                OpenAPI::OAIAcesConfig acesConfig;
                acesConfig.setAmfLibraryEntry(entryChoice);
                _api.setAcesConfig(acesConfig);
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

QStringList Dialog::parseAMFFile(QString fileName)
{
/////Read about QStringList::indexOf methods.
    qDebug() << "parseAMFFile" << fileName;

    QStringList fileList;
    // Start with AMF File
    fileList.push_back(fileName);
    QFile file(fileName);

    QDir d = QFileInfo(fileName).absoluteDir();
    QString filePath=d.absolutePath();


    file.open(QFile::ReadOnly|QFile::Text);
    QDomDocument dom;
    QString error;

    int line, column;

    if(!dom.setContent(&file, &error, &line, &column)) {
        qDebug() << "Error:" << error << "in line " << line << "column" << column;
        return fileList;
    }
    QDomNodeList nodes = dom.elementsByTagName("aces:file");
    for(int i = 0; i < nodes.count(); i++)
    {
        QDomNode elm = nodes.at(i);
        if(elm.isElement())
        {
            qDebug() << elm.toElement().tagName()
                     << " = "
                     <<  elm.toElement().text();
            QString foundFileName = elm.toElement().text();
            QString fullFileName;
            //Kluge needed for Windows.
            if ( foundFileName.startsWith("./"))
                foundFileName = foundFileName.remove("./");
            QDirIterator dirIt(filePath,QDirIterator::Subdirectories);
            while (dirIt.hasNext()) {
                dirIt.next();
                if ( dirIt.fileInfo().fileName() == foundFileName )
                {
                    fullFileName =  dirIt.fileInfo().absoluteFilePath();
                    //qDebug() << fullFileName;
                }

            }
            fileList.push_back(fullFileName);
        }
    }

    return fileList;


}
