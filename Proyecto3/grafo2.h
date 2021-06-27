#ifndef GRAFO2_H
#define GRAFO2_H
#include "nodo.h"

struct Grafo2{

    int cantNodos;
    int cantAristas;
<<<<<<< Updated upstream
    Nodo* vertices[K];  //vector de nodos
=======
    int indiceArbol;
    int indice;
    Nodo* vertices[K];
    bool esta[K];
>>>>>>> Stashed changes

    Grafo2(){
        cantNodos = cantAristas = 0;
    }

    //inserta un nodo al grafo
    void insetarNodo(int d);
    //inserta una arista dado un nodo origen, destino y peso
    void insetarArista(int origen, int destino, int peso);
    //imprime el grafo
    void imprimirGrafo();
};

#endif // GRAFO2_H
