#include "juego.h"

void Juego::inicializarMatrices(){
    int a=0;
    int b=4;
    int c=32;
    int d=36;
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            matrizA[i][j] = new Nodo(a+j, 0);
            matrizB[i][j] = new Nodo(b+j, 0);
            matrizC[i][j] = new Nodo(c+j, 0);
            matrizD[i][j] = new Nodo(d+j, 0);

        }
        a += 8;
        b += 8;
        c += 8;
        d += 8;
    }
}

void Juego::crearNodos(){
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            grafo->vertices[matrizA[i][j]->codigo] = matrizA[i][j];
            grafo->vertices[matrizB[i][j]->codigo] = matrizB[i][j];
            grafo->vertices[matrizC[i][j]->codigo] = matrizC[i][j];
            grafo->vertices[matrizD[i][j]->codigo] = matrizD[i][j];
        }
    }
}

void Juego::linkearNodos(){
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            linkearNodosExternos(matrizA[i][j], i, j, matrizB);
            linkearNodosExternos(matrizA[i][j], i, j, matrizC);
            linkearNodosExternos(matrizA[i][j], i, j, matrizD);

            linkearNodosExternos(matrizB[i][j], i, j, matrizA);
            linkearNodosExternos(matrizB[i][j], i, j, matrizC);
            linkearNodosExternos(matrizB[i][j], i, j, matrizD);

            linkearNodosExternos(matrizC[i][j], i, j, matrizB);
            linkearNodosExternos(matrizC[i][j], i, j, matrizA);
            linkearNodosExternos(matrizC[i][j], i, j, matrizD);

            linkearNodosExternos(matrizD[i][j], i, j, matrizB);
            linkearNodosExternos(matrizD[i][j], i, j, matrizC);
            linkearNodosExternos(matrizD[i][j], i, j, matrizA);
        }
    }
}

void Juego::linkearNodosExternos(Nodo* vertice, int fila, int columna, Nodo* matriz[4][4]){
    for (int i=0; i<4; i++) {
        vertice->insertarAdyacente(matriz[i][columna]);
        vertice->insertarAdyacente(matriz[fila][i]);
    }
}


void Juego::imprimirGrafo(){
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++)
            cout << " " <<matrizA[i][j]->dato;

        for (int j=0; j<4; j++)
            cout << " " <<matrizB[i][j]->dato;

        cout << endl;
    }
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++)
            cout << " " <<matrizC[i][j]->dato;

        for (int j=0; j<4; j++)
            cout << " " <<matrizD[i][j]->dato;

        cout << endl;
    }
}
