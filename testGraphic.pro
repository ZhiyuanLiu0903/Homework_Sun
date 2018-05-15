#-------------------------------------------------
#
# Project created by QtCreator 2018-04-08T06:41:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testGraphic
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    House.cpp \
    Person.cpp

HEADERS  += mainwindow.h \
    House.h \
    Person.h

FORMS    += mainwindow.ui

RESOURCES += \
    images.qrc
