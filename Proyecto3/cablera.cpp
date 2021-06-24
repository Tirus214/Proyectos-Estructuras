#include "cablera.h"
/*
int Cablera::prim(int nodo){
    int ans = 0;
    priority_queue<pair<int, int>> cola; //guardar aristas
    cola.push({0, nodo});
    while(!cola.empty()){
        pair<int, int> curr = cola.top();
        cola.pop();
        if(esta[curr.second])
            continue;
        esta[curr.second] = true;
    }
}
*/


int Cablera::prim(int nodo){
    indiceArbol = 0;
    int ans = 0;
    Arista* cola[K]; //guardar aristas {nodo, -peso}
    cola[indiceCola] = new Arista(nodo, 0);
    indiceCola++;
    //ordenarCola(cola);

    while(indiceCola > 0){
        Arista* actual = cola[0]; //tope de la cola
        eliminarTopeCola(cola); //lo elimina
        //eliminarTopeCola(cola);

        if(esta[actual->dato] == true)
            continue;

        arbolDeExpansion[indiceArbol] = new Arista(actual->dato, -actual->peso);
        indiceArbol++;
        esta[actual->dato] = true;
        ans = ans - actual->peso;

        Nodo* tmp = grafo->vertices[actual->dato];
        for (int i=0; i < tmp->cantAristas; i++) {
            cola[indiceCola] =  new Arista(tmp->aristas[i]->dato, -tmp->aristas[i]->peso);
            indiceCola++;
            ordenarCola(cola);
        }
    }
    return ans;
}

void Cablera::ordenarCola(Arista* cola[K]){
    for (int i=0; i<indiceCola; i++) {
        for (int j=i+1; j<indiceCola; j++) {
            if(cola[i]->peso < cola[j]->peso){
                Arista* aux = cola[i];
                cola[i] = cola[j];
                cola[j] = aux;
            }
        }
    }
}

void Cablera::eliminarTopeCola(Arista* cola[K]){
    if(indiceCola > 0){
        for (int i=0; i<K-1; i++)
            cola[i] = cola[i+1];
        cola[K] = NULL;
        indiceCola--;
    }
}


void Cablera::inicializarEsta(){
    for (int i=0; i<K; i++) {
        esta[i] = false;
    }
}



void Cablera::imprimirArbol(){
    for (int i=0; i<indiceArbol; i++) {
        qDebug() << "Nodo: " << arbolDeExpansion[i]->dato << " Peso arista: " << arbolDeExpansion[i]->peso;
    }
}

