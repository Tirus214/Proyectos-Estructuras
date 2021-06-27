#ifndef ARISTA_H
#define ARISTA_H
#include <iostream>
#include <stdio.h>
#define K 30
using namespace std;

struct Arista {

           int codigo;
           int dato; // nodo destino
           int peso; // peso

           Arista(int dat_, int peso_, int codigo_)
           {
                    codigo = codigo_;
                    dato = dat_; // asigna los datos
                    peso = peso_;
           }

};

#endif // ARISTA_H
