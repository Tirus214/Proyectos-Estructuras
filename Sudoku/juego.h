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
    bool finish;
    int pasada;

    Juego(){
        grafo = new Grafo();
        inicializarMatrices();
        crearNodos();
        linkearNodos();
        finish = false;
        pasada = 0;
    }

    void inicializarMatrices();
    void crearNodos();

    void linkearNodos();
    void linkearNodosInternos();
    void linkearNodosMatriz(Nodo* matriz[4][4]);
    void linkearNodosVector(Nodo* actual, Nodo* vector[23]);
    void linkearNodosExternos();
    void linkearNodosFila(Nodo* vertice, int fila, Nodo* matriz[4][4]);
    void linkearNodosColumna(Nodo* vertice, int columna, Nodo* matriz[4][4]);

    void imprimirGrafo();
    void imprimirGrafo2();
    void imprimirCodigos(Nodo* matriz[4][4]);

    void setNumero(Nodo* actual);
    void solucionar();
    bool todosLlenos();
    void corrida(Nodo* actual);
    void pintar(Nodo* actual);


    void solucionarMatriz(Nodo* matriz[4][4]);
    void solucionarPorPaso();
};

#endif // JUEGO_H
