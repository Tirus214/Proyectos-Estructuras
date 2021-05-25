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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *txtNumeros;
    QLabel *label;
    QTextEdit *txtCola;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *txtPila;
    QLabel *label_4;
    QTextEdit *txtLista;
    QLabel *label_5;
    QTextEdit *txtVector;
    QPushButton *btnInsercion;
    QPushButton *btnIntercambio;
    QPushButton *btnSeleccion;
    QPushButton *btnBurbuja;
    QPushButton *btnShell;
    QPushButton *btnMergesort;
    QPushButton *btnQuicksort;
    QPushButton *btnBinsort;
    QPushButton *btnRadixsort;
    QPushButton *btnDesordenar;
    QLabel *label_6;
    QLabel *lblIntercambio;
    QLabel *lblSeleccion;
    QLabel *lblInsercion;
    QLabel *lblBurbuja;
    QLabel *lblShell;
    QLabel *lblMergsort;
    QLabel *lblQuicksort;
    QLabel *lblBinsort;
    QLabel *lblRadixsort;
    QLabel *label_16;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1063, 698);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        txtNumeros = new QTextEdit(centralwidget);
        txtNumeros->setObjectName(QString::fromUtf8("txtNumeros"));
        txtNumeros->setGeometry(QRect(40, 90, 111, 421));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 50, 121, 31));
        txtCola = new QTextEdit(centralwidget);
        txtCola->setObjectName(QString::fromUtf8("txtCola"));
        txtCola->setGeometry(QRect(180, 90, 111, 421));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 50, 81, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 50, 31, 31));
        txtPila = new QTextEdit(centralwidget);
        txtPila->setObjectName(QString::fromUtf8("txtPila"));
        txtPila->setGeometry(QRect(330, 90, 111, 421));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(510, 50, 71, 31));
        txtLista = new QTextEdit(centralwidget);
        txtLista->setObjectName(QString::fromUtf8("txtLista"));
        txtLista->setGeometry(QRect(480, 90, 121, 421));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(670, 50, 41, 31));
        txtVector = new QTextEdit(centralwidget);
        txtVector->setObjectName(QString::fromUtf8("txtVector"));
        txtVector->setGeometry(QRect(640, 90, 111, 421));
        btnInsercion = new QPushButton(centralwidget);
        btnInsercion->setObjectName(QString::fromUtf8("btnInsercion"));
        btnInsercion->setGeometry(QRect(800, 190, 80, 25));
        btnIntercambio = new QPushButton(centralwidget);
        btnIntercambio->setObjectName(QString::fromUtf8("btnIntercambio"));
        btnIntercambio->setGeometry(QRect(800, 90, 80, 25));
        btnSeleccion = new QPushButton(centralwidget);
        btnSeleccion->setObjectName(QString::fromUtf8("btnSeleccion"));
        btnSeleccion->setGeometry(QRect(800, 140, 80, 25));
        btnBurbuja = new QPushButton(centralwidget);
        btnBurbuja->setObjectName(QString::fromUtf8("btnBurbuja"));
        btnBurbuja->setGeometry(QRect(800, 240, 80, 25));
        btnShell = new QPushButton(centralwidget);
        btnShell->setObjectName(QString::fromUtf8("btnShell"));
        btnShell->setGeometry(QRect(800, 290, 80, 25));
        btnMergesort = new QPushButton(centralwidget);
        btnMergesort->setObjectName(QString::fromUtf8("btnMergesort"));
        btnMergesort->setGeometry(QRect(800, 340, 80, 25));
        btnQuicksort = new QPushButton(centralwidget);
        btnQuicksort->setObjectName(QString::fromUtf8("btnQuicksort"));
        btnQuicksort->setGeometry(QRect(800, 390, 80, 25));
        btnBinsort = new QPushButton(centralwidget);
        btnBinsort->setObjectName(QString::fromUtf8("btnBinsort"));
        btnBinsort->setGeometry(QRect(800, 440, 80, 25));
        btnRadixsort = new QPushButton(centralwidget);
        btnRadixsort->setObjectName(QString::fromUtf8("btnRadixsort"));
        btnRadixsort->setGeometry(QRect(800, 490, 80, 25));
        btnDesordenar = new QPushButton(centralwidget);
        btnDesordenar->setObjectName(QString::fromUtf8("btnDesordenar"));
        btnDesordenar->setGeometry(QRect(440, 550, 171, 41));
        QFont font;
        font.setBold(true);
        btnDesordenar->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(800, 50, 91, 31));
        lblIntercambio = new QLabel(centralwidget);
        lblIntercambio->setObjectName(QString::fromUtf8("lblIntercambio"));
        lblIntercambio->setGeometry(QRect(930, 90, 91, 31));
        lblIntercambio->setAutoFillBackground(false);
        lblSeleccion = new QLabel(centralwidget);
        lblSeleccion->setObjectName(QString::fromUtf8("lblSeleccion"));
        lblSeleccion->setGeometry(QRect(930, 140, 91, 31));
        lblSeleccion->setAutoFillBackground(false);
        lblInsercion = new QLabel(centralwidget);
        lblInsercion->setObjectName(QString::fromUtf8("lblInsercion"));
        lblInsercion->setGeometry(QRect(930, 190, 91, 31));
        lblInsercion->setAutoFillBackground(false);
        lblBurbuja = new QLabel(centralwidget);
        lblBurbuja->setObjectName(QString::fromUtf8("lblBurbuja"));
        lblBurbuja->setGeometry(QRect(930, 240, 91, 31));
        lblBurbuja->setAutoFillBackground(false);
        lblShell = new QLabel(centralwidget);
        lblShell->setObjectName(QString::fromUtf8("lblShell"));
        lblShell->setGeometry(QRect(930, 290, 91, 31));
        lblShell->setAutoFillBackground(false);
        lblMergsort = new QLabel(centralwidget);
        lblMergsort->setObjectName(QString::fromUtf8("lblMergsort"));
        lblMergsort->setGeometry(QRect(930, 340, 91, 31));
        lblMergsort->setAutoFillBackground(false);
        lblQuicksort = new QLabel(centralwidget);
        lblQuicksort->setObjectName(QString::fromUtf8("lblQuicksort"));
        lblQuicksort->setGeometry(QRect(930, 390, 91, 31));
        lblQuicksort->setAutoFillBackground(false);
        lblBinsort = new QLabel(centralwidget);
        lblBinsort->setObjectName(QString::fromUtf8("lblBinsort"));
        lblBinsort->setGeometry(QRect(930, 440, 91, 31));
        lblBinsort->setAutoFillBackground(false);
        lblRadixsort = new QLabel(centralwidget);
        lblRadixsort->setObjectName(QString::fromUtf8("lblRadixsort"));
        lblRadixsort->setGeometry(QRect(930, 490, 91, 31));
        lblRadixsort->setAutoFillBackground(false);
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(910, 50, 91, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1063, 25));
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
        label->setText(QCoreApplication::translate("MainWindow", "Numeros aleatorios", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Cola Circular", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Pila", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Lista Doble", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Vector", nullptr));
        btnInsercion->setText(QCoreApplication::translate("MainWindow", "Inserci\303\263n", nullptr));
        btnIntercambio->setText(QCoreApplication::translate("MainWindow", "Intercambio", nullptr));
        btnSeleccion->setText(QCoreApplication::translate("MainWindow", "Selecci\303\263n", nullptr));
        btnBurbuja->setText(QCoreApplication::translate("MainWindow", "Burbuja", nullptr));
        btnShell->setText(QCoreApplication::translate("MainWindow", "Shell", nullptr));
        btnMergesort->setText(QCoreApplication::translate("MainWindow", "Mergesort", nullptr));
        btnQuicksort->setText(QCoreApplication::translate("MainWindow", "Quicksort", nullptr));
        btnBinsort->setText(QCoreApplication::translate("MainWindow", "Binsort", nullptr));
        btnRadixsort->setText(QCoreApplication::translate("MainWindow", "Radixsort", nullptr));
        btnDesordenar->setText(QCoreApplication::translate("MainWindow", "Desordenar", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Ordenamiento", nullptr));
        lblIntercambio->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lblSeleccion->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lblInsercion->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lblBurbuja->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lblShell->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lblMergsort->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lblQuicksort->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lblBinsort->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lblRadixsort->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Tiempo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
