#-------------------------------------------------
#
# Project created by QtCreator 2017-04-14T18:45:11
#
#-------------------------------------------------

QT       -= core gui

TARGET = ADT
TEMPLATE = lib
CONFIG += staticlib

SOURCES += adt.cpp

HEADERS += adt.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
