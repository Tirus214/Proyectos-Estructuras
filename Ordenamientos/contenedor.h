#ifndef CONTENEDOR_H
#define CONTENEDOR_H
#include "ordenador.h"

class Contenedor{
public:

    Ordenador* ordenador;
    ArrayDinamico* colaCircular;
    ArrayDinamico* pila;
    ArrayDinamico* listaDoble;
    int original[10000];
    int vector[10000];
    int n = 10000;

    Contenedor(){
        ordenador = new Ordenador(n);
        colaCircular = new ArrayDinamico();
        pila = new ArrayDinamico();
        listaDoble = new ArrayDinamico();
    }

    int crearAleatorio();
    void generarNumeros();
    void desordenar();
    void imprimir();

    void ordIntercambio();
    void ordSeleccion();
    void ordInsercion();
    void ordBurbuja();
    void ordShell();
    void ordMergesort();
    void ordQuicksort();
    void ordBinsort();
    void ordRadixsort();

};

#endif // CONTENEDOR_H
