#include "cablera.h"
#include "ListaSimple.h"

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


int Cablera::prim(int nodo,ListaSimple *lista)
{

    indiceArbol = 0;
    int ans = 0;
    Arista* cola[K]; // cola de prioridad de mayor a menor peso que guarda aristas {nodo, -peso}
    cola[indiceCola] = new Arista(nodo, 0); //inserta una nueva arista
    indiceCola++;

    while(indiceCola > 0)
    {
        Arista* actual = cola[0]; //tope de la cola
        eliminarTopeCola(cola); //lo elimina

        if(esta[actual->dato] == true)//verifica si ya fue evaluado
            continue;

        esta[actual->dato] = true;

        arbolDeExpansion[indiceArbol] = new Arista(actual->dato, -actual->peso); //inserta en el arbol de expansion
        indiceArbol++;

        lista->add(-actual->peso);


        ans = ans - actual->peso; //suma el peso

        Nodo* tmp = grafo->vertices[actual->dato];

        for (int i=0; i < tmp->cantAristas; i++)
        {
            //recorre todas las aristas del nodo

            cola[indiceCola] =  new Arista(tmp->aristas[i]->dato, -tmp->aristas[i]->peso); // las anade a la cola
            indiceCola++;
            ordenarCola(cola); //ordena la cola
        }
    }


    return ans;
}

void Cablera::ordenarCola(Arista* cola[K])
{

    for (int i=0; i<indiceCola; i++)
    {
        for (int j=i+1; j<indiceCola; j++)
        {
            if(cola[i]->peso < cola[j]->peso)
            {
                Arista* aux = cola[i];
                cola[i] = cola[j];
                cola[j] = aux;
            }
        }
    }
    /*
    qDebug() << "Cola ordenada: ";
    for(int x=0;x<indiceCola;x++ )
        qDebug() << "" << cola[x]->peso;
    qDebug() << "Fin";
    */
}

void Cablera::eliminarTopeCola(Arista* cola[K]){
    if(indiceCola > 0){
        for (int i=0; i<K-1; i++)
            cola[i] = cola[i+1];
        cola[K] = NULL;
        indiceCola--;
    }
}

/*
void Cablera::inicializarEsta(){
    for (int i=0; i<K; i++) {
        esta[i] = false;
    }
}
*/


void Cablera::imprimirArbol(){
    for (int i=0; i<indiceArbol; i++) {
        qDebug() << "Nodo: " << arbolDeExpansion[i]->dato << " Peso arista: " << arbolDeExpansion[i]->peso;
    }
}

