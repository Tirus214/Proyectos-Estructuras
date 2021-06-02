#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    juego = new Juego();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setJuego(Juego* _juego){
    juego = _juego;
}


void MainWindow::mostrarMensaje(){
    mensaje.setModal(true);
    mensaje.setJuego(juego);
    mensaje.exec();
}


void MainWindow::on_btnIniciar_clicked(){
    this->hide();
    partida.setModal(true);
    partida.setJuego(juego);
    partida.exec();
    if(!juego->acerto){
        final.setModal(true);
        final.setJuego(juego);
        final.exec();
    }
    mostrarMensaje();
    juego->reiniciar();
    this->show();
}

void MainWindow::on_btnGuardar_clicked(){
    juego->guardarArbol();
}

void MainWindow::on_btnSalir_clicked(){
    this->close();
}
