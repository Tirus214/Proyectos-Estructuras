#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cablera.h"
#include "ListaSimple.h"
#include "sleeper.h"
#include <QProcess>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ui->checkBox_16->setAutoFillBackground(true);
    ui->checkBox_17->setAutoFillBackground(true);
    ui->checkBox_18->setAutoFillBackground(true);
    ui->checkBox_19->setAutoFillBackground(true);
    ui->checkBox_20->setAutoFillBackground(true);
    ui->checkBox_21->setAutoFillBackground(true);
    ui->checkBox_22->setAutoFillBackground(true);
    ui->checkBox_23->setAutoFillBackground(true);
    ui->checkBox_24->setAutoFillBackground(true);
    ui->checkBox_25->setAutoFillBackground(true);
    ui->checkBox_26->setAutoFillBackground(true);
    ui->checkBox_27->setAutoFillBackground(true);
    ui->checkBox_28->setAutoFillBackground(true);
    ui->checkBox_29->setAutoFillBackground(true);
    ui->checkBox_30->setAutoFillBackground(true);
    ui->checkBox_31->setAutoFillBackground(true);
    ui->checkBox_32->setAutoFillBackground(true);
    ui->checkBox_33->setAutoFillBackground(true);
    ui->checkBox_34->setAutoFillBackground(true);

    QPalette pal = ui->checkBox_16->palette();
    pal.setColor(QPalette::Window, QColor(Qt::blue));

    ui->checkBox_16->setPalette(pal);
    ui->checkBox_17->setPalette(pal);
    ui->checkBox_18->setPalette(pal);
    ui->checkBox_19->setPalette(pal);
    ui->checkBox_20->setPalette(pal);
    ui->checkBox_21->setPalette(pal);
    ui->checkBox_22->setPalette(pal);
    ui->checkBox_23->setPalette(pal);
    ui->checkBox_24->setPalette(pal);
    ui->checkBox_25->setPalette(pal);
    ui->checkBox_26->setPalette(pal);
    ui->checkBox_27->setPalette(pal);
    ui->checkBox_28->setPalette(pal);
    ui->checkBox_29->setPalette(pal);
    ui->checkBox_30->setPalette(pal);
    ui->checkBox_31->setPalette(pal);
    ui->checkBox_32->setPalette(pal);
    ui->checkBox_33->setPalette(pal);
    ui->checkBox_34->setPalette(pal);
}

MainWindow::~MainWindow()
{

    delete ui;
}

Cablera *cablera = new Cablera();
ListaSimple *lista = new ListaSimple();
ListaSimple *lista3 = new ListaSimple();
NodoLista *tmp = new NodoLista();
bool control = true;



void MainWindow::on_checkBox_stateChanged(int arg1)
{
}


void MainWindow::on_checkBox_2_stateChanged(int arg1)
{


}


void MainWindow::on_checkBox_3_stateChanged(int arg1)
{

}


void MainWindow::on_checkBox_4_stateChanged(int arg1)
{

}


void MainWindow::on_checkBox_5_stateChanged(int arg1)
{

}


void MainWindow::on_checkBox_6_stateChanged(int arg1)
{

}


void MainWindow::on_checkBox_7_stateChanged(int arg1)
{

}


void MainWindow::on_checkBox_8_stateChanged(int arg1)
{

}


void MainWindow::on_checkBox_9_stateChanged(int arg1)
{

}


void MainWindow::on_checkBox_10_stateChanged(int arg1)
{

}


void MainWindow::on_checkBox_11_stateChanged(int arg1)
{

}


void MainWindow::on_checkBox_12_stateChanged(int arg1)
{

}


void MainWindow::on_checkBox_14_stateChanged(int arg1)
{

}


void MainWindow::on_checkBox_15_stateChanged(int arg1)
{

}


void MainWindow::on_checkBox_13_stateChanged(int arg1)
{


}


void MainWindow::on_checkBox_13_clicked()
{
    qDebug()<< "GG";

}


