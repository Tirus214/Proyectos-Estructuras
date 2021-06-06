#ifndef LISTADOBLEENLAZADA_H
#define LISTADOBLEENLAZADA_H

#include "arraydinamico.h"

struct ListaDobleEnlazada
{
    ArrayDinamico* array;

    ListaDobleEnlazada(){
        array = new ArrayDinamico();
    }

    bool isEmpty();
    void insertarAlFinal(int dato);
    Nodo* borrarAlFinal();
    Nodo* getPrimero();
};


#endif // LISTADOBLEENLAZADA_H
