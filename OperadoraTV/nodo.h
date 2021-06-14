#ifndef NODO_H
#define NODO_H
#include <QTextStream>
#include <QApplication>
#include <QDebug>
#include "listaaristas.h"
#include "listasimple.h"

struct Nodo {
       int codigo;
       int dato; // parte de datos
       Nodo* adyacentes[23];
       bool visitado;
       Nodo* siguiente;// puntero para enlazar nodos
       // constructor
       int indice;

       Nodo(int codigo_, int dato_)
       {
                codigo = codigo_;
                dato = dato_; // asigna los datos
                visitado = false;
                siguiente = NULL; // sig es null
                indice = 0;

       }

       void imprimir();
       void insertarAdyacente(Nodo*);
};

#endif // NODO_H
