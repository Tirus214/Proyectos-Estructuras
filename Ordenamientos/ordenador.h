#ifndef ORDENADOR_H
#define ORDENADOR_H
#include "colacircular.h"
#include "pila.h"
#include "listadoble.h"

class Ordenador{
public:

    ColaCircular* cola;
    Pila* pila;
    ListaDoble* lista;
    int vector[10];
    int n = 10;

    Ordenador(){
        cola = new ColaCircular();
        pila = new Pila();
        lista = new ListaDoble();
    }

    int crearAleatorio();
    void generarNumeros();
    void imprimirNumeros();

    //ordenamientos
    void intercambio();
    void seleccion();
    void insercion();
    void burbuja();
    void shell();
    void mergesort();
    void quicksort();
    void binsort();
    void radixsort();
};

#endif // ORDENADOR_H
