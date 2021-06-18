#include "mainwindow.h"
#include "juego.h"
#include "grafo2.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    /*
        int cero[N*N] = {0};
        int facil[N*N] = {5,0,4,3,0,6,0,7,0,0,0,1,0,0,0,0,0,0,0,7,6,0,0,2,9,0,0,0,8,0,7,0,5,6,0,1,7,6,0,0,3,0,0,8,9,9,0,3,8,0,4,0,2,0,0,0,8,1,0,0,2,9,0,0};

        Grafo2* grafo2 = new Grafo2();

        grafo2->inicializar();
        grafo2->rellenar(facil);

        grafo2->mostrar();
        cout << endl;

        grafo2->getPosibles();
        grafo2->resolver(0, 0);
        grafo2->mostrar();
        //grafo2->liberarmemoria();*/

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
