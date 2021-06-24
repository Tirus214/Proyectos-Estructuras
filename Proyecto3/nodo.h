#ifndef NODO_H
#define NODO_H
#include <QTextStream>
#include <QApplication>
#include <QDebug>
#include "arista.h"

struct Nodo {
           int dato; // parte de datos
           Arista* aristas[K];
           int cantAristas;

           Nodo(int d)
           {
                dato = d; // asigna los dato
                cantAristas = 0;
           }

           void imprimir();
           void insertarArista(int destino, int peso);
};

#endif // NODO_H
