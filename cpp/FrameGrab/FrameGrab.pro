QT += core gui websockets network

TARGET = FrameGrab
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
win32::LIBS += -L$$DESTDIR/ -ltiff
unix:!macx:LIBS += -ltiff
macx::LIBS += -L/usr/local/lib/ -ltiff

INCLUDEPATH += $$COMMON_ROOT
INCLUDEPATH += $$API_ROOT
INCLUDEPATH += $$NTV2_ROOT/ajalibraries
INCLUDEPATH += $$NTV2_ROOT/ajalibraries/ajantv2/includes

# To support NTV2 ANC related routines
# Need to install NTV2 sdk to cpp/ntv2sdk
# For example
# https://github.com/aja-video/ntv2/releases/tag/v16.2-bugfix5
# From the Source code zip or tar.gz file copy contents to cpp/ntv2sdk
#  so you have cpp/ntv2sdk/ajalibraries
exists ($$NTV2_ROOT) {
DEFINES += SUPPORT_ANC
INCLUDEPATH += $$NTV2_ROOT/ajalibraries
INCLUDEPATH += $$NTV2_ROOT/ajalibraries/ajantv2/includes

#For Windows
#https://github.com/aja-video/ntv2/releases/download/v16.2-bugfix5/ntv2_16_2_b3_libs_windows_x64.zip
#copy Debug and Release .lib and .dll from zip file demos/cpp/bin
win32:debug:LIBS += -L$$DESTDIR/ -lajantv2_16d
win32:release:LIBS += -L$$DESTDIR/ -lajantv2_16


#For Linux
#https://github.com/aja-video/ntv2/releases/download/v16.2-bugfix5/ntv2_16_2_b3_libs_linux_x64.tar.gz
#copy Debug and Release .so from  cpp/bin directory
#and need to add '.' to LD_LIBRARY_PATH
unix:!macx:debug:LIBS += -L$$DESTDIR/ -lajantv2_16d
unix:!macx:release:LIBS += -L$$DESTDIR/ -lajantv2_16

#Mac
#https://github.com/aja-video/ntv2/releases/download/v16.2-bugfix5/ntv2_16_2_b3_libs_mac_arm64_x64.tar.gz
#copy correct Debug and Release .dylib from  cpp/bin directory
macx:debug:LIBS += -L$$DESTDIR/ -lajantv2_16d
macx:release:LIBS += -L$$DESTDIR/ -lajantv2_16
}
win32:INCLUDEPATH += $$PWD/../common/tiff
macx:INCLUDEPATH += /usr/local/include