void MainWindow::on_pushButton_clicked()
{

    if(ui->checkBox->isChecked())
        cablera->grafo->insetarNodo(1);

    if(ui->checkBox_2->isChecked())
        cablera->grafo->insetarNodo(2);

    if(ui->checkBox_3->isChecked())
        cablera->grafo->insetarNodo(3);

    if(ui->checkBox_4->isChecked())
        cablera->grafo->insetarNodo(4);

    if(ui->checkBox_5->isChecked())
        cablera->grafo->insetarNodo(5);
    if(ui->checkBox_6->isChecked())
        cablera->grafo->insetarNodo(6);
    if(ui->checkBox_7->isChecked())
        cablera->grafo->insetarNodo(7);
    if(ui->checkBox_8->isChecked())
        cablera->grafo->insetarNodo(8);
    if(ui->checkBox_9->isChecked())
        cablera->grafo->insetarNodo(9);
    if(ui->checkBox_10->isChecked())
        cablera->grafo->insetarNodo(10);
    if(ui->checkBox_11->isChecked())
        cablera->grafo->insetarNodo(11);
    if(ui->checkBox_12->isChecked())
        cablera->grafo->insetarNodo(12);

    if(ui->checkBox_13->isChecked())
    {
        cablera->grafo->insetarNodo(13);
        qDebug() << "AAA";
    }

    if(ui->checkBox_14->isChecked())
        cablera->grafo->insetarNodo(14);
    if(ui->checkBox_15->isChecked())
        cablera->grafo->insetarNodo(15);

    if(ui->label_2->isEnabled())
    {
        cablera->grafo->insetarArista(1,2,1);// origen, destino, peso
        lista->add(1);
    }

    if(ui->label_3->isEnabled())
    {
        cablera->grafo->insetarArista(2,3,5);//
        lista->add(5);
    }
    if(ui->label_4->isEnabled())
    {
        cablera->grafo->insetarArista(3,4,8);
        lista->add(8);
    }

    if(ui->label_5->isEnabled())
    {
        cablera->grafo->insetarArista(4,5,2);
        lista->add(2);
    }
    if(ui->label_6->isEnabled())
    {
        cablera->grafo->insetarArista(5,6,7);
        lista->add(7);
    }

    if(ui->label_7->isEnabled())
    {
        cablera->grafo->insetarArista(6,7,4);
        lista->add(4);
    }

    if(ui->label_8->isEnabled())
    {
        cablera->grafo->insetarArista(7,8,10);
        lista->add(10);
    }

    if(ui->label_9->isEnabled())
    {
        cablera->grafo->insetarArista(8,9,3);
        lista->add(3);
    }

    if(ui->label_10->isEnabled())
    {
        cablera->grafo->insetarArista(9,10,12);
        lista->add(12);
    }

    if(ui->label_11->isEnabled())
    {
        cablera->grafo->insetarArista(10,4,6);
        lista->add(6);
    }

    if(ui->label_12->isEnabled())
    {
        cablera->grafo->insetarArista(10,11,11);
        lista->add(11);
    }

    if(ui->label_13->isEnabled())
    {
        cablera->grafo->insetarArista(11,12,14);
        lista->add(14);
    }

    if(ui->label_14->isEnabled())
    {
        cablera->grafo->insetarArista(12,3,15);
        lista->add(15);
    }

    if(ui->label_15->isEnabled())
    {
        cablera->grafo->insetarArista(11,14,18);
        lista->add(18);
    }

    if(ui->label_16->isEnabled())
    {
        cablera->grafo->insetarArista(9,15,17);
        lista->add(17);
    }

    if(ui->label_17->isEnabled())
    {
        cablera->grafo->insetarArista(15,13,13);
        lista->add(13);
    }

    if(ui->label_18->isEnabled())
    {
        cablera->grafo->insetarArista(13,9,19);
        lista->add(19);
    }

    if(ui->label_19->isEnabled())
    {
        cablera->grafo->insetarArista(13,14,9);
        lista->add(9);
    }

    if(ui->label_20->isEnabled())
    {
        cablera->grafo->insetarArista(1,14,16);
        lista->add(16);
    }
    ListaSimple *lista2 = new ListaSimple();
    cablera->grafo->imprimirGrafo(lista2);
    lista->imprimir();

    ui->lineEdit_2->setText(QString::number(cablera->prim(ui->lineEdit->text().toInt(),lista2)));
    lista2->imprimir();

    ui->label_2->setEnabled(false);
    ui->label_3->setEnabled(false);
    ui->label_4->setEnabled(false);
    ui->label_5->setEnabled(false);
    ui->label_6->setEnabled(false);
    ui->label_7->setEnabled(false);
    ui->label_8->setEnabled(false);
    ui->label_9->setEnabled(false);
    ui->label_10->setEnabled(false);
    ui->label_11->setEnabled(false);
    ui->label_12->setEnabled(false);
    ui->label_13->setEnabled(false);
    ui->label_14->setEnabled(false);
    ui->label_15->setEnabled(false);
    ui->label_16->setEnabled(false);
    ui->label_17->setEnabled(false);
    ui->label_18->setEnabled(false);
    ui->label_19->setEnabled(false);
    ui->label_20->setEnabled(false);

    NodoLista *tmp = new NodoLista();
    tmp = lista2->primerNodo;
    while(tmp != NULL)
    {

        if(tmp->peso == 1)
            ui->label_2->setEnabled(true);
        else
            if(tmp->peso == 2)
                ui->label_5->setEnabled(true);
            else
                if(tmp->peso == 3)
                    ui->label_9->setEnabled(true);
                else
                    if(tmp->peso == 4)
                        ui->label_7->setEnabled(true);
                    else
                        if(tmp->peso == 5)
                            ui->label_3->setEnabled(true);
                        else
                            if(tmp->peso == 6)
                                ui->label_11->setEnabled(true);
                            else
                                if(tmp->peso == 7)
                                    ui->label_6->setEnabled(true);
                                else
                                    if(tmp->peso == 8)
                                        ui->label_4->setEnabled(true);
                                    else
                                        if(tmp->peso == 9)
                                            ui->label_19->setEnabled(true);
                                        else
                                            if(tmp->peso == 10)
                                                ui->label_8->setEnabled(true);
                                            else
                                                if(tmp->peso == 11)
                                                    ui->label_12->setEnabled(true);
                                                else
                                                    if(tmp->peso == 12)
                                                        ui->label_10->setEnabled(true);
                                                    else
                                                        if(tmp->peso == 13)
                                                            ui->label_17->setEnabled(true);
                                                        else
                                                            if(tmp->peso == 14)
                                                                ui->label_13->setEnabled(true);
                                                            else
                                                                if(tmp->peso == 15)
                                                                    ui->label_14->setEnabled(true);
                                                                else
                                                                    if(tmp->peso == 16)
                                                                        ui->label_20->setEnabled(true);
                                                                    else
                                                                        if(tmp->peso == 17)
                                                                            ui->label_16->setEnabled(true);
                                                                        else
                                                                            if(tmp->peso == 18)
                                                                                ui->label_15->setEnabled(true);
                                                                            else
                                                                                if(tmp->peso == 19)
                                                                                    ui->label_18->setEnabled(true);

    tmp = tmp->siguiente;
    }

}



