#ifndef LISTADOBLE_H
#define LISTADOBLE_H
#include "nodo.h"

//Estructura tomada de material de clase del Profesor Diego Mora Rojas
//Instituto Tecnologico de Costa Rica
//Curso Estructuras de Datos
//II Semestre 2020

struct ListaDoble{

    Nodo* primero;
    Nodo* ultimo;

    ListaDoble(){
        primero = ultimo = NULL;
    }

    bool isEmpty();
    void insertarAlInicio (int _dato);
    void insertarAlFinal (int _dato);
    Nodo* borrarAlFinal();
    Nodo* borrarAlInicio();
    void imprimir();
};

#endif // LISTADOBLE_H
