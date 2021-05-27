/********************************************************************************
** Form generated from reading UI file 'Ingresar.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGRESAR_H
#define UI_INGRESAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Final
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Final)
    {
        if (Final->objectName().isEmpty())
            Final->setObjectName(QString::fromUtf8("Final"));
        Final->resize(800, 600);
        menubar = new QMenuBar(Final);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Final->setMenuBar(menubar);
        centralwidget = new QWidget(Final);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Final->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Final);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Final->setStatusBar(statusbar);

        retranslateUi(Final);

        QMetaObject::connectSlotsByName(Final);
    } // setupUi

    void retranslateUi(QMainWindow *Final)
    {
        Final->setWindowTitle(QCoreApplication::translate("Final", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Final: public Ui_Final {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGRESAR_H
