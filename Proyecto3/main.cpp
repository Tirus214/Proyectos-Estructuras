#include "mainwindow.h"
#include "cablera.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    Cablera* cablera = new Cablera();

    cablera->grafo->insetarNodo(2);
    cablera->grafo->insetarNodo(3);
    cablera->grafo->insetarNodo(5);
    cablera->grafo->insetarNodo(7);

    cablera->grafo->insetarArista(2, 3, 5);
    cablera->grafo->insetarArista(2, 5, 1);
    cablera->grafo->insetarArista(2, 7, 33);
    cablera->grafo->insetarArista(3, 5, 6);
    cablera->grafo->insetarArista(5, 7, 8);

    //cablera->grafo->imprimirGrafo();

    cout << cablera->prim(7);

    cablera->imprimirArbol();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
