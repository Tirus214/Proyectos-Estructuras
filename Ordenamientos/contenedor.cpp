#include "contenedor.h"

int Contenedor::crearAleatorio(){
    int numero;
    std::uniform_int_distribution<int> distribution(0, 1000000);
    numero = distribution(*QRandomGenerator::global());
    return numero;
}

void Contenedor::generarNumeros(){
    for (int i=0; i<n; i++) {
        int num = crearAleatorio();
        original[i] = num;
        vector[i] = num;
        colaCircular->insertarAlFinal(num);
        pila->insertarAlFinal(num);
        listaDoble->insertarAlFinal(num);
    }
}

void Contenedor::desordenar(){
    Nodo* actualCola = colaCircular->primero;
    Nodo* actualPila = pila->primero;
    Nodo* actualLista = listaDoble->primero;
    for (int i=0; i<n; i++) {
        int num = original[i];
        vector[i] = num;
        actualCola->numero = num;
        actualPila->numero = num;
        actualLista->numero = num;

        actualCola = actualCola->siguiente;
        actualLista = actualLista->siguiente;
        actualPila = actualPila->siguiente;
    }
}

void Contenedor::imprimir(){
    for (int i=0; i<n; i++)
        cout << vector[i] << " ";
}



void Contenedor::ordIntercambio(){
    ordenador->intercambio(NULL, vector);
    ordenador->intercambio(colaCircular, NULL);
    ordenador->intercambio(listaDoble, NULL);
    ordenador->intercambio(pila, NULL);
}

void Contenedor::ordSeleccion(){
    ordenador->seleccion(NULL, vector);
    ordenador->seleccion(colaCircular, NULL);
    ordenador->seleccion(listaDoble, NULL);
    ordenador->seleccion(pila, NULL);
}

void Contenedor::ordInsercion(){
    ordenador->insercion(NULL, vector);
    ordenador->insercion(colaCircular, NULL);
    ordenador->insercion(listaDoble, NULL);
    ordenador->insercion(pila, NULL);
}

void Contenedor::ordBurbuja(){
    ordenador->burbuja(NULL, vector);
    ordenador->burbuja(colaCircular, NULL);
    ordenador->burbuja(listaDoble, NULL);
    ordenador->burbuja(pila, NULL);
}

void Contenedor::ordShell(){
    ordenador->shell(NULL, vector);
    ordenador->shell(colaCircular, NULL);
    ordenador->shell(listaDoble, NULL);
    ordenador->shell(pila, NULL);
}

void Contenedor::ordMergesort(){
    ordenador->mergesort(NULL, vector, 0, n-1);
    ordenador->mergesort(colaCircular, NULL, 0, n-1);
    ordenador->mergesort(listaDoble, NULL, 0, n-1);
    ordenador->mergesort(pila, NULL, 0, n-1);
}

void Contenedor::ordQuicksort(){
    ordenador->quicksort(NULL, vector, 0, n-1);
    ordenador->quicksort(colaCircular, NULL, 0, n-1);
    ordenador->quicksort(listaDoble, NULL, 0, n-1);
    ordenador->quicksort(pila, NULL, 0, n-1);
}

void Contenedor::ordBinsort(){
    ordenador->binsort(NULL, vector);
    ordenador->binsort(colaCircular, NULL);
    ordenador->binsort(listaDoble, NULL);
    ordenador->binsort(pila, NULL);
}

void Contenedor::ordRadixsort(){
    ordenador->radixsort(NULL, vector);
    ordenador->radixsort(colaCircular, NULL);
    ordenador->radixsort(listaDoble, NULL);
    ordenador->radixsort(pila, NULL);
}
