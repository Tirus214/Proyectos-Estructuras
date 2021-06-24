#ifndef CABLERA_H
#define CABLERA_H
#include "grafo2.h"

class Cablera{
public:
    //nodos estan numerados de 0 a n-1

    bool esta[K];
    Grafo2* grafo;
    int indiceArbol;
    int indiceCola;
    Arista* arbolDeExpansion[K];

    Cablera(){
        grafo = new Grafo2();
        indiceArbol = 0;
        indiceCola = 0;
        inicializarEsta();
    }

    void inicializarEsta();
    int prim(int nodo);
    void ordenarCola(Arista* cola[K]);
    void eliminarTopeCola(Arista* cola[K]);
    void imprimirArbol();
};

#endif // CABLERA_H
