#ifndef PILA_H
#define PILA_H
#include "arraydinamico.h"

struct Pila
{
    ArrayDinamico* array;

    Pila(){
        array = new ArrayDinamico();
    }

    bool isEmpty();
    void push(int dato);
    Nodo* pop();
    Nodo* peek();
};


#endif // PILA_H
