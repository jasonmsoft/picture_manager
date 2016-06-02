#-------------------------------------------------
#
# Project created by QtCreator 2016-06-01T14:34:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = picture_management
TEMPLATE = app


SOURCES += main.cpp\
        utils.cpp \
        pictureitem.cpp\
        mainwindow.cpp \
    textitem.cpp \
    hybirdscene.cpp



HEADERS  += mainwindow.h \
    const.h \
    utils.h \
    pictureitem.h \
    textitem.h \
    hybirdscene.h

FORMS    += mainwindow.ui
