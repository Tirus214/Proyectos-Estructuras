#include "nodo.h"


void Nodo::insertarArista(int destino, int peso, int codigo){
    aristas[cantAristas] = new Arista(destino, peso, codigo);
    cantAristas++;
}
