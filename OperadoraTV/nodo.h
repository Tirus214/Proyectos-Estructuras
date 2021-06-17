#ifndef NODO_H
#define NODO_H
#include <QTextStream>
#include <QApplication>
#include <QDebug>
#include "listaaristas.h"
#include "listasimple.h"

struct Nodo {
           int dato; // parte de datos
           ListaAristas * aristas;
           bool visitado;
           Nodo* siguiente;// puntero para enlazar nodos
           // constructor

           Nodo(int d)
           {
                    dato = d; // asigna los datos
                    aristas = new ListaAristas();
                    visitado = false;
                    siguiente = NULL; // sig es null

           }

           void imprimir();
};

#endif // NODO_H
