TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    funcstup.cpp \
    funcsym.cpp \
    program.cpp \
    broba.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    funcstup.h \
    funcsym.h \
    broba.h

