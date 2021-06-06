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

    //envia a leer el arbol
    void leerArbol();
    //envia a guardar el arbol
    void guardarArbol();
    //convierte el arbol en vector
    void makeList(Nodo*, int);
    //convierte el vector a arbol
    void makeArbol();
    //auxiliar de makeArbol
    void makeArbol_aux(Nodo* raiz, int indice);
    //apunta el nodo actual a la raiz del arbol
    void reiniciar();
    //inilicializa el arreglo con elementos vacios
    void inicializarArreglo();
    //imprime el arreglo
    void imprimirArreglo();
};

#endif // JUEGO_H
