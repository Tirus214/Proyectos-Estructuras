/********************************************************************************
** Form generated from reading UI file 'final.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINAL_H
#define UI_FINAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Final
{
public:
    QPushButton *btnAceptar;
    QLabel *lblPregunta;
    QLineEdit *txtLine;

    void setupUi(QDialog *Final)
    {
        if (Final->objectName().isEmpty())
            Final->setObjectName(QString::fromUtf8("Final"));
        Final->resize(508, 295);
        btnAceptar = new QPushButton(Final);
        btnAceptar->setObjectName(QString::fromUtf8("btnAceptar"));
        btnAceptar->setGeometry(QRect(230, 210, 80, 25));
        lblPregunta = new QLabel(Final);
        lblPregunta->setObjectName(QString::fromUtf8("lblPregunta"));
        lblPregunta->setGeometry(QRect(80, 70, 371, 51));
        lblPregunta->setAlignment(Qt::AlignCenter);
        txtLine = new QLineEdit(Final);
        txtLine->setObjectName(QString::fromUtf8("txtLine"));
        txtLine->setGeometry(QRect(130, 140, 271, 41));

        retranslateUi(Final);

        QMetaObject::connectSlotsByName(Final);
    } // setupUi

    void retranslateUi(QDialog *Final)
    {
        Final->setWindowTitle(QCoreApplication::translate("Final", "Dialog", nullptr));
        btnAceptar->setText(QCoreApplication::translate("Final", "Aceptar", nullptr));
        lblPregunta->setText(QCoreApplication::translate("Final", "<html><head/><body><p>Pregunta</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Final: public Ui_Final {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINAL_H