void MainWindow::on_pushButton_2_clicked()
{

if(control)
{
    if(ui->checkBox->isChecked())
        cablera->grafo->insetarNodo(1);

    if(ui->checkBox_2->isChecked())
        cablera->grafo->insetarNodo(2);

    if(ui->checkBox_3->isChecked())
        cablera->grafo->insetarNodo(3);

    if(ui->checkBox_4->isChecked())
        cablera->grafo->insetarNodo(4);

    if(ui->checkBox_5->isChecked())
        cablera->grafo->insetarNodo(5);
    if(ui->checkBox_6->isChecked())
        cablera->grafo->insetarNodo(6);
    if(ui->checkBox_7->isChecked())
        cablera->grafo->insetarNodo(7);
    if(ui->checkBox_8->isChecked())
        cablera->grafo->insetarNodo(8);
    if(ui->checkBox_9->isChecked())
        cablera->grafo->insetarNodo(9);
    if(ui->checkBox_10->isChecked())
        cablera->grafo->insetarNodo(10);
    if(ui->checkBox_11->isChecked())
        cablera->grafo->insetarNodo(11);
    if(ui->checkBox_12->isChecked())
        cablera->grafo->insetarNodo(12);

    if(ui->checkBox_13->isChecked())
    {
        cablera->grafo->insetarNodo(13);
        qDebug() << "AAA";
    }

    if(ui->checkBox_14->isChecked())
        cablera->grafo->insetarNodo(14);
    if(ui->checkBox_15->isChecked())
        cablera->grafo->insetarNodo(15);

    if(ui->label_2->isEnabled())
    {
        cablera->grafo->insetarArista(1,2,1);// origen, destino, peso
        lista->add(1);
    }

    if(ui->label_3->isEnabled())
    {
        cablera->grafo->insetarArista(2,3,5);//
        lista->add(5);
    }
    if(ui->label_4->isEnabled())
    {
        cablera->grafo->insetarArista(3,4,8);
        lista->add(8);
    }

    if(ui->label_5->isEnabled())
    {
        cablera->grafo->insetarArista(4,5,2);
        lista->add(2);
    }
    if(ui->label_6->isEnabled())
    {
        cablera->grafo->insetarArista(5,6,7);
        lista->add(7);
    }

    if(ui->label_7->isEnabled())
    {
        cablera->grafo->insetarArista(6,7,4);
        lista->add(4);
    }

    if(ui->label_8->isEnabled())
    {
        cablera->grafo->insetarArista(7,8,10);
        lista->add(10);
    }

    if(ui->label_9->isEnabled())
    {
        cablera->grafo->insetarArista(8,9,3);
        lista->add(3);
    }

    if(ui->label_10->isEnabled())
    {
        cablera->grafo->insetarArista(9,10,12);
        lista->add(12);
    }

    if(ui->label_11->isEnabled())
    {
        cablera->grafo->insetarArista(10,4,6);
        lista->add(6);
    }

    if(ui->label_12->isEnabled())
    {
        cablera->grafo->insetarArista(10,11,11);
        lista->add(11);
    }

    if(ui->label_13->isEnabled())
    {
        cablera->grafo->insetarArista(11,12,14);
        lista->add(14);
    }

    if(ui->label_14->isEnabled())
    {
        cablera->grafo->insetarArista(12,3,15);
        lista->add(15);
    }

    if(ui->label_15->isEnabled())
    {
        cablera->grafo->insetarArista(11,14,18);
        lista->add(18);
    }

    if(ui->label_16->isEnabled())
    {
        cablera->grafo->insetarArista(9,15,17);
        lista->add(17);
    }

    if(ui->label_17->isEnabled())
    {
        cablera->grafo->insetarArista(15,13,13);
        lista->add(13);
    }

    if(ui->label_18->isEnabled())
    {
        cablera->grafo->insetarArista(13,9,19);
        lista->add(19);
    }

    if(ui->label_19->isEnabled())
    {
        cablera->grafo->insetarArista(13,14,9);
        lista->add(9);
    }

    if(ui->label_20->isEnabled())
    {
        cablera->grafo->insetarArista(1,14,16);
        lista->add(16);
    }

    cablera->grafo->imprimirGrafo(lista3);
    lista->imprimir();

    ui->lineEdit_2->setText(QString::number(cablera->prim(ui->lineEdit->text().toInt(),lista3)));
    lista3->imprimir();

    ui->label_2->setEnabled(false);
    ui->label_3->setEnabled(false);
    ui->label_4->setEnabled(false);
    ui->label_5->setEnabled(false);
    ui->label_6->setEnabled(false);
    ui->label_7->setEnabled(false);
    ui->label_8->setEnabled(false);
    ui->label_9->setEnabled(false);
    ui->label_10->setEnabled(false);
    ui->label_11->setEnabled(false);
    ui->label_12->setEnabled(false);
    ui->label_13->setEnabled(false);
    ui->label_14->setEnabled(false);
    ui->label_15->setEnabled(false);
    ui->label_16->setEnabled(false);
    ui->label_17->setEnabled(false);
    ui->label_18->setEnabled(false);
    ui->label_19->setEnabled(false);
    ui->label_20->setEnabled(false);
    tmp = lista3->primerNodo;
    qDebug() << "Pasando a falso";
    control = false;

}
    else
    {
    tmp = lista3->primerNodo;
    qDebug() << "Entrando en falso";
    qDebug() << tmp->peso;

        if(tmp->peso == 1)
            ui->label_2->setEnabled(true);
        else
            if(tmp->peso == 2)
                ui->label_5->setEnabled(true);
            else
                if(tmp->peso == 3)
                    ui->label_9->setEnabled(true);
                else
                    if(tmp->peso == 4)
                        ui->label_7->setEnabled(true);
                    else
                        if(tmp->peso == 5)
                            ui->label_3->setEnabled(true);
                        else
                            if(tmp->peso == 6)
                                ui->label_11->setEnabled(true);
                            else
                                if(tmp->peso == 7)
                                    ui->label_6->setEnabled(true);
                                else
                                    if(tmp->peso == 8)
                                        ui->label_4->setEnabled(true);
                                    else
                                        if(tmp->peso == 9)
                                            ui->label_19->setEnabled(true);
                                        else
                                            if(tmp->peso == 10)
                                                ui->label_8->setEnabled(true);
                                            else
                                                if(tmp->peso == 11)
                                                    ui->label_12->setEnabled(true);
                                                else
                                                    if(tmp->peso == 12)
                                                        ui->label_10->setEnabled(true);
                                                    else
                                                        if(tmp->peso == 13)
                                                            ui->label_17->setEnabled(true);
                                                        else
                                                            if(tmp->peso == 14)
                                                                ui->label_13->setEnabled(true);
                                                            else
                                                                if(tmp->peso == 15)
                                                                    ui->label_14->setEnabled(true);
                                                                else
                                                                    if(tmp->peso == 16)
                                                                        ui->label_20->setEnabled(true);
                                                                    else
                                                                        if(tmp->peso == 17)
                                                                            ui->label_16->setEnabled(true);
                                                                        else
                                                                            if(tmp->peso == 18)
                                                                                ui->label_15->setEnabled(true);
                                                                            else
                                                                                if(tmp->peso == 19)
                                                                                    ui->label_18->setEnabled(true);


        lista3->eliminar();
    }
}


