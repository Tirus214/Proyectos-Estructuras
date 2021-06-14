#ifndef JUEGO_H
#define JUEGO_H
#include "grafo.h"

class Juego{
public:
    Nodo* matrizA[4][4];
    Nodo* matrizB[4][4];
    Nodo* matrizC[4][4];
    Nodo* matrizD[4][4];
    Grafo* grafo;

    Juego(){
        grafo = new Grafo();
        inicializarMatrices();
        crearNodos();
        linkearNodos();
    }

    void inicializarMatrices();
    void crearNodos();
    void linkearNodos();
    void linkearNodosExternos(Nodo* vertice, int fila, int columna, Nodo* matriz[4][4]);
    void imprimirGrafo();
};

#endif // JUEGO_H
