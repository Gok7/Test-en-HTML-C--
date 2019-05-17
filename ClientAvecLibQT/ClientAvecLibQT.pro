#-------------------------------------------------
#
# Project created by QtCreator 2012-02-07T21:36:54
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = ClientAvecLibQT
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app



SOURCES += main.cpp


INCLUDEPATH +=C:\\QtSDK\\mingw\\include
LIBS += .\\libLibTCP.a
LIBS += C:\\QTSDK\\mingw\\lib\\libws2_32.a
