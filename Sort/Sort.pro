#-------------------------------------------------
#
# Project created by QtCreator 2017-04-14T18:45:39
#
#-------------------------------------------------

QT       -= core gui

TARGET = Sort
TEMPLATE = lib
CONFIG += staticlib

SOURCES += sort.cpp

HEADERS += sort.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
