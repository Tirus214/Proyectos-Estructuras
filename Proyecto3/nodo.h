#ifndef NODO_H
#define NODO_H
#include <QTextStream>
#include <QApplication>
#include <QDebug>
#include "arista.h"

struct Nodo {
           int dato; // parte de datos
           Arista* aristas[K]; //vector de aristas
           int cantAristas;

           Nodo(int d)
           {
                dato = d; // asigna los dato
                cantAristas = 0;
           }

           //inserta una arista dado un destino y peso
           void insertarArista(int destino, int peso, int codigo);
};

#endif // NODO_H
