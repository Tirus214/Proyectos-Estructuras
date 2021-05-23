#ifndef ARRAYDINAMICO_H
#define ARRAYDINAMICO_H
#include "nodo.h"

//Estructura tomada de material de clase del Profesor Diego Mora Rojas
//Instituto Tecnologico de Costa Rica
//Curso Estructuras de Datos
//II Semestre 2020

struct ArrayDinamico{

    Nodo* primero;
    Nodo* ultimo;
    int tiempoCarga;

    ArrayDinamico(){
        primero = ultimo = NULL;
        tiempoCarga = 0;
    }

    bool isEmpty();
    void insertarAlInicio (int _dato);
    void insertarAlFinal (int _dato);
    Nodo* borrarAlFinal();
    Nodo* borrarAlInicio();
    Nodo* buscarEnPosicion(int posicion);
    Nodo* getPrimero();
    Nodo* getUltimo();
    void imprimir();
};

#endif // ARRAYDINAMICO_H
