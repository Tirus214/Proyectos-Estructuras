/********************************************************************************
** Form generated from reading UI file 'partida.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTIDA_H
#define UI_PARTIDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Partida
{
public:
    QLabel *lblPregunta;
    QPushButton *btnSi;
    QPushButton *btnNo;

    void setupUi(QDialog *Partida)
    {
        if (Partida->objectName().isEmpty())
            Partida->setObjectName(QString::fromUtf8("Partida"));
        Partida->resize(582, 300);
        lblPregunta = new QLabel(Partida);
        lblPregunta->setObjectName(QString::fromUtf8("lblPregunta"));
        lblPregunta->setGeometry(QRect(120, 80, 341, 41));
        lblPregunta->setAlignment(Qt::AlignCenter);
        btnSi = new QPushButton(Partida);
        btnSi->setObjectName(QString::fromUtf8("btnSi"));
        btnSi->setGeometry(QRect(170, 200, 80, 25));
        btnNo = new QPushButton(Partida);
        btnNo->setObjectName(QString::fromUtf8("btnNo"));
        btnNo->setGeometry(QRect(330, 200, 80, 25));

        retranslateUi(Partida);

        QMetaObject::connectSlotsByName(Partida);
    } // setupUi

    void retranslateUi(QDialog *Partida)
    {
        Partida->setWindowTitle(QCoreApplication::translate("Partida", "Dialog", nullptr));
        lblPregunta->setText(QCoreApplication::translate("Partida", "<html><head/><body><p>Pregunta</p></body></html>", nullptr));
        btnSi->setText(QCoreApplication::translate("Partida", "Si", nullptr));
        btnNo->setText(QCoreApplication::translate("Partida", "No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Partida: public Ui_Partida {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTIDA_H
