#ifndef GRAFO2_H
#define GRAFO2_H
#include "nodo.h"

struct Grafo2{

    int cantNodos;
    int cantAristas;
    int indiceArbol;
    int indiceCola;
    Nodo* vertices[K];
    bool esta[K];

    Grafo2(){
        cantNodos = 0;
        cantAristas = 0;
        indiceArbol = 0;
        indiceCola = 0;
    }


    void insetarNodo(int d);
    void insetarArista(int origen, int destino, int peso);

    void imprimirGrafo();
};

#endif // GRAFO2_H
