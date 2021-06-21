#ifndef GRAFO2_H
#define GRAFO2_H
#include "nodo2.h"
#define N 8

struct Grafo2{

    int indice;
    Nodo2* matriz[N][N];
    Nodo2* vertices[N*N];

    Grafo2(){
        indice = 0;
    }

    bool validarFila(int fila, int num);
    bool validarColumna(int columna, int num);
    bool validarCuadro(int fila, int columna, int num);

    void inicializar();
    void rellenar();
    void mostrar();
    bool asignar(int fila, int columna, int valor);
    void liberarmemoria();

    void getPosibles();
    bool resolver(int fila, int columna);

    bool verificarElemento(int fila, int columna);
    bool resolver2();

    void copiarGrafo(Grafo2*);
};

#endif // GRAFO2_H
;
