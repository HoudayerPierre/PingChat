#-------------------------------------------------
#
# Project created by QtCreator 2015-12-14T23:25:42
#
#-------------------------------------------------

QT       += core widgets network gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PingChat
TEMPLATE = app


SOURCES += main.cpp\
        pingchat_core.cpp \
    setting.cpp

HEADERS  += pingchat_core.h \
    setting.h

FORMS    += pingchat_core.ui \
    setting.ui
