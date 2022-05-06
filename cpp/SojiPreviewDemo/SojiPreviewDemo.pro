QT       += core gui websockets network

TARGET = SojiPreviewDemo
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

FORMS += \
    dialog.ui

DESTDIR = $$_PRO_FILE_PWD_/../bin



INCLUDEPATH += $$COMMON_ROOT
INCLUDEPATH += $$API_ROOT
INCLUDEPATH += $$NTV2_ROOT/ajalibraries
INCLUDEPATH += $$NTV2_ROOT/ajalibraries/ajantv2/includes

# To support NTV2 ANC related routines
# Need to install NTV2 sdk to sojiremotedemos/ntv2sdk
exists ($$NTV2_ROOT) {
DEFINES += SUPPORT_ANC
#For Windows
#copy .lib and .dll from ntv2sdk\bin\libajantv2dll_16\x64\Release_MD to sojiremotedemos/bin directory
win32:LIBS += -L$$DESTDIR/ -llibajantv2dll
#win32:debug:LIBS += -L$$DESTDIR/ -llibajantv2dlld


#For Linux
#copy .so from ntv2sdk/lib/gcc_5_1_and_after/libajantv2_16.so to sojiremotedemos/bin directory and rename libajantv2.so
#and need to add '.' to LD_LIBRARY_PATH
unix:!macx::LIBS += -L$$DESTDIR/ -lajantv2

#todo Mac
#macx::LIBS += -L$$DESTDIR/ -lajantv2
}
win32:INCLUDEPATH += $$PWD/../common/tiff

