TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    intcompute.c \
    floatcompute.c

HEADERS += \
    programint.h \
    programfloat.h
