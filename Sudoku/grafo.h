#ifndef GRAFO_H
#define GRAFO_H
#include "listasimple.h"
#include "nodo.h"

struct Grafo
{
       ListaSimple * vertices;

       Grafo()
       {
              vertices = new ListaSimple();
       }

       void insertarVertice(int d);
       void insertarArista(int origen, int destino, int peso);
       void imprimir ();
       void borrarArista(int origen, int destino);
       void borrarVertice (int dato);
       void visitarVertice(int dato);
       bool visitadoVertice(int dato);
       void limpiarVisitados();
       void visitarAdyacentes(int nodo);
       void profundidad();
       void anchura(Nodo * v);


// fin struct
};

#endif // GRAFO_H
