#ifndef NODO2_H
#define NODO2_H
#include <QTextStream>
#include <QApplication>
#include <QDebug>
#include <iostream>

using namespace std;

struct Nodo2{

    int dato;
    bool modificable;
    int* posibles;  //arreglo de valores posibles
    int cantPosibles;

    Nodo2(){
        dato = 0;
        modificable = true;
        cantPosibles = 0;
    }
};

#endif // NODO2_H
