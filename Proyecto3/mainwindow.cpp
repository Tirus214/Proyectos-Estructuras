#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label_28->setAutoFillBackground(true); // IMPORTANT!
    ui->label_29->setAutoFillBackground(true); // IMPORTANT!
    ui->label_30->setAutoFillBackground(true); // IMPORTANT!
    ui->label_31->setAutoFillBackground(true); // IMPORTANT!
    ui->label_32->setAutoFillBackground(true); // IMPORTANT!
    ui->label_33->setAutoFillBackground(true); // IMPORTANT!
    ui->label_34->setAutoFillBackground(true); // IMPORTANT!
    ui->label_35->setAutoFillBackground(true); // IMPORTANT!
    ui->label_36->setAutoFillBackground(true); // IMPORTANT!
    ui->label_37->setAutoFillBackground(true); // IMPORTANT!
    ui->label_38->setAutoFillBackground(true); // IMPORTANT!
    ui->label_39->setAutoFillBackground(true); // IMPORTANT!
    ui->label_40->setAutoFillBackground(true); // IMPORTANT!
    ui->label_41->setAutoFillBackground(true); // IMPORTANT!
    ui->label_42->setAutoFillBackground(true); // IMPORTANT!
    ui->label_43->setAutoFillBackground(true); // IMPORTANT!
    ui->label_44->setAutoFillBackground(true); // IMPORTANT!
    ui->label_45->setAutoFillBackground(true); // IMPORTANT!
    ui->label_46->setAutoFillBackground(true); // IMPORTANT!
    QPalette pal = ui->label_28->palette();
    pal.setColor(QPalette::Window, QColor(Qt::cyan));
    ui->label_28->setPalette(pal);
    ui->label_29->setPalette(pal);
    ui->label_30->setPalette(pal);
    ui->label_31->setPalette(pal);
    ui->label_32->setPalette(pal);
    ui->label_33->setPalette(pal);
    ui->label_34->setPalette(pal);
    ui->label_35->setPalette(pal);
    ui->label_36->setPalette(pal);
    ui->label_37->setPalette(pal);
    ui->label_38->setPalette(pal);
    ui->label_39->setPalette(pal);
    ui->label_40->setPalette(pal);
    ui->label_41->setPalette(pal);
    ui->label_42->setPalette(pal);
    ui->label_43->setPalette(pal);
    ui->label_44->setPalette(pal);
    ui->label_45->setPalette(pal);
    ui->label_46->setPalette(pal);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        if(ui->checkBox_2->isChecked())
            ui->label_2->setEnabled(1);
        if(ui->checkBox_14->isChecked())
            ui->label_20->setEnabled(1);

    }
    else
    {
        ui->label_2->setEnabled(0);
        ui->label_20->setEnabled(0);
    }
}


void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1)
    {
        if(ui->checkBox->isChecked())
             ui->label_2->setEnabled(1);

        if(ui->checkBox_3->isChecked())
            ui->label_3->setEnabled(1);
    }
    else
    {
        ui->label_2->setEnabled(0);
        ui->label_3->setEnabled(0);
    }
}


void MainWindow::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1)
    {
        if(ui->checkBox_2->isChecked())
            ui->label_3->setEnabled(1);

        if(ui->checkBox_4->isChecked())
            ui->label_4->setEnabled(1);

        if(ui->checkBox_12->isChecked())
            ui->label_14->setEnabled(1);

    }
    else
    {
        ui->label_3->setEnabled(0);
        ui->label_4->setEnabled(0);
        ui->label_14->setEnabled(0);
    }
}


void MainWindow::on_checkBox_4_stateChanged(int arg1)
{
    if(arg1)
    {
        if(ui->checkBox_3->isChecked())
             ui->label_4->setEnabled(1);
        if(ui->checkBox_5->isChecked())
             ui->label_5->setEnabled(1);
        if(ui->checkBox_10->isChecked())
             ui->label_11->setEnabled(1);

    }
    else
    {
        ui->label_4->setEnabled(0);
        ui->label_5->setEnabled(0);
        ui->label_11->setEnabled(0);

    }
}


void MainWindow::on_checkBox_5_stateChanged(int arg1)
{
    if(arg1)
    {
        if(ui->checkBox_4->isChecked())
             ui->label_5->setEnabled(1);
        if(ui->checkBox_6->isChecked())
             ui->label_6->setEnabled(1);

    }
    else
    {
        ui->label_5->setEnabled(0);
        ui->label_6->setEnabled(0);

    }
}


