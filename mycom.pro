#-------------------------------------------------
#
# Project created by QtCreator 2016-02-28T18:18:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mycom
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qextserialbase.cpp \
    qextserialport.cpp \
    win_qextserialport.cpp \
    Forms/aboutdialog.cpp

HEADERS  += mainwindow.h \
    qextserialbase.h \
    qextserialport.h \
    win_qextserialport.h \
    Forms/aboutdialog.h

FORMS    += mainwindow.ui \
    Forms/aboutdialog.ui

RESOURCES += \
    resource.qrc

RC_FILE += icon.rc
