#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "grafomatriz.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_64->setAutoFillBackground(true);
    ui->label_65->setAutoFillBackground(true);
    ui->label_66->setAutoFillBackground(true);
    ui->label_67->setAutoFillBackground(true);
    ui->label_68->setAutoFillBackground(true);
    ui->label_69->setAutoFillBackground(true);
    ui->label_70->setAutoFillBackground(true);
    ui->label_71->setAutoFillBackground(true);
    ui->label_72->setAutoFillBackground(true);
    ui->label_73->setAutoFillBackground(true);
    ui->label_74->setAutoFillBackground(true);
    ui->label_75->setAutoFillBackground(true);
    ui->label_75->setAutoFillBackground(true);
    ui->label_76->setAutoFillBackground(true);
    ui->label_77->setAutoFillBackground(true);
    ui->label_78->setAutoFillBackground(true);
    ui->label_79->setAutoFillBackground(true);
    ui->label_80->setAutoFillBackground(true);
    ui->label_81->setAutoFillBackground(true);
    ui->label_82->setAutoFillBackground(true);
    ui->label_83->setAutoFillBackground(true);
    ui->label_84->setAutoFillBackground(true);
    ui->label_85->setAutoFillBackground(true);
    ui->label_86->setAutoFillBackground(true);


    QPalette pal = ui->label_64->palette();
    pal.setColor(QPalette::Window, QColor(Qt::green));

    ui->label_64->setPalette(pal);
    ui->label_65->setPalette(pal);
    ui->label_66->setPalette(pal);
    ui->label_67->setPalette(pal);
    ui->label_68->setPalette(pal);
    ui->label_69->setPalette(pal);
    ui->label_70->setPalette(pal);
    ui->label_71->setPalette(pal);
    ui->label_72->setPalette(pal);
    ui->label_73->setPalette(pal);
    ui->label_74->setPalette(pal);
    ui->label_75->setPalette(pal);
    ui->label_76->setPalette(pal);
    ui->label_77->setPalette(pal);
    ui->label_78->setPalette(pal);
    ui->label_79->setPalette(pal);
    ui->label_80->setPalette(pal);
    ui->label_81->setPalette(pal);
    ui->label_82->setPalette(pal);
    ui->label_83->setPalette(pal);
    ui->label_84->setPalette(pal);
    ui->label_85->setPalette(pal);
    ui->label_86->setPalette(pal);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    qDebug()<< "arg1: "<<arg1;
}


void MainWindow::on_comboBox_2_activated(const QString &arg1)
{
    qDebug()<< "arg1: "<<arg1;
}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    qDebug()<< "arg1: "<<arg1;
    qDebug()<< "Combo: "<<ui->comboBox->currentText();
}


int getPeso(int index)
{
    if(index == 0)
        return 50;
    if(index == 1)
        return 350;
    if(index == 2)
        return 10;
    if(index == 3)
        return 20;
    if(index == 4)
        return 30;
    if(index == 5)
        return 70;
    if(index == 6)
        return 60;
    if(index == 7)
        return 35;
    if(index == 8)
        return 5;

    qDebug()<< "ups";
   return 0;


}

