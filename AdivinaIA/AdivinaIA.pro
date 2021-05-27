QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arbol.cpp \
    filemanager.cpp \
    final.cpp \
    juego.cpp \
    main.cpp \
    mainwindow.cpp \
    nodo.cpp \
    partida.cpp

HEADERS += \
    arbol.h \
    filemanager.h \
    final.h \
    juego.h \
    mainwindow.h \
    nodo.h \
    partida.h

FORMS += \
    final.ui \
    mainwindow.ui \
    partida.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
