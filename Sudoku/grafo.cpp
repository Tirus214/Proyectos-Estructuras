#include "grafo.h"

// para insertar un vertice
void Grafo::insertarVertice(int d)
{
     if(indice < 64){
        vertices[indice] = new Nodo(indice, d);
        if(indice != 63)
            indice++;
     }
}

void Grafo::insertarArista(int origen, int destino)
{
     vertices[origen]->insertarAdyacente(vertices[destino]);
}


// IMPRIMIR IMPRIMIR IMPRIMIR
void Grafo::imprimir ()
{
    for (int i=0; i<=indice; i++) {
        cout << vertices[i]->codigo << " " << vertices[i]->dato;
    }
}



// visitar vertice
void Grafo::visitarVertice(int dato)
{
    vertices[dato]->visitado = true;
}

// visitar vertice
bool Grafo::visitadoVertice(int dato)
{
    return vertices[dato]->visitado;
}

// limpiar visitados
void Grafo::limpiarVisitados()
{
    for (int i=0; i<indice; i++) {
        vertices[i]->visitado=false;
    }
}



// ANCHURA - recorrido anchura
//se le da el vertice de inicio

