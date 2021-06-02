#include "nodo.h"

bool Nodo::isHoja(){
    if (hijoNo==NULL & hijoSi==NULL)
        return true;
    else if(hijoNo->texto=="" & hijoSi->texto=="")
        return true;
    else return false;
}


void Nodo::insertarHijoSi(QString texto){
    hijoSi = new Nodo(texto);
}

void Nodo::insertarHijoNo(QString texto){
    hijoNo = new Nodo(texto);
}
