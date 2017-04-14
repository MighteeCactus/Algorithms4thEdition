#-------------------------------------------------
#
# Project created by QtCreator 2017-04-14T18:45:53
#
#-------------------------------------------------

QT       -= core gui

TARGET = Search
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    binarysearch.cpp

HEADERS += \
    binarysearch.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
