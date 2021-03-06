#-------------------------------------------------
#
# Project created by QtCreator 2017-12-20T09:20:18
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SortingFiles
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
    main.cpp \
    mainwindow.cpp \
    View/homeview.cpp \
    View/mainhomeframe.cpp \
    View/home.cpp \
    Cell/cell_a.cpp \
    UI_files/form_a.cpp \
    UI_files/form_b.cpp \
    UI_files/form_c.cpp

HEADERS += \
    mainwindow.h \
    View/home.h \
    View/homeview.h \
    View/mainhomeframe.h \
    Cell/cell_a.h \
    UI_files/form_a.h \
    UI_files/form_b.h \
    UI_files/form_c.h

FORMS += \
        mainwindow.ui \
    UI_files/form_a.ui \
    UI_files/form_b.ui \
    UI_files/form_c.ui

DISTFILES += \
    Image/a001.jpg \
    Image/a002.jpg
