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
    imprimir(contenedor->colaCircular->array->primero, ui->txtCola);
    imprimir(contenedor->listaDoble->array->primero, ui->txtLista);
    imprimir(contenedor->pila->array->primero, ui->txtPila);
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
    ui->lblIntercambio->setText(QString::number(contenedor->duracion));
    imprimirElementos();
}

void MainWindow::on_btnInsercion_clicked(){
    contenedor->ordInsercion();
    ui->lblInsercion->setText(QString::number(contenedor->duracion));
    imprimirElementos();
}

void MainWindow::on_btnSeleccion_clicked(){
    contenedor->ordSeleccion();
    ui->lblSeleccion->setText(QString::number(contenedor->duracion));
    imprimirElementos();
}

void MainWindow::on_btnBurbuja_clicked(){
    contenedor->ordBurbuja();
    ui->lblBurbuja->setText(QString::number(contenedor->duracion));
    imprimirElementos();
}

void MainWindow::on_btnShell_clicked(){
    contenedor->ordShell();
    ui->lblShell->setText(QString::number(contenedor->duracion));
    imprimirElementos();
}

void MainWindow::on_btnMergesort_clicked(){
    contenedor->ordMergesort();
    ui->lblMergsort->setText(QString::number(contenedor->duracion));
    imprimirElementos();
}

void MainWindow::on_btnQuicksort_clicked(){
    contenedor->ordQuicksort();
    ui->lblQuicksort->setText(QString::number(contenedor->duracion));
    imprimirElementos();
}
void MainWindow::on_btnBinsort_clicked(){
    contenedor->ordBinsort();
    ui->lblBinsort->setText(QString::number(contenedor->duracion));
    imprimirElementos();
}

void MainWindow::on_btnRadixsort_clicked(){
    contenedor->ordRadixsort();
    ui->lblRadixsort->setText(QString::number(contenedor->duracion));
    imprimirElementos();
}


void MainWindow::on_btnDesordenar_clicked(){
    contenedor->desordenar();
    imprimirElementos();
}
