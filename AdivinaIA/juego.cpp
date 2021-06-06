#include "juego.h"

void Juego::guardarArbol(){
    makeList(arbol->raiz, 0);
    filemanager->escribir("DatosDeArbol", arreglo);
}

void Juego::leerArbol(){
    filemanager->leer("DatosDeArbol", arreglo);
    makeArbol();
}

void Juego::reiniciar(){
    actual = arbol->raiz;
}


void Juego::makeList(Nodo* nodo, int indice){
    if(nodo == NULL)
        return;
    arreglo[indice] = nodo->texto;
    makeList(nodo->hijoSi, 2*indice+1);
    makeList(nodo->hijoNo, 2*indice+2);
}

void Juego::makeArbol(){
    if(arreglo[0] == "")
        return;
    arbol->insertarRaiz(arreglo[0]);//primero crea la raiz
    arbol->raiz->hijoSi = new Nodo("");//crea los hijos para que no sea null
    arbol->raiz->hijoNo = new Nodo("");
    makeArbol_aux(arbol->raiz->hijoSi, 1);
    makeArbol_aux(arbol->raiz->hijoNo, 2);
}


void Juego::makeArbol_aux(Nodo* raiz, int indice){
    try{
        QString texto = arreglo[indice];
        if(texto == "")
            return;

        else{
            raiz->texto = texto;
            raiz->hijoSi = new Nodo("");
            raiz->hijoNo = new Nodo("");//crea los hijos para que no sea null
            makeArbol_aux(raiz->hijoSi, 2*indice+1);
            makeArbol_aux(raiz->hijoNo, 2*indice+2);
        }
    }
    catch(exception e){
        return;
    }
}



void Juego::inicializarArreglo(){
    for (int i=0; i<500000; i++) {
        arreglo[i] = "";
    }
}


void Juego::imprimirArreglo(){
    for (int i=0; i<cantNodos; i++) {
        qDebug() << arreglo[i];
    }
}


