#include "mainwindow.h"
#include "juego.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    Juego* juego = new Juego();
    juego->imprimirGrafo();

    QApplication a(argc, argv);
    MainWindow w;
    //w.show();
    return a.exec();
}
