#include "mainwindow.h"
#include "grafomatriz.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    grafoMatriz * g1 = new grafoMatriz();
    g1->agregarVertice(0);
    g1->agregarVertice(1);
    g1->agregarVertice(2);
    g1->agregarVertice(3);
    g1->agregarVertice(4);
    g1->agregarVertice(5);
    //g1->imprimir();
    cout << endl;

            g1->agregarArista(g1->vertices[0], g1->vertices[1],7);//

            g1->agregarArista(g1->vertices[1], g1->vertices[0],7);//
            g1->agregarArista(g1->vertices[0], g1->vertices[2],9);
            g1->agregarArista(g1->vertices[2], g1->vertices[0],9);//
            g1->agregarArista(g1->vertices[0], g1->vertices[5],14);
            g1->agregarArista(g1->vertices[5], g1->vertices[0],14);//
            g1->agregarArista(g1->vertices[1], g1->vertices[2],10);
            g1->agregarArista(g1->vertices[2], g1->vertices[1],10);
            g1->agregarArista(g1->vertices[1], g1->vertices[3],15);
            g1->agregarArista(g1->vertices[3], g1->vertices[1],15);
            g1->agregarArista(g1->vertices[2], g1->vertices[3],11);
            g1->agregarArista(g1->vertices[3], g1->vertices[2],11);
            g1->agregarArista(g1->vertices[2], g1->vertices[5],2);
            g1->agregarArista(g1->vertices[5], g1->vertices[2],2);
            g1->agregarArista(g1->vertices[3], g1->vertices[4],6);
            g1->agregarArista(g1->vertices[4], g1->vertices[3],6);
            g1->agregarArista(g1->vertices[5], g1->vertices[4],9);
            g1->agregarArista(g1->vertices[4], g1->vertices[5],9);
            g1->imprimir();

            cout<< endl << endl<< "Dijkstra: ";
            g1->dijkstra(0,5);
            cout<< endl << endl;

//            g1->limpiarVisitados();
/*
            for (int i=0; i<100; i++) {
                if(g1->sumatoriaPesos[i] != 0)
                cout << g1->sumatoriaPesos[i] << endl;
            }
*/
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
