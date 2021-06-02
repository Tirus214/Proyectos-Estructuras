/********************************************************************************
** Form generated from reading UI file 'mensaje.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENSAJE_H
#define UI_MENSAJE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Mensaje
{
public:
    QLabel *lblMensaje;
    QPushButton *btnAceptar;

    void setupUi(QDialog *Mensaje)
    {
        if (Mensaje->objectName().isEmpty())
            Mensaje->setObjectName(QString::fromUtf8("Mensaje"));
        Mensaje->resize(400, 271);
        lblMensaje = new QLabel(Mensaje);
        lblMensaje->setObjectName(QString::fromUtf8("lblMensaje"));
        lblMensaje->setGeometry(QRect(50, 40, 301, 101));
        lblMensaje->setAlignment(Qt::AlignCenter);
        btnAceptar = new QPushButton(Mensaje);
        btnAceptar->setObjectName(QString::fromUtf8("btnAceptar"));
        btnAceptar->setGeometry(QRect(160, 190, 80, 25));

        retranslateUi(Mensaje);

        QMetaObject::connectSlotsByName(Mensaje);
    } // setupUi

    void retranslateUi(QDialog *Mensaje)
    {
        Mensaje->setWindowTitle(QCoreApplication::translate("Mensaje", "Dialog", nullptr));
        lblMensaje->setText(QCoreApplication::translate("Mensaje", "TextLabel", nullptr));
        btnAceptar->setText(QCoreApplication::translate("Mensaje", "Aceptar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Mensaje: public Ui_Mensaje {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENSAJE_H
