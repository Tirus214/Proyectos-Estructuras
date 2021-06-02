#include "partida.h"
#include "ui_partida.h"

Partida::Partida(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Partida)
{
    ui->setupUi(this);
}

Partida::~Partida()
{
    delete ui;
}


void Partida::setJuego(Juego* _juego){
    juego = _juego;
    juego->acerto = 0;
    if(juego->actual != NULL)
        showPregunta();
    else
        this->close();
}

void Partida::showPregunta(){
    if(juego->actual->isHoja()){
        ui->lblPregunta->setText("¿Estaba pensando en un/a " + juego->actual->texto +"?");
    }
    else{
        ui->lblPregunta->setText(juego->actual->texto);
    }
}


void Partida::on_btnSi_clicked(){
    if(juego->actual->isHoja()){
        juego->acerto = 1;
        this->close();
    }
    else{
        juego->actual = juego->actual->hijoSi;
        showPregunta();
    }
}

void Partida::on_btnNo_clicked(){
    if(juego->actual->isHoja()){
        juego->acerto = 0;
        this->close();
    }
    else{
        juego->actual = juego->actual->hijoNo;
        showPregunta();
    }
}
