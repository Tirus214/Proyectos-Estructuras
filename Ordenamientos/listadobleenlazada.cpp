#include "listadobleenlazada.h"

bool ListaDobleEnlazada::isEmpty(){
    return array->isEmpty();
}

void ListaDobleEnlazada::insertarAlFinal(int dato){
    array->insertarAlFinal(dato);
}

Nodo* ListaDobleEnlazada::borrarAlFinal(){
    return array->borrarAlFinal();
}

Nodo* ListaDobleEnlazada::getPrimero(){
    return array->getPrimero();
}
