#include "ingresar.h"
#include "ui_final.h"

Ingresar::Ingresar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ingresar)
{
    ui->setupUi(this);
}

Ingresar::~Ingresar()
{
    delete ui;
}

