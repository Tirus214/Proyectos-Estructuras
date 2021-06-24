#ifndef ARISTA_H
#define ARISTA_H
#include <iostream>
#include <stdio.h>
#define K 30
using namespace std;

struct Arista {

       int dato; // nodo destino
       int peso; // peso

       Arista(int dat_, int peso_)
       {
                dato = dat_; // asigna los datos
                peso = peso_;
       }

};

#endif // ARISTA_H
