#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setJuego(Juego* _juego){
    juego = _juego;
}


void MainWindow::on_btnIniciar_clicked(){
    this->hide();
    partida.setModal(true);
    partida.setJuego(juego);
    partida.exec();
    this->show();
}

void MainWindow::on_btnGuardar_clicked(){

}

void MainWindow::on_btnSalir_clicked(){
    this->close();
}
