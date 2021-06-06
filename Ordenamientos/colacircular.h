#ifndef COLACIRCULAR_H
#define COLACIRCULAR_H
#include "arraydinamico.h"

struct ColaCircular
{
    ArrayDinamico* array;

    ColaCircular(){
        array = new ArrayDinamico();
    }

    bool isEmpty();
    void encolar(int dato);
    Nodo* desencolar();
    Nodo* tope();
};

#endif // COLACIRCULAR_H
