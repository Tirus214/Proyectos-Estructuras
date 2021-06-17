#include "nodo.h"


void Nodo::insertarAdyacente(Nodo* nuevo){
    if(indice < 23){
        adyacentes[indice] = nuevo;
        indice++;
    }
}


bool Nodo::buscarAdyacente(int n){
    for (int i=0; i<23; i++) {
        if(adyacentes[i]->dato == n)
            return true;
    }
    return false;
}
