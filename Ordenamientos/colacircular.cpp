#include "colacircular.h"

bool ColaCircular::isEmpty(){
    return array->isEmpty();
}

void ColaCircular::encolar(int dato){
    array->insertarAlFinal(dato);
}

Nodo* ColaCircular::desencolar(){
    return array->borrarAlInicio();
}

Nodo* ColaCircular::tope(){
    return array->getPrimero();
}
