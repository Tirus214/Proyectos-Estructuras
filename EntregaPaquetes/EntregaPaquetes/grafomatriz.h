#ifndef GRAFOMATRIZ_H
#define GRAFOMATRIZ_H
#include <iostream>
#include "arista.h"
using namespace std;

struct grafoMatriz{

    int max;
    int matriz[100][100];
    int vertices[100];
    bool visitados[100];
    int sumatoriaPesos[100] = {0};
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
 //busca un respectivo vertice y retona su posicion
 int indexOfVertice(int);
 //agrega un nuevo vertice al grafo
 void agregarVertice(int);
 //agrega una nueva arista al grafo
 void agregarArista(int, int, int);
 //imprime el grafo
 void imprimir();
 //obtiene el valor minimo de un arreglo y lo agrega a sumatoriaPesos
 int minVertex (int[]);

 //recorre el grafo buscando la sumatoria de costo minima de un origen a cualquier nodo
int dijkstra(int ,int);

//reinicia los nodos visitados
void limpiarVisitados();
// obtiene una matriz con el costo minimo de cada origen a cada destino del grafo
void warshall_floyd();


    // Estructura grafoMatriz obtenida de la materia del curso Estructuras de Datos
    // asi como todas sus funciones indexOfVertice, agregarVertice, agregarArista,
    // imprimir, minVertex, dijkstra y limpiarVisitados
    // II Semestre 2020
    // Prof. Diego Mora Rojas

};

#endif // GRAFOMATRIZ_H
