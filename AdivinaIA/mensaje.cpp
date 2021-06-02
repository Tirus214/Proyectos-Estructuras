#include "mensaje.h"
#include "ui_mensaje.h"

Mensaje::Mensaje(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Mensaje)
{
    ui->setupUi(this);
}

Mensaje::~Mensaje()
{
    delete ui;
}

void Mensaje::setJuego(Juego* _juego){
    juego = _juego;
    showMensaje();
}

void Mensaje::showMensaje(){
    if(juego->acerto)
        ui->lblMensaje->setText("¡ He acertado lo que pensaste B) !\nIntenta de nuevo");
    else
        ui->lblMensaje->setText("No he acertado lo que pensaste :(\n¡ Pero lo haré la proxima vez !");
}

void Mensaje::on_btnAceptar_clicked(){
    this->close();
}
