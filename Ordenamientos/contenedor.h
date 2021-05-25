#ifndef CONTENEDOR_H
#define CONTENEDOR_H
#include "ordenador.h"
#include <ctime>

class Contenedor{
public:

    Ordenador* ordenador;
    ArrayDinamico* colaCircular;
    ArrayDinamico* pila;
    ArrayDinamico* listaDoble;
    int original[10000];
    int vector[10000];
    int n = 10000;
    unsigned tiempo1;
    unsigned tiempo2;
    double duracion;

    Contenedor(){
        ordenador = new Ordenador(n);
        colaCircular = new ArrayDinamico();
        pila = new ArrayDinamico();
        listaDoble = new ArrayDinamico();
        tiempo1 = 0;
        tiempo2 = 0;
        duracion = 0.0;
    }

    int crearAleatorio();
    void generarNumeros();
    void desordenar();
    void imprimir();
    void startTimer();
    void endTimer();

    void ordIntercambio();
    void ordSeleccion();
    void ordInsercion();
    void ordBurbuja();
    void ordShell();
    void ordMergesort();
    void ordQuicksort();
    void ordBinsort();
    void ordRadixsort();

    // Algoritmos startTimer y endTimer para el tiempo de ejecucion de un algoritmo
    // obtenidos de la pagina Mascando Bits
    // https://mascandobits.es/programacion/medir-tiempo-de-ejecucion-en-c/
};

#endif // CONTENEDOR_H