void MainWindow::on_pushButton_clicked()
{
     qDebug()<< "arg1: ";
     grafoMatriz * g1 = new grafoMatriz();
     g1->agregarVertice(0); //vertice de control que no se llega a usar
     g1->agregarVertice(1);
     g1->agregarVertice(2);
     g1->agregarVertice(3);
     g1->agregarVertice(4);
     g1->agregarVertice(5);
     g1->agregarVertice(6);
     g1->agregarVertice(7);
     g1->agregarVertice(8);
     g1->agregarVertice(9);
     g1->agregarVertice(10);
     g1->agregarVertice(11);
     g1->agregarVertice(12);
     g1->agregarVertice(13);
     g1->agregarVertice(14);
     g1->agregarVertice(15);
     g1->agregarVertice(16);
     g1->agregarVertice(17);
     g1->agregarVertice(18);
     g1->agregarVertice(19);
     g1->agregarVertice(20);
     g1->agregarVertice(21);
     g1->agregarVertice(22);
     g1->agregarVertice(23);

     qDebug()<< "Combo: "<<ui->comboBox->currentText();
     qDebug()<< "Combo: "<<ui->comboBox->currentIndex();

     g1->agregarArista(g1->vertices[1], g1->vertices[2],getPeso(ui->comboBox_3->currentIndex()));
     g1->agregarArista(g1->vertices[2], g1->vertices[1],getPeso(ui->comboBox_3->currentIndex()));

     g1->agregarArista(g1->vertices[2], g1->vertices[3],getPeso(ui->comboBox_4->currentIndex()));
     g1->agregarArista(g1->vertices[3], g1->vertices[2],getPeso(ui->comboBox_4->currentIndex()));

     g1->agregarArista(g1->vertices[3], g1->vertices[4],getPeso(ui->comboBox_5->currentIndex()));
     g1->agregarArista(g1->vertices[4], g1->vertices[3],getPeso(ui->comboBox_5->currentIndex()));

     g1->agregarArista(g1->vertices[4], g1->vertices[5],getPeso(ui->comboBox_6->currentIndex()));
     g1->agregarArista(g1->vertices[5], g1->vertices[4],getPeso(ui->comboBox_6->currentIndex()));

     g1->agregarArista(g1->vertices[3], g1->vertices[21],getPeso(ui->comboBox_7->currentIndex()));
     g1->agregarArista(g1->vertices[21], g1->vertices[3],getPeso(ui->comboBox_7->currentIndex()));

     g1->agregarArista(g1->vertices[21], g1->vertices[6],getPeso(ui->comboBox_8->currentIndex()));
     g1->agregarArista(g1->vertices[6], g1->vertices[21],getPeso(ui->comboBox_8->currentIndex()));

     g1->agregarArista(g1->vertices[6], g1->vertices[7],getPeso(ui->comboBox_9->currentIndex()));
     g1->agregarArista(g1->vertices[7], g1->vertices[6],getPeso(ui->comboBox_9->currentIndex()));

     g1->agregarArista(g1->vertices[7], g1->vertices[8],getPeso(ui->comboBox_10->currentIndex()));
     g1->agregarArista(g1->vertices[8], g1->vertices[7],getPeso(ui->comboBox_10->currentIndex()));

     g1->agregarArista(g1->vertices[7], g1->vertices[22],getPeso(ui->comboBox_11->currentIndex()));
     g1->agregarArista(g1->vertices[22], g1->vertices[7],getPeso(ui->comboBox_11->currentIndex()));

     g1->agregarArista(g1->vertices[22], g1->vertices[18],getPeso(ui->comboBox_12->currentIndex()));
     g1->agregarArista(g1->vertices[18], g1->vertices[22],getPeso(ui->comboBox_12->currentIndex()));

     g1->agregarArista(g1->vertices[18], g1->vertices[15],getPeso(ui->comboBox_13->currentIndex()));
     g1->agregarArista(g1->vertices[15], g1->vertices[18],getPeso(ui->comboBox_13->currentIndex()));

     g1->agregarArista(g1->vertices[15], g1->vertices[14],getPeso(ui->comboBox_14->currentIndex()));
     g1->agregarArista(g1->vertices[14], g1->vertices[15],getPeso(ui->comboBox_14->currentIndex()));

     g1->agregarArista(g1->vertices[1], g1->vertices[20],getPeso(ui->comboBox_15->currentIndex()));
     g1->agregarArista(g1->vertices[20], g1->vertices[1],getPeso(ui->comboBox_15->currentIndex()));

     g1->agregarArista(g1->vertices[20], g1->vertices[19],getPeso(ui->comboBox_16->currentIndex()));
     g1->agregarArista(g1->vertices[19], g1->vertices[20],getPeso(ui->comboBox_16->currentIndex()));

     g1->agregarArista(g1->vertices[19], g1->vertices[15],getPeso(ui->comboBox_16->currentIndex()));
     g1->agregarArista(g1->vertices[15], g1->vertices[19],getPeso(ui->comboBox_16->currentIndex()));

     g1->agregarArista(g1->vertices[21], g1->vertices[18],getPeso(ui->comboBox_18->currentIndex()));
     g1->agregarArista(g1->vertices[18], g1->vertices[21],getPeso(ui->comboBox_18->currentIndex()));

     g1->agregarArista(g1->vertices[4], g1->vertices[6],getPeso(ui->comboBox_19->currentIndex()));
     g1->agregarArista(g1->vertices[6], g1->vertices[4],getPeso(ui->comboBox_19->currentIndex()));

     g1->agregarArista(g1->vertices[22], g1->vertices[23],getPeso(ui->comboBox_20->currentIndex()));
     g1->agregarArista(g1->vertices[23], g1->vertices[22],getPeso(ui->comboBox_20->currentIndex()));

     g1->agregarArista(g1->vertices[23], g1->vertices[8],getPeso(ui->comboBox_21->currentIndex()));
     g1->agregarArista(g1->vertices[8], g1->vertices[23],getPeso(ui->comboBox_21->currentIndex()));

     g1->agregarArista(g1->vertices[14], g1->vertices[9],getPeso(ui->comboBox_22->currentIndex()));
     g1->agregarArista(g1->vertices[9], g1->vertices[14],getPeso(ui->comboBox_22->currentIndex()));

     g1->agregarArista(g1->vertices[8], g1->vertices[9],getPeso(ui->comboBox_23->currentIndex()));
     g1->agregarArista(g1->vertices[9], g1->vertices[8],getPeso(ui->comboBox_23->currentIndex()));

     g1->agregarArista(g1->vertices[9], g1->vertices[11],getPeso(ui->comboBox_24->currentIndex()));
     g1->agregarArista(g1->vertices[11], g1->vertices[9],getPeso(ui->comboBox_24->currentIndex()));

     g1->agregarArista(g1->vertices[9], g1->vertices[10],getPeso(ui->comboBox_25->currentIndex()));
     g1->agregarArista(g1->vertices[10], g1->vertices[9],getPeso(ui->comboBox_25->currentIndex()));

     g1->agregarArista(g1->vertices[10], g1->vertices[11],getPeso(ui->comboBox_26->currentIndex()));
     g1->agregarArista(g1->vertices[11], g1->vertices[10],getPeso(ui->comboBox_26->currentIndex()));

     g1->agregarArista(g1->vertices[15], g1->vertices[17],getPeso(ui->comboBox_27->currentIndex()));
     g1->agregarArista(g1->vertices[17], g1->vertices[15],getPeso(ui->comboBox_27->currentIndex()));

     g1->agregarArista(g1->vertices[17], g1->vertices[16],getPeso(ui->comboBox_28->currentIndex()));
     g1->agregarArista(g1->vertices[16], g1->vertices[17],getPeso(ui->comboBox_28->currentIndex()));

     g1->agregarArista(g1->vertices[16], g1->vertices[13],getPeso(ui->comboBox->currentIndex()));
     g1->agregarArista(g1->vertices[13], g1->vertices[16],getPeso(ui->comboBox->currentIndex()));

     g1->agregarArista(g1->vertices[9], g1->vertices[13],getPeso(ui->comboBox_30->currentIndex()));
     g1->agregarArista(g1->vertices[13], g1->vertices[9],getPeso(ui->comboBox_30->currentIndex()));

     g1->agregarArista(g1->vertices[12], g1->vertices[13],getPeso(ui->comboBox_31->currentIndex()));
     g1->agregarArista(g1->vertices[13], g1->vertices[12],getPeso(ui->comboBox_31->currentIndex()));

     g1->agregarArista(g1->vertices[12], g1->vertices[11],getPeso(ui->comboBox_2->currentIndex()));
     g1->agregarArista(g1->vertices[11], g1->vertices[12],getPeso(ui->comboBox_2->currentIndex()));

    g1->imprimir();

    ui->lineEdit_3->setText(QString::number(g1->dijkstra(ui->lineEdit->text().toInt(),ui->lineEdit_2->text().toInt())));











}

