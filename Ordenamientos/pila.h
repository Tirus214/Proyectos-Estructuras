#ifndef PILA_H
#define PILA_H
#include "nodo.h"

struct Pila{

    Nodo* ultimo;

    Pila(){
        ultimo = NULL;
    }

    void push(int dato);
    Nodo* pop(void);
    bool isEmpty (void);
    Nodo* peek();
};

#endif // PILA_H
