#ifndef CABLERA_H
#define CABLERA_H
#include "grafo2.h"

class Cablera{
public:
    //nodos estan numerados de 0 a n-1

    bool esta[K] = {false}; //arreglo para verificar si el nodo ya fue evaluado
    Grafo2* grafo;
    int indiceArbol;    //indice para insetar en el arbol
    int indiceCola;     //indice para insertar en la cola de prim
    Arista* arbolDeExpansion[K];

    Cablera(){
        grafo = new Grafo2();
        indiceArbol = indiceCola =0;
    }

    // obtiene el total de los pesos de realizar el recorrido de menor costo por los nodos
    // y obtiene el arbol de expansion minimo
    int prim(int nodo);
    // ordena la un vector de mayor a menor
    void ordenarCola(Arista* cola[K]);
    // elimina el primer elemento de un vector
    void eliminarTopeCola(Arista* cola[K]);
    // imprime el arbol de expansion
    void imprimirArbol();


    // algoritmo prim obtenido del canal de youtube Miguel Angel Suarez
    // video: Implementación del algoritmo de Prim y el de Kruskal en C++11
    // link: https://www.youtube.com/watch?v=_JcGB-iTDRM&t=4138s

    // algoritmo ordenarCola obtenido del canal de youtube Joshep Channel
    // video: Ordenar un arreglo en C++ de mayor a menor o menor a mayor
    // link: https://www.youtube.com/watch?v=MeAww0BGZtU&t=422s
};

#endif // CABLERA_H
