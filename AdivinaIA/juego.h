#ifndef JUEGO_H
#define JUEGO_H
#include "filemanager.h"
#include "arbol.h"

class Juego
{
public:
    Filemanager* filemanager;
    Arbol* arbol;

    Juego(){
        filemanager = new Filemanager();
        arbol = new Arbol();
    }

    void leerArbol();
    void guardarArbol();
};

#endif // JUEGO_H
