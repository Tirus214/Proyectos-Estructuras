#ifndef JUEGO_H
#define JUEGO_H
#include "filemanager.h"
#include "arbol.h"

class Juego
{
public:
    Filemanager* filemanager;
    Arbol* arbol;
    Nodo* actual;
    bool acerto;
    QString arreglo[K];
    int cantNodos;

    Juego(){
        filemanager = new Filemanager();
        arbol = new Arbol();
        actual = arbol->raiz;
        acerto = false;
        cantNodos = 0;
    }

    void leerArbol();
    void guardarArbol();
    void makeList(Nodo*, int);
    void makeArbol();
    void makeArbol_aux(Nodo* raiz, int indice);
    void reiniciar();
    void inicializarArreglo();
    void imprimirArreglo();
};

#endif // JUEGO_H
