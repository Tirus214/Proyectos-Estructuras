/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnIniciar;
    QPushButton *btnGuardar;
    QPushButton *btnSalir;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(394, 291);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnIniciar = new QPushButton(centralwidget);
        btnIniciar->setObjectName(QString::fromUtf8("btnIniciar"));
        btnIniciar->setGeometry(QRect(70, 140, 80, 25));
        btnGuardar = new QPushButton(centralwidget);
        btnGuardar->setObjectName(QString::fromUtf8("btnGuardar"));
        btnGuardar->setGeometry(QRect(250, 140, 80, 25));
        btnSalir = new QPushButton(centralwidget);
        btnSalir->setObjectName(QString::fromUtf8("btnSalir"));
        btnSalir->setGeometry(QRect(160, 180, 80, 25));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 30, 71, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 80, 171, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 394, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnIniciar->setText(QCoreApplication::translate("MainWindow", "Iniciar", nullptr));
        btnGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
        btnSalir->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Adivina IA", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\"Por favor piense en algo...\"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
