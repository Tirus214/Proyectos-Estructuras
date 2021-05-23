#ifndef NODO_H
#define NODO_H
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <QApplication>
#include <QtCore>
#include <QtDebug>
using namespace std;

struct Nodo{
    int numero;
    Nodo* siguiente;
    Nodo* anterior;

    Nodo(){
        numero = 0;
        siguiente = anterior = NULL;
    }

    Nodo(int numNuevo){
        numero = numNuevo;
        siguiente = anterior = NULL;
    }
};

#endif // NODO_H
