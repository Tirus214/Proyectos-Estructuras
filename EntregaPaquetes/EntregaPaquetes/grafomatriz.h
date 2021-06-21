#ifndef GRAFOMATRIZ_H
#define GRAFOMATRIZ_H
#include <iostream>
using namespace std;

struct grafoMatriz{

    int max;
    int matriz[100][100];
    int vertices[100];
    bool visitados[100];
    int cantidadVertices;

    grafoMatriz() {
        max = 100;
        cantidadVertices = 0;
        // inicializa arreglos
        for (int i=0; i<100; i++)
        {
            vertices[i] = 0;
            visitados[i] = 0;

            // para incializar matriz
            for (int j = 0; j < 100; j++)
            {
                matriz[i][j] = 0;
            }
        }

    }

//    prototipos
 int indexOfVertice(int);
 void agregarVertice(int);
 void agregarArista(int, int, int);
 void imprimir();
 int minVertex (int[]);
int* dijkstra(int ) ;
void limpiarVisitados();
void warshall_floyd();

};

#endif // GRAFOMATRIZ_H
