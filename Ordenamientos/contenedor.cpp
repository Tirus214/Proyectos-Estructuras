#include "contenedor.h"

int Contenedor::crearAleatorio(){
    int numero;
    std::uniform_int_distribution<int> distribution(0,99);
    numero = distribution(*QRandomGenerator::global());
    return numero;
}

void Contenedor::generarNumeros(){
    for (int i=0; i<n; i++) {
        int num = crearAleatorio();
        original[i] = num;
        vector[i] = num;
        colaCircular->encolar(num);
        pila->push(num);
        listaDoble->insertarAlFinal(num);
    }
}

void Contenedor::desordenar(){
    Nodo* actualCola = colaCircular->array->primero;
    Nodo* actualPila = pila->array->primero;
    Nodo* actualLista = listaDoble->array->primero;
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

void Contenedor::startTimer(){
    tiempo1 = clock();
}

void Contenedor::endTimer(){
    tiempo2 = clock();
    cout << tiempo1 << "    " << tiempo2 << endl << endl;
    duracion = (double(tiempo2-tiempo1)/CLOCKS_PER_SEC);
}


void Contenedor::ordIntercambio(){
    startTimer();
    ordenador->intercambio(NULL, vector);
    ordenador->intercambio(colaCircular->array, NULL);
    ordenador->intercambio(listaDoble->array, NULL);
    ordenador->intercambio(pila->array, NULL);
    endTimer();
}

void Contenedor::ordSeleccion(){
    startTimer();
    ordenador->seleccion(NULL, vector);
    ordenador->seleccion(colaCircular->array, NULL);
    ordenador->seleccion(listaDoble->array, NULL);
    ordenador->seleccion(pila->array, NULL);
    endTimer();
}

void Contenedor::ordInsercion(){
    startTimer();
    ordenador->insercion(NULL, vector);
    ordenador->insercion(colaCircular->array, NULL);
    ordenador->insercion(listaDoble->array, NULL);
    ordenador->insercion(pila->array, NULL);
    endTimer();
}

void Contenedor::ordBurbuja(){
    startTimer();
    ordenador->burbuja(NULL, vector);
    ordenador->burbuja(colaCircular->array, NULL);
    ordenador->burbuja(listaDoble->array, NULL);
    ordenador->burbuja(pila->array, NULL);
    endTimer();
}

void Contenedor::ordShell(){
    startTimer();
    ordenador->shell(NULL, vector);
    ordenador->shell(colaCircular->array, NULL);
    ordenador->shell(listaDoble->array, NULL);
    ordenador->shell(pila->array, NULL);
    endTimer();
}

void Contenedor::ordMergesort(){
    startTimer();
    ordenador->mergesort(NULL, vector, 0, n-1);
    ordenador->mergesort(colaCircular->array, NULL, 0, n-1);
    ordenador->mergesort(listaDoble->array, NULL, 0, n-1);
    ordenador->mergesort(pila->array, NULL, 0, n-1);
    endTimer();
}

void Contenedor::ordQuicksort(){
    startTimer();
    ordenador->quicksort(NULL, vector, 0, n-1);
    ordenador->quicksort(colaCircular->array, NULL, 0, n-1);
    ordenador->quicksort(listaDoble->array, NULL, 0, n-1);
    ordenador->quicksort(pila->array, NULL, 0, n-1);
    endTimer();
}

void Contenedor::ordBinsort(){
    startTimer();
    ordenador->binsort(NULL, vector);
    ordenador->binsort(colaCircular->array, NULL);
    ordenador->binsort(listaDoble->array, NULL);
    ordenador->binsort(pila->array, NULL);
    if(ordenador->finalizado)
        endTimer();
}

void Contenedor::ordRadixsort(){
    startTimer();
    ordenador->radixsort(NULL, vector);
    ordenador->radixsort(colaCircular->array, NULL);
    ordenador->radixsort(listaDoble->array, NULL);
    ordenador->radixsort(pila->array, NULL);
    endTimer();
}