void MainWindow::on_checkBox_16_stateChanged(int arg1)
{
    if(arg1 && (ui->checkBox->isChecked() && ui->checkBox_14->isChecked()))
        ui->label_20->setEnabled(1);
    else
        ui->label_20->setEnabled(0);
}


void MainWindow::on_checkBox_17_stateChanged(int arg1)
{
    if(arg1 && (ui->checkBox->isChecked() && ui->checkBox_2->isChecked()))
        ui->label_2->setEnabled(1);
    else
        ui->label_2->setEnabled(0);
}


void MainWindow::on_checkBox_18_stateChanged(int arg1)
{
    if(arg1 && (ui->checkBox_2->isChecked() && ui->checkBox_3->isChecked()))
        ui->label_3->setEnabled(1);
    else
        ui->label_3->setEnabled(0);
}


void MainWindow::on_checkBox_19_stateChanged(int arg1)
{
    if(arg1 && (ui->checkBox_3->isChecked() && ui->checkBox_4->isChecked()))
        ui->label_4->setEnabled(1);
    else
        ui->label_4->setEnabled(0);
}


void MainWindow::on_checkBox_21_stateChanged(int arg1)
{
    if(arg1 && (ui->checkBox_4->isChecked() && ui->checkBox_5->isChecked()))
        ui->label_5->setEnabled(1);
    else
        ui->label_5->setEnabled(0);
}


