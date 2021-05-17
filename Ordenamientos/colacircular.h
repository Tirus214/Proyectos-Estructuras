#ifndef COLACIRCULAR_H
#define COLACIRCULAR_H
#include "nodo.h"

struct ColaCircular{

    //atributos
    Nodo *primero;
    Nodo *ultimo;

    //constructor
    ColaCircular(){
        primero = ultimo = NULL;
    }

    //encabezados

    //ingresa un nuevo dato al final de la cola
    void encolar (int dato);
    //saca el primer elemento de la cola
    Nodo* desencolar (void);
    //retorna el primer elemento de la cola
    Nodo* getFrente(void);
    //verifica si la lista esta vacia
    bool isEmpty(void);

    void imprimir();
};

#endif // COLACIRCULAR_H
