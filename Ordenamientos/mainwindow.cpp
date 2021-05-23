#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    contenedor = new Contenedor();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::setContenedor(Contenedor* nuevo){
    contenedor = nuevo;
    imprimirElementos();
}

void MainWindow::imprimirElementos(){
    limpiarPantalla();
    for (int i=0; i<contenedor->n; i++){
        ui->txtNumeros->append(QString::number(contenedor->original[i]));
        ui->txtVector->append(QString::number(contenedor->vector[i]));
    }
    imprimir(contenedor->colaCircular->primero, ui->txtCola);
    imprimir(contenedor->listaDoble->primero, ui->txtLista);
    imprimir(contenedor->pila->primero, ui->txtPila);
}

void MainWindow::limpiarPantalla(){
    ui->txtCola->setText("");
    ui->txtLista->setText("");
    ui->txtPila->setText("");
    ui->txtVector->setText("");
    ui->txtNumeros->setText("");
}


void MainWindow::imprimir(Nodo* primero, QTextEdit* txtArea){
        if (primero != NULL){
            Nodo* tmp = primero;
            do{
                txtArea->append(QString::number(tmp->numero));
                tmp = tmp->siguiente;

            }while(tmp != primero);
        }
    }



void MainWindow::on_btnIntercambio_clicked(){
    contenedor->ordIntercambio();
    imprimirElementos();
}

void MainWindow::on_btnInsercion_clicked(){
    contenedor->ordInsercion();
    imprimirElementos();
}

void MainWindow::on_btnSeleccion_clicked(){
    contenedor->ordSeleccion();
    imprimirElementos();
}

void MainWindow::on_btnBurbuja_clicked(){
    contenedor->ordBurbuja();
    imprimirElementos();
}

void MainWindow::on_btnShell_clicked(){
    contenedor->ordShell();
    imprimirElementos();
}

void MainWindow::on_btnMergesort_clicked(){
    contenedor->ordMergesort();
    imprimirElementos();
}

void MainWindow::on_btnQuicksort_clicked(){
    contenedor->ordQuicksort();
    imprimirElementos();
}
void MainWindow::on_btnBinsort_clicked(){
    contenedor->ordBinsort();
    imprimirElementos();
}

void MainWindow::on_btnRadixsort_clicked(){
    contenedor->ordRadixsort();
    imprimirElementos();
}


void MainWindow::on_btnDesordenar_clicked(){
    contenedor->desordenar();
    imprimirElementos();
}
