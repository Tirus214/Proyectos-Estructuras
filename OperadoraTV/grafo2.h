#ifndef GRAFO2_H
#define GRAFO2_H
#include <bits/stdc++.h>
using namespace std;

struct Grafo2{

    int numNodos;
    int cantAristas;
    vector<vector<pair<int, int>>> graf;
    vector<bool> esta;

    Grafo2(){
        n = 0;
        m = 0;

    }
};

#endif // GRAFO2_H
