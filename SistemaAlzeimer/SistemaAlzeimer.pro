#-------------------------------------------------
#
# Project created by QtCreator 2014-09-25T11:07:41
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = SistemaAlzeimer
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    Persistencia/Arquivo.cpp \
    Interface/Telas.cpp \
    Negocio/Excecoes.cpp \
    Negocio/Lista.cpp \
    Negocio/Paciente.cpp \
    Negocio/Relatorios.cpp \
    Negocio/Tratamento.cpp

HEADERS += \
    Persistencia/Arquivo.h \
    Interface/Telas.h \
    Negocio/Excecoes.h \
    Negocio/Lista.h \
    Negocio/Paciente.h \
    Negocio/Relatorios.h \
    Negocio/Tratamento.h
