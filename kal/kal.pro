TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    funcstup.cpp \
    funcsym.cpp \
<<<<<<< HEAD
    program.cpp \
    broba.cpp
=======
    program.cpp
>>>>>>> origin

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    funcstup.h \
<<<<<<< HEAD
    funcsym.h \
    broba.h
=======
    funcsym.h
>>>>>>> origin

