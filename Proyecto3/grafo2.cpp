#include "grafo2.h"
#include <array>
void Grafo2::insetarNodo(int d)
{
    if(cantNodos < 100)
    {
        vertices[d] = new Nodo(d);
        cantNodos++;
    }
}



void Grafo2::insetarArista(int origen, int destino, int peso){
        vertices[origen]->insertarArista(destino, peso, indiceAristas);
        vertices[destino]->insertarArista(origen, peso, indiceAristas);
        indiceAristas++;
}


void Grafo2::imprimirGrafo(){
    for (int i=0; i<K; i++) {
        if(vertices[i] != NULL)
            qDebug() <<"Dato " << vertices[i]->dato << "  cantidad de aristas:" << vertices[i]->cantAristas;
    }
}


