TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    op_float.c \
    op_int.c

HEADERS += \
    op_float.h \
    op_int.h
