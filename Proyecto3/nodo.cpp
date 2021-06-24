#include "nodo.h"


void Nodo::insertarArista(int destino, int peso){
    aristas[cantAristas] = new Arista(destino, peso);
    cantAristas++;
}
