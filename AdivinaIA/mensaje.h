#ifndef MENSAJE_H
#define MENSAJE_H
#include "juego.h"
#include <QDialog>

namespace Ui {
class Mensaje;
}

class Mensaje : public QDialog
{
    Q_OBJECT

public:

    Juego* juego;

    explicit Mensaje(QWidget *parent = nullptr);
    ~Mensaje();

    void showMensaje();
    void setJuego(Juego*);

private slots:

    void on_btnAceptar_clicked();

private:
    Ui::Mensaje *ui;
};

#endif // MENSAJE_H
