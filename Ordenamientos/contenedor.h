#ifndef CONTENEDOR_H
#define CONTENEDOR_H
#include "ordenador.h"
#include <ctime>
#define K 100000

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

    //introduce en los TDA n cantidad de numeros
    int crearAleatorio();
    //genera un numero aleatorio
    void generarNumeros();
    void desordenar();
    void imprimir();
    //inicia el contador de ejecucion
    void startTimer();
    //finaliza y retorna el contador de ejecucion
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
