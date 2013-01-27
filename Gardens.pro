#-------------------------------------------------
#
# Project created by QtCreator 2013-01-24T09:57:25
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Gardens
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    UI/qmainglwidget.cpp \
    UI/qtlogo.cpp \
    World/world.cpp \
    Utils/glutils.cpp

HEADERS  += mainwindow.h \
    UI/qmainglwidget.h \
    UI/qtlogo.h \
    World/world.h \
    Utils/glutils.h

FORMS    += mainwindow.ui

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../bullet-2.81-build/src/BulletDynamics/release/ -lBulletDynamics
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../bullet-2.81-build/src/BulletDynamics/debug/ -lBulletDynamics
else:unix: LIBS += -L$$PWD/../bullet-2.81-build/src/BulletDynamics/ -lBulletDynamics

INCLUDEPATH += $$PWD/../bullet-2.81/src
DEPENDPATH += $$PWD/../bullet-2.81/src

win32:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../bullet-2.81-build/src/BulletDynamics/release/BulletDynamics.lib
else:win32:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../bullet-2.81-build/src/BulletDynamics/debug/BulletDynamics.lib
else:unix: PRE_TARGETDEPS += $$PWD/../bullet-2.81-build/src/BulletDynamics/libBulletDynamics.a
