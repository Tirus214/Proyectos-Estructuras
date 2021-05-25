#include "arbol.h"

void Arbol::hijoSi(){
    if(2*indice+1 < lista->length()){
        indice = 2*indice+1;
        actual = lista->takeAt(indice);
    }

}

void Arbol::hijoNo(){
    if(2*indice+2 < lista->length()){
        indice = 2*indice+2;
        actual = lista->takeAt(2*indice+2);
    }
}

