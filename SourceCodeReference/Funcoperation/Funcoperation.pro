TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    intop.c \
    floatop.c \
    primeop.c

HEADERS += \
    switch.h \
    intop.h \
    floatop.h \
    primeop.h
