#include "nodo.h"


void Nodo::insertarAdyacente(Nodo* nuevo){
    adyacentes[indice] = nuevo;
    indice++;
}
