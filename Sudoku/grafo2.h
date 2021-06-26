#ifndef GRAFO2_H
#define GRAFO2_H
#include "nodo2.h"
#define N 8

struct Grafo2{

    int indice; //indice con la cantidad de nodos
    Nodo2* matriz[N][N];    //grafo en forma de matriz
    Nodo2* vertices[N*N];   //grafo en forma de arreglo

    Grafo2(){
        indice = 0;
    }

    //valida si el numero no esta en esa fila
    bool validarFila(int fila, int num);
    //valida si el numero no esta en esa columna
    bool validarColumna(int columna, int num);
    //valida si el numero no esta en esa seccion dada una fila y una columna
    bool validarCuadro(int fila, int columna, int num);

    //inicializa el grafo
    void inicializar();
    //rellena la matriz con el arreglo
    void rellenar();
    //imprime la matriz
    void mostrar();
    //valida si se puede asignar un numero y lo asigna
    bool asignar(int fila, int columna, int valor);
    //le asigna los valores posibles a cada nodo
    void getPosibles();
    //resuelve la matriz de forma recursiva
    bool resolver(int fila, int columna);
    //copia un grafo dado elemento por elemento
    void copiarGrafo(Grafo2*);


    // Funciones validarFila, validarColumna, validarCuadro, asignar y resolver obtenidos del canal de youtube Jose Ygnacio Goitia Aular
    // video: Programa para resolver sudoku c++
    // link: https://www.youtube.com/watch?v=_dnkpoGgZ3Q&t=1105s
};

#endif // GRAFO2_H
;
