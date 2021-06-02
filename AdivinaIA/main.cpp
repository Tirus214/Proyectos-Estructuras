#include "mainwindow.h"
#include <QApplication>
#include "juego.h"
#include "partida.h"
#include "final.h"

int main(int argc, char *argv[])
{
    Juego* juego = new Juego();

    /*
    juego->arbol->raiz = new Nodo("Es un objeto");
    juego->arbol->raiz->hijoSi = new Nodo("Bola");
    juego->arbol->raiz->hijoNo = new Nodo("Es un animal");
    juego->arbol->raiz->hijoNo->hijoSi = new Nodo("Perro");
    juego->arbol->raiz->hijoNo->hijoNo = new Nodo("Flor");
    juego->reiniciar();
    */

    //juego->arbol->preOrden(juego->arbol->raiz);

    //cout << juego->arbol->altura(juego->arbol->raiz);

    //juego->guardarArbol(juego->arbol->raiz);

    //for (int i=0; i<juego->arreglo.size(); i++) {
        //qDebug() << juego->arreglo.takeAt(i);
    //}

    //juego->arbol->preOrden(juego->arbol->raiz);

    QApplication a(argc, argv);
    MainWindow w;
    w.setJuego(juego);
    w.show();
    return a.exec();
}
