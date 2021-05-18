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
    void mergesort(int izquierda,int derecha);
    void merge(int izquierda,int medio,int derecha);
    void quicksort(int primero, int ultimo);
    void binsort();
    void radixsort();

    // Algoritmos intercambio, seleccion, insercion, buerbuja y shell tomados del libro
    // "Algoritmos y Estructuas de Datos en C" de Luis Joyanes Aguilar e Ignacio Zahonero Martinez

    // Algoritmo mergesort y su auxiliar merge tomados del blog CodeMyN
    // https://codemyn.blogspot.com/2019/07/metodos-de-ordenamiento-mergesort-en-c.html

    // Algoritmo binsort tomado del prezi de Luis Munoz
    // https://prezi.com/ourpl7caxra-/bin-sort/

    // Algoritmo radixsort tomado de la pagina EcuRed
    // https://www.ecured.cu/Ordenamiento_Radix
};

#endif // ORDENADOR_H
