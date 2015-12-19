#-------------------------------------------------
#
# Project created by QtCreator 2015-12-14T23:25:42
#
#-------------------------------------------------

QT       += core widgets network gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PingChat
TEMPLATE = app


SOURCES += src/main.cpp\
    src/setting.cpp \
    src/client.cpp \
    src/pingchat_gui.cpp

HEADERS  += \
    src/setting.h \
    src/client.h \
    src/pingchat_gui.h


FORMS    += \
    src/setting.ui \
    src/pingchat_gui.ui