void MainWindow::on_checkBox_6_stateChanged(int arg1)
{
    if(arg1)
    {
        if(ui->checkBox_5->isChecked())
             ui->label_6->setEnabled(1);
        if(ui->checkBox_7->isChecked())
             ui->label_7->setEnabled(1);


    }
    else
    {
        ui->label_6->setEnabled(0);
        ui->label_7->setEnabled(0);

    }
}


void MainWindow::on_checkBox_7_stateChanged(int arg1)
{
    if(arg1)
    {
        if(ui->checkBox_6->isChecked())
             ui->label_7->setEnabled(1);
        if(ui->checkBox_8->isChecked())
             ui->label_8->setEnabled(1);


    }
    else
    {
        ui->label_7->setEnabled(0);
        ui->label_8->setEnabled(0);

    }
}


void MainWindow::on_checkBox_8_stateChanged(int arg1)
{
    if(arg1)
    {
        if(ui->checkBox_7->isChecked())
             ui->label_8->setEnabled(1);
        if(ui->checkBox_9->isChecked())
             ui->label_9->setEnabled(1);


    }
    else
    {
        ui->label_8->setEnabled(0);
        ui->label_9->setEnabled(0);

    }
}


void MainWindow::on_checkBox_9_stateChanged(int arg1)
{
    if(arg1)
    {
        if(ui->checkBox_8->isChecked())
             ui->label_9->setEnabled(1);
        if(ui->checkBox_10->isChecked())
             ui->label_10->setEnabled(1);
        if(ui->checkBox_15->isChecked())
             ui->label_16->setEnabled(1);
        if(ui->checkBox_13->isChecked())
             ui->label_18->setEnabled(1);


    }
    else
    {
        ui->label_9->setEnabled(0);
        ui->label_10->setEnabled(0);
        ui->label_16->setEnabled(0);
        ui->label_18->setEnabled(0);
    }
}


void MainWindow::on_checkBox_10_stateChanged(int arg1)
{
    if(arg1)
    {
        if(ui->checkBox_9->isChecked())
             ui->label_10->setEnabled(1);
        if(ui->checkBox_4->isChecked())
             ui->label_11->setEnabled(1);
        if(ui->checkBox_11->isChecked())
             ui->label_12->setEnabled(1);

    }
    else
    {
        ui->label_10->setEnabled(0);
        ui->label_11->setEnabled(0);
        ui->label_12->setEnabled(0);

    }
}


void MainWindow::on_checkBox_11_stateChanged(int arg1)
{
    if(arg1)
    {
        if(ui->checkBox_10->isChecked())
             ui->label_12->setEnabled(1);
        if(ui->checkBox_12->isChecked())
             ui->label_13->setEnabled(1);
        if(ui->checkBox_14->isChecked())
             ui->label_15->setEnabled(1);

    }
    else
    {
        ui->label_12->setEnabled(0);
        ui->label_13->setEnabled(0);
        ui->label_15->setEnabled(0);
    }
}


void MainWindow::on_checkBox_12_stateChanged(int arg1)
{
    if(arg1)
    {
        if(ui->checkBox_11->isChecked())
             ui->label_13->setEnabled(1);
        if(ui->checkBox_3->isChecked())
             ui->label_14->setEnabled(1);

    }
    else
    {
        ui->label_13->setEnabled(0);
        ui->label_14->setEnabled(0);

    }
}


void MainWindow::on_checkBox_14_stateChanged(int arg1)
{
    if(arg1)
    {
        if(ui->checkBox_11->isChecked())
             ui->label_15->setEnabled(1);
        if(ui->checkBox_13->isChecked())
             ui->label_19->setEnabled(1);
        if(ui->checkBox->isChecked())
             ui->label_20->setEnabled(1);

    }
    else
    {
        ui->label_15->setEnabled(0);
        ui->label_19->setEnabled(0);
        ui->label_20->setEnabled(0);

    }
}


void MainWindow::on_checkBox_15_stateChanged(int arg1)
{
    if(arg1)
    {
        if(ui->checkBox_9->isChecked())
             ui->label_16->setEnabled(1);
        if(ui->checkBox_13->isChecked())
             ui->label_17->setEnabled(1);


    }
    else
    {
        ui->label_16->setEnabled(0);
        ui->label_17->setEnabled(0);

    }
}


void MainWindow::on_checkBox_13_stateChanged(int arg1)
{
    if(arg1)
    {
        if(ui->checkBox_15->isChecked())
             ui->label_17->setEnabled(1);
        if(ui->checkBox_9->isChecked())
             ui->label_18->setEnabled(1);
        if(ui->checkBox_14->isChecked())
             ui->label_19->setEnabled(1);

    }
    else
    {
        ui->label_17->setEnabled(0);
        ui->label_18->setEnabled(0);
        ui->label_19->setEnabled(0);
    }
}

