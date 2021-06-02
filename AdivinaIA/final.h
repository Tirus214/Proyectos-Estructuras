#ifndef FINAL_H
#define FINAL_H
#include "juego.h"
#include <QDialog>

namespace Ui {
class Final;
}

class Final : public QDialog
{
    Q_OBJECT

public:
    Juego* juego;
    bool status;
    QString pregunta;
    QString respuesta;

    explicit Final(QWidget *parent = nullptr);
    ~Final();

    void setJuego(Juego*);

private slots:

    void on_btnAceptar_clicked();

private:
    Ui::Final *ui;
};

#endif // FINAL_H