void MainWindow::on_checkBox_22_stateChanged(int arg1)
{
    if(arg1 && (ui->checkBox_5->isChecked() && ui->checkBox_6->isChecked()))
        ui->label_6->setEnabled(1);
    else
        ui->label_6->setEnabled(0);
}


void MainWindow::on_checkBox_23_stateChanged(int arg1)
{
    if(arg1 && (ui->checkBox_6->isChecked() && ui->checkBox_7->isChecked()))
        ui->label_7->setEnabled(1);
    else
        ui->label_7->setEnabled(0);
}


void MainWindow::on_checkBox_24_stateChanged(int arg1)
{
    if(arg1 && (ui->checkBox_7->isChecked() && ui->checkBox_8->isChecked()))
        ui->label_8->setEnabled(1);
    else
        ui->label_8->setEnabled(0);
}


void MainWindow::on_checkBox_25_stateChanged(int arg1)
{
    if(arg1 && (ui->checkBox_8->isChecked() && ui->checkBox_9->isChecked()))
        ui->label_9->setEnabled(1);
    else
        ui->label_9->setEnabled(0);
}


void MainWindow::on_checkBox_26_stateChanged(int arg1)
{
    if(arg1 && (ui->checkBox_9->isChecked() && ui->checkBox_10->isChecked()))
        ui->label_10->setEnabled(1);
    else
        ui->label_10->setEnabled(0);
}


