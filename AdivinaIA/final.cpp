#include "final.h"
#include "ui_final.h"

Final::Final(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Final)
{
    ui->setupUi(this);
}

Final::~Final()
{
    delete ui;
}

void Final::setJuego(Juego* _juego){
    juego = _juego;
}
