QT += core gui websockets network

TARGET = RGBTriplet
TEMPLATE = app

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

PROJECT_ROOT = $$_PRO_FILE_PWD_
COMMON_ROOT = $$PROJECT_ROOT/../common
API_ROOT = $$PROJECT_ROOT/../api
NTV2_ROOT = $$PROJECT_ROOT/../ntv2sdk

SOURCES += $$files($$PROJECT_ROOT/*.cpp)
HEADERS += $$files($$PROJECT_ROOT/*.h)
HEADERS += $$files($$COMMON_ROOT/*.h)
SOURCES +=$$files($$COMMON_ROOT/*.cpp)
include ($$API_ROOT/client.pri)

win32::DEFINES += MSWindows
unix:!macx::DEFINES += AJALinux
macx::DEFINES += AJAMac

FORMS += dialog.ui

DESTDIR = $$_PRO_FILE_PWD_/../bin

INCLUDEPATH += $$COMMON_ROOT
INCLUDEPATH += $$API_ROOT



