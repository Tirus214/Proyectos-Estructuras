#include "pila.h"

bool Pila::isEmpty(){
    return array->isEmpty();
}

void Pila::push(int dato){
    array->insertarAlInicio(dato);
}

Nodo* Pila::pop(){
    return array->borrarAlInicio();
}

Nodo* Pila::peek(){
    return array->getPrimero();
}
