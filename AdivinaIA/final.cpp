#include "final.h"
#include "ui_final.h"

Final::Final(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Final)
{
    status = 0;
    pregunta = "";
    respuesta = "";
    ui->setupUi(this);
}

Final::~Final()
{
    delete ui;
}

void Final::setJuego(Juego* _juego){
    juego = _juego;
    ui->lblPregunta->setText("Escriba lo que estaba pensando: ");
}


void Final::on_btnAceptar_clicked(){
    QString actual = ui->txtLine->text();
    if(actual != ""){
        if(!status){
            ui->txtLine->setText("");
            respuesta = actual;
            ui->lblPregunta->setText("Escriba una pregunta que correspondiente a este elemento: ");
            status = 1;
        }
        else{
            pregunta = actual;
            juego->arbol->insertarNuevo(juego->actual, pregunta, respuesta);
            status = 0;
            ui->txtLine->setText("");
            this->close();
        }
    }

}
