#ifndef ARISTA_H
#define ARISTA_H
#include <iostream>
#include <stdio.h>
using namespace std;

struct Arista {
       int dato; // parte de datos
       int peso;

       Arista * siguiente;// puntero para enlazar nodos
       // constructor

       Arista(int dat_, int peso_)
       {
                dato = dat_; // asigna los datos
                peso = peso_;
                siguiente = NULL; // sig es null

       }

       // imprimir
       void imprimir()
       {
            cout <<peso << endl;
       }
};

#endif // ARISTA_H