void MainWindow::on_label_11_linkActivated(const QString &link)
{

}


void MainWindow::on_checkBox_27_stateChanged(int arg1)
{
    if(arg1 && (ui->checkBox_4->isChecked() && ui->checkBox_10->isChecked()))
        ui->label_11->setEnabled(1);
    else
        ui->label_11->setEnabled(0);
}


void MainWindow::on_checkBox_28_stateChanged(int arg1)
{
    if(arg1 && (ui->checkBox_9->isChecked() && ui->checkBox_15->isChecked()))
        ui->label_16->setEnabled(1);
    else
        ui->label_16->setEnabled(0);
}


void MainWindow::on_checkBox_29_stateChanged(int arg1)
{
    if(arg1 && (ui->checkBox_13->isChecked() && ui->checkBox_15->isChecked()))
        ui->label_17->setEnabled(1);
    else
        ui->label_17->setEnabled(0);
}


void MainWindow::on_checkBox_31_stateChanged(int arg1)
{
    if(arg1 && (ui->checkBox_13->isChecked() && ui->checkBox_14->isChecked()))
        ui->label_19->setEnabled(1);
    else
        ui->label_19->setEnabled(0);
}


void MainWindow::on_checkBox_32_stateChanged(int arg1)
{
    if(arg1 && (ui->checkBox_14->isChecked() && ui->checkBox_11->isChecked()))
        ui->label_15->setEnabled(1);
    else
        ui->label_15->setEnabled(0);
}


void MainWindow::on_checkBox_33_stateChanged(int arg1)
{
    if(arg1 && (ui->checkBox_10->isChecked() && ui->checkBox_11->isChecked()))
        ui->label_12->setEnabled(1);
    else
        ui->label_12->setEnabled(0);
}


void MainWindow::on_checkBox_30_stateChanged(int arg1)
{
    if(arg1 && (ui->checkBox_13->isChecked() && ui->checkBox_9->isChecked()))
        ui->label_18->setEnabled(1);
    else
        ui->label_18->setEnabled(0);
}


void MainWindow::on_checkBox_20_stateChanged(int arg1)
{
    if(arg1 && (ui->checkBox_3->isChecked() && ui->checkBox_12->isChecked()))
        ui->label_14->setEnabled(1);
    else
        ui->label_14->setEnabled(0);
}


void MainWindow::on_checkBox_34_stateChanged(int arg1)
{
    if(arg1 && (ui->checkBox_11->isChecked() && ui->checkBox_12->isChecked()))
        ui->label_13->setEnabled(1);
    else
        ui->label_13->setEnabled(0);
}

