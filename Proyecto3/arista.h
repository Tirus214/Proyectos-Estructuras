#ifndef ARISTA_H
#define ARISTA_H
#include <iostream>
#include <stdio.h>
#define K 100
using namespace std;

struct Arista {

       int dato; // parte de datos
       int peso;

       Arista(int dat_, int peso_)
       {
                dato = dat_; // asigna los datos
                peso = peso_;
       }

       // imprimir
       void imprimir()
       {
            cout <<peso << endl;
       }
};

#endif // ARISTA_H
