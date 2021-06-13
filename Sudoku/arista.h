#ifndef ARISTA_H
#define ARISTA_H
#include <iostream>
#include <stdio.h>
using namespace std;

struct Arista {
       int dato; // parte de datos
       //int peso;

       Arista * siguiente;// puntero para enlazar nodos
       // constructor

       Arista(int d)
       {
                dato = d; // asigna los datos
                //peso = p;
                siguiente = NULL; // sig es null

       }

       // imprimir
       void imprimir()
       {
            cout <<dato << endl;
       }
};

#endif // ARISTA_H
