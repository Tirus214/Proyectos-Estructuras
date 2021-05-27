#include "mainwindow.h"
#include <QApplication>
#include "juego.h"
#include "partida.h"
#include "final.h"

int main(int argc, char *argv[])
{
    Juego* juego = new Juego();
    juego->arbol->insertar("Anillo");

    QApplication a(argc, argv);
    MainWindow w;
    w.setJuego(juego);
    w.show();
    return a.exec();
}
