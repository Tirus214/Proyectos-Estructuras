#ifndef PARTIDA_H
#define PARTIDA_H
#include "juego.h"
#include <QDialog>

namespace Ui {
class Partida;
}

class Partida : public QDialog
{
    Q_OBJECT

public:
    Juego* juego;
    Nodo* raiz;

    explicit Partida(QWidget *parent = nullptr);
    ~Partida();

    void setJuego(Juego*);
    void showPregunta();

private slots:

    void on_btnSi_clicked();
    void on_btnNo_clicked();

private:
    Ui::Partida *ui;
};

#endif // PARTIDA_H
