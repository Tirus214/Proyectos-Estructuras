#ifndef ARBOL_H
#define ARBOL_H
#include <QTextStream>
#include <QApplication>
#include <QDebug>
#include "nodo.h"

struct Arbol
{
       Nodo* raiz;

       Arbol ()
       {
             raiz = NULL;
       }

       void insertar (QString);
       Nodo* insertar(QString, Nodo*);
       void inOrden(Nodo*);
       void preOrden(Nodo*);
       void posOrden(Nodo*);
       Nodo* buscar (QString, Nodo*);
       int obtenerNumeroElementos(Nodo*);
       int peso (Nodo*);
       int obtenerAltura(Nodo*);
       Nodo* mayor (Nodo* arbol);
       Nodo* borrarElemento(QString);
       Nodo* borrarElemento(QString, Nodo*);
       void anchura(Nodo*);
       int altura(Nodo*);
       int cantHojas(Nodo*);
        int cantNodos2(Nodo*);
       void nodos_nivel (Nodo*, int, int);
       int contadorNodos(Nodo*);


       void insertarNuevo(Nodo*, QString, QString);
       void hacerBalanceado(Nodo*, int);
       void insertarRaiz(QString texto);
};

#endif // ARBOL_H
