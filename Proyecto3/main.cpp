#include "mainwindow.h"
#include "cablera.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    cout << endl << endl << "Prueba" << endl;

    Cablera* cablera = new Cablera();

        cablera->grafo->insetarNodo(1);
        cablera->grafo->insetarNodo(2);
        cablera->grafo->insetarNodo(3);
        cablera->grafo->insetarNodo(4);
        cablera->grafo->insetarNodo(5);
        cablera->grafo->insetarNodo(7);
        cablera->grafo->insetarNodo(6);
        cablera->grafo->insetarNodo(11);
        cablera->grafo->insetarNodo(12);
        cablera->grafo->insetarNodo(13);
        cablera->grafo->insetarNodo(14);
        cablera->grafo->insetarNodo(15);

        cablera->grafo->insetarArista(2, 3, 5);
        cablera->grafo->insetarArista(2, 5, 1);
        cablera->grafo->insetarArista(2, 7, 33);
        cablera->grafo->insetarArista(3, 5, 6);
        cablera->grafo->insetarArista(5, 7, 8);
        cablera->grafo->insetarArista(1, 2, 1);
        cablera->grafo->insetarArista(1, 14, 6);
        cablera->grafo->insetarArista(2, 3, 1);
        cablera->grafo->insetarArista(3, 12, 1);
        cablera->grafo->insetarArista(3, 4, 2);

        //cablera->grafo->imprimirGrafo();
        cablera->grafo->insetarArista(4, 5, 2);
        cablera->grafo->insetarArista(5, 11, 4);
        cablera->grafo->insetarArista(5, 6, 1);
        cablera->grafo->insetarArista(11, 14, 1);
        cablera->grafo->insetarArista(11, 12, 1);

        cout << cablera->prim(7);
        cablera->grafo->insetarArista(6, 13, 6);
        cablera->grafo->insetarArista(6, 15, 5);
        cablera->grafo->insetarArista(15, 13, 3);
        cablera->grafo->insetarArista(13, 14, 1);

        cablera->grafo->imprimirGrafo();

        cout << cablera->prim(1);

        cablera->imprimirArbol();

        cout << endl << "Prueba" << endl << endl;


    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
