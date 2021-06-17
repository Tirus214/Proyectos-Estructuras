#ifndef MAPA_H
#define MAPA_H
#include "grafo.h"


class Mapa
{
public:
    Grafo* grafo;

    Mapa(){
        grafo = new Grafo();
    }
};

#endif // MAPA_H
