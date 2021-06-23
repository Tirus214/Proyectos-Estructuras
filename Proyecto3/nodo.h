#ifndef NODO_H
#define NODO_H
#include <QTextStream>
#include <QApplication>
#include <QDebug>
#include "arista.h"

struct Nodo {
           int dato; // parte de datos
           Arista* aristas[K];

           Nodo(int d)
           {
                dato = d; // asigna los dato
           }

           void imprimir();
};

#endif // NODO_H
