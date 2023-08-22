#-------------------------------------------------
#
# Project created by QtCreator 2020-03-09T14:55:53
#
#-------------------------------------------------
# 使用qtxlsx源代码
include(qtxlsx/src/xlsx/qtxlsx.pri)

QT       += core gui charts network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
#CONFIG += c++11
TARGET = 8ToPythonWindows
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        dialog.cpp \
        humidity.cpp \
        main.cpp \
        mainwindow.cpp \
        temperature.cpp

HEADERS += \
        PytheradStateLock.h \
        dialog.h \
        humidity.h \
        mainwindow.h \
        temperature.h

FORMS += \
        dialog.ui \
        humidity.ui \
        mainwindow.ui \
        temperature.ui

SUBDIRS += \
    ../qtxlsx/src/src.pro

DISTFILES +=






win32: LIBS += -LC:/Users/32063/AppData/Local/Programs/Python/Python39/libs/ -lpython39

INCLUDEPATH += C:/Users/32063/AppData/Local/Programs/Python/Python39/include
DEPENDPATH += C:/Users/32063/AppData/Local/Programs/Python/Python39/include
