



QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#TARGET = Test2
#TEMPLATE = app

#DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arraydinamico.cpp \
    colacircular.cpp \
    contenedor.cpp \
    listadobleenlazada.cpp \
    main.cpp \
    mainwindow.cpp \
    nodo.cpp \
    ordenador.cpp \
    pila.cpp

HEADERS += \
    arraydinamico.h \
    colacircular.h \
    contenedor.h \
    listadobleenlazada.h \
    mainwindow.h \
    nodo.h \
    ordenador.h \
    pila.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
