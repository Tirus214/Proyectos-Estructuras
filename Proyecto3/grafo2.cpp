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



void Grafo2::insetarArista(int origen, int destino, int peso)
{
    vertices[origen]->insertarArista(destino, peso);
    vertices[destino]->insertarArista(origen, peso);

}


void Grafo2::imprimirGrafo(ListaSimple *lista)
{
    for (int i=0; i<K; i++)
    {
        if(vertices[i] != NULL)
            qDebug() <<"Dato " << vertices[i]->dato << "  cantidad de aristas:" << vertices[i]->cantAristas;


    }
}


