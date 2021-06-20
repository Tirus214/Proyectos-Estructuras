#ifndef CABLERA_H
#define CABLERA_H
#include "grafo.h"
#include <bits/stdc++.h>

class Cablera{
public:
    //nodos estan numerados de 0 a n-1

    vector<vector<pair<int, int>>> graf;
    vector<bool> esta;
    Grafo* grafo;

    Cablera(){
        grafo = new Grafo();
    }

    int prim(int nodo);
};

#endif // CABLERA_H
