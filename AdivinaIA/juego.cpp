#include "juego.h"

void Juego::guardarArbol(){
    arbol->hacerBalanceado(arbol->raiz, arbol->altura(arbol->raiz));
    //cantNodos = arbol->contadorNodos(arbol->raiz);
    //inicializarArreglo();
    makeList(arbol->raiz);
    filemanager->escribir("DatosDeArbol", arreglo);
}

void Juego::leerArbol(){
    arreglo.clear();
    arreglo = filemanager->leer2("DatosDeArbol");

    //imprimirArreglo();

    makeArbol(arbol->raiz, arreglo.size()-1);


}

void Juego::reiniciar(){
    actual = arbol->raiz;
}


void Juego::makeList(Nodo* nodo){
    if(nodo == NULL)
        return;
    else{
        arreglo.append(nodo->texto);
        makeList(nodo->hijoSi);
        makeList(nodo->hijoNo);
    }
}

void Juego::makeArbol(Nodo* raiz, int indice){
    if(indice < 0)
        return;

    if(raiz == NULL){
        raiz = new Nodo(arreglo.at(indice));
    }
    else{
        arbol->insertarNuevo(raiz, arreglo.at(indice-1), arreglo.at(indice));
    }

    /*
    if(indice*2 >= arreglo.size() ||indice*2+1 >= arreglo.size() )
        return;
    else {
        raiz->hijoSi = new Nodo(arreglo.takeAt(indice*2));
        raiz->hijoNo = new Nodo(arreglo.takeAt(indice*2+1));
        makeArbol(raiz->hijoSi, indice*2);
        makeArbol(raiz->hijoSi, indice*2+1);
    }*/
}


void Juego::inicializarArreglo(){
    for (int i=0; i<cantNodos; i++) {
        arreglo.append(" ");
    }
}


void Juego::imprimirArreglo(){
    for (int i=0; i<arreglo.size(); i++) {
        qDebug() << arreglo.at(i);
    }
}


