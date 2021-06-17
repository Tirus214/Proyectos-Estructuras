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

void Juego::imprimirCodigos(Nodo* matriz[4][4]){
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            cout <<" " << matriz[i][j]->codigo;

        }
        cout << endl;
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
    linkearNodosInternos();
    linkearNodosExternos();
}

void Juego::linkearNodosInternos(){
    linkearNodosMatriz(matrizA);
    linkearNodosMatriz(matrizB);
    linkearNodosMatriz(matrizC);
    linkearNodosMatriz(matrizD);
}

void Juego::linkearNodosMatriz(Nodo* matriz[4][4]){
    int k = 0;
    Nodo* vector[16];
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            vector[k] = matriz[i][j];
            k++;
        }
    }

    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            linkearNodosVector(matriz[i][j], vector);
        }
    }
}

void Juego::linkearNodosVector(Nodo* actual, Nodo* vector[16]){
    for (int i=0; i<16; i++) {
        if(actual->codigo != vector[i]->codigo)
            actual->insertarAdyacente(vector[i]);
    }
}

void Juego::linkearNodosExternos(){
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            linkearNodosFila(matrizA[i][j], i, matrizB);
            linkearNodosColumna(matrizA[i][j], j, matrizC);

            linkearNodosFila(matrizB[i][j], i, matrizA);
            linkearNodosColumna(matrizB[i][j], j, matrizD);

            linkearNodosFila(matrizC[i][j], i, matrizD);
            linkearNodosColumna(matrizC[i][j], j, matrizA);

            linkearNodosFila(matrizD[i][j], i, matrizC);
            linkearNodosColumna(matrizD[i][j], j, matrizB);
        }
    }
}

void Juego::linkearNodosFila(Nodo* vertice, int fila, Nodo* matriz[4][4]){
    for (int i=0; i<4; i++) {
        vertice->insertarAdyacente(matriz[fila][i]);
    }
}

void Juego::linkearNodosColumna(Nodo* vertice, int columna, Nodo* matriz[4][4]){
    for (int i=0; i<4; i++) {
        vertice->insertarAdyacente(matriz[i][columna]);
    }
}


void Juego::imprimirGrafo(){
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++)
            cout << " " <<matrizA[i][j]->dato;
        cout << " ";
        for (int j=0; j<4; j++)
            cout << " " <<matrizB[i][j]->dato;

        cout << endl;
    }
    cout << endl;
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++)
            cout << " " <<matrizC[i][j]->dato;
        cout << " ";
        for (int j=0; j<4; j++)
            cout << " " <<matrizD[i][j]->dato;

        cout << endl;
    }
}


void Juego::imprimirGrafo2(){
    int k=0;
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            cout << " " << grafo->vertices[k]->codigo;
            if(j == 3)
                cout << " ";
            k++;
        }
        cout << endl;
        if(i == 3)
            cout << endl;
    }
}


void Juego::solucionar(){
    if(todosLlenos()){
        finish = true;
        return;
    }
    for (int i=0; i<64; i++) {
        corrida(grafo->vertices[i]);
    }
}


bool Juego::todosLlenos(){
    for (int i=0; i<64; i++) {
        if(grafo->vertices[i]->dato == 0)
            return false;
    }
    return true;
}


void Juego::corrida(Nodo* actual){
    if(actual->modificable) //si es modificable y si no ha sido pintado
        setNumero(actual); // le asigna un numero
    pintar(actual);
;}


void Juego::pintar(Nodo* actual){
    for (int j=0; j<64; j++) {
        if(!actual->buscarAdyacente(grafo->vertices[j]->codigo)){ //si no es adyacente a actual
            if(!grafo->vertices[j]->buscarAdyacente(actual->codigo)){ //si actual no es adyacente a este nodo
                if(grafo->vertices[j]->modificable){ //y si es modificable y no ha sido pintado
                    grafo->vertices[j]->dato = actual->dato;
                }
            }
        }
    }
}


void Juego::setNumero(Nodo* actual){ //asigna un numero disponible
    if(actual->dato != 0)
        return;
    for (int i=0; i<16; i++) {
        //cout << i+1 << endl;
        if(actual->buscarAdyacente(i+1) == false){
            actual->dato = i+1;
            //cout << endl << endl;
            return;
        }
    }
}









/*



void Juego::solucionar(){
    if(finish)
        return;
    solucionarMatriz(matrizA);
    solucionarMatriz(matrizB);
    solucionarMatriz(matrizC);
    solucionarMatriz(matrizD);
    finish = true;
}

void Juego::solucionarMatriz(Nodo* matriz[4][4]){
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            setNumero(matriz[i][j]);
        }
    }
}

void Juego::solucionarPorPaso(){
    if(finish)
        return;
    setNumero(grafo->vertices[pasada]);
    pasada++;
    if(pasada == 64)
        finish = true;
}
*/
