#include "mainwindow.h"
#include "ordenador.h"

int main(int argc, char *argv[])
{

    Ordenador* ordenador= new Ordenador();

    ordenador->generarNumeros();
    ordenador->imprimirNumeros();
    cout << endl;
    ordenador->intercambio();
    ordenador->imprimirNumeros();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
