#include "arbol.h"


void Arbol::insertarNuevo(Nodo* elemento, QString pregunta, QString respuesta){
    QString antiguo = elemento->texto;
    elemento->texto = pregunta;
    elemento->hijoSi = new Nodo(respuesta);
    elemento->hijoNo = new Nodo(antiguo);
}


void Arbol::hacerCompleto(Nodo* arbol, int altura){
    if(altura == 0)
        return;
    else if(arbol->isHoja()){
        arbol->hijoSi = new Nodo(" ");
        arbol->hijoNo = new Nodo(" ");
    }

    hacerCompleto(arbol->hijoSi, altura-1);
    hacerCompleto(arbol->hijoNo, altura-1);
}


void Arbol::insertarRaiz(QString texto){
    raiz = new Nodo(texto);
}



