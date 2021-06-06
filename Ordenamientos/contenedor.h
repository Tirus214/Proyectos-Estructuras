#ifndef CONTENEDOR_H
#define CONTENEDOR_H
#include "ordenador.h"
#include <ctime>
#define K 5000

class Contenedor{
public:

    Ordenador* ordenador;
    ColaCircular* colaCircular;
    Pila* pila;
    ListaDobleEnlazada* listaDoble;
    int original[K];
    int vector[K];
    int n = K;
    unsigned tiempo1;
    unsigned tiempo2;
    double duracion;

    Contenedor(){
        ordenador = new Ordenador(n);
        colaCircular = new ColaCircular();
        pila = new Pila();
        listaDoble = new ListaDobleEnlazada();
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
