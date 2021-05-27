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
    raiz = juego->arbol->raiz;
    if(raiz != NULL)
        showPregunta();
    else
        this->close();
}

void Partida::showPregunta(){
    if(raiz->hijoSi == NULL & raiz->hijoNo == NULL){
        ui->lblPregunta->setText("¿Estaba pensando en un/a " + raiz->texto +"?");
    }
}


void Partida::on_btnSi_clicked(){

}

void Partida::on_btnNo_clicked(){

}
