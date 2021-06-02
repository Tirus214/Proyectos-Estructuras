#ifndef ORDENADOR_H
#define ORDENADOR_H
#include "arraydinamico.h"


class Ordenador{
public:

    int n;
    bool finalizado;

    Ordenador(int _n){
        n = _n;
        finalizado = false;
    }

    //ordenamientos
    void intercambio(ArrayDinamico* array, int vector[]);
    void seleccion(ArrayDinamico* array, int vector[]);
    void insercion(ArrayDinamico* array, int vector[]);
    void burbuja(ArrayDinamico* array, int vector[]);
    void shell(ArrayDinamico* array, int vector[]);
    void mergesort(ArrayDinamico* array, int vector[], int l,int r);
    void merge(ArrayDinamico* array, int vector[], int l,int m,int r);
    void quicksort(ArrayDinamico* array, int vector[], int primero, int ultimo);
    void binsort(ArrayDinamico* array, int vector[]);
    void radixsort(ArrayDinamico* array, int vector[]);

    // Algoritmos intercambio, seleccion, insercion, buerbuja, shell y quicksort tomados del libro
    // "Algoritmos y Estructuas de Datos en C" de Luis Joyanes Aguilar e Ignacio Zahonero Martinez

    // Algoritmo mergesort y su auxiliar merge tomados de la pagina GeeeksforGeeks
    // https://www.geeksforgeeks.org/merge-sort/

    // Algoritmo binsort tomado del prezi de Luis Munoz
    // https://prezi.com/ourpl7caxra-/bin-sort/

    // Algoritmo radixsort tomado de la pagina EcuRed
    // https://www.ecured.cu/Ordenamiento_Radix
};

#endif // ORDENADOR_H
