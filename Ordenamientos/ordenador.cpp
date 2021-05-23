#include "ordenador.h"


void Ordenador::intercambio(ArrayDinamico* array, int vector[]){
    if(array == NULL){
        for(int i = 0; i <= n-2; i++)
                for(int j = i+1; j <= n-1; j++)
                    if( vector[i] > vector[j] ){
                        int aux = vector[i];
                        vector[i] = vector[j];
                        vector[j] = aux;
                    }
     }
     else{
        if(!array->isEmpty()){
            Nodo* actualI = array->primero;
            for(int i = 0; i <= n-2; i++){
                Nodo* actualJ = actualI->siguiente;
                for(int j = i+1; j <= n-1; j++){
                    if( actualI->numero > actualJ->numero ){
                        int aux = actualI->numero;
                        actualI->numero = actualJ->numero;
                        actualJ->numero = aux;
                    }
                    actualJ = actualJ->siguiente;
                }
                actualI = actualI->siguiente;
            }
        }
     }
}


void Ordenador::seleccion(ArrayDinamico* array, int vector[]){
    if(array == NULL){
        for (int i = 0; i < n-1; i++) {
            int indiceMenor = i;
            for (int j = i+1; j < n; j++)
                if( vector[j] < vector[indiceMenor])
                    indiceMenor = j;
            if(i != indiceMenor){
                int aux = vector[i];
                vector[i] = vector[indiceMenor];
                vector[indiceMenor] = aux;
            }
        }
    }
    else{
        if(!array->isEmpty()){
            Nodo* actualI = array->primero;
            Nodo* actualMenor;
            for (int i = 0; i < n-1; i++) {
                int indiceMenor = i;
                actualMenor = actualI;
                Nodo* actualJ = actualI->siguiente;

                for (int j = i+1; j < n; j++){
                    if( actualJ->numero < actualMenor->numero){
                        indiceMenor = j;
                        actualMenor = actualJ;
                    }
                    actualJ = actualJ->siguiente;
                }

                if(i != indiceMenor){
                    int aux = actualI->numero;
                    actualI->numero = actualMenor->numero;
                    actualMenor->numero = aux;
                }

                actualI = actualI->siguiente;
            }
        }
    }
}

void Ordenador::insercion(ArrayDinamico* array, int vector[]){
    if(array == NULL){
        for(int i = 1; i < n; i++){
                int j = i;
                int aux = vector[i];

                while(j > 0 && aux < vector[j-1]){
                   vector[j] = vector[j-1];
                    j--;
                }

               vector[j] = aux;
            }
    }
    else{
        if(!array->isEmpty()){
            Nodo* actualI = array->primero;
            for (int i=0; i<n; i++) {
                Nodo* actualJ = actualI;
                int j = i;
                int aux = actualI->numero;

                while(j > 0 && aux < actualJ->anterior->numero){
                    actualJ->numero = actualJ->anterior->numero;
                    j--;
                    actualJ = actualJ->anterior;
                }

                actualJ->numero = aux;
                actualI = actualI->siguiente;
            }
        }
    }
}

void Ordenador::burbuja(ArrayDinamico* array, int vector[]){
    if(array == NULL){
        int interruptor = 1;

        for(int pasada = 0; pasada < n-1 && interruptor != 0; pasada++){
            interruptor = 0;
            for(int j = 0; j < n-pasada-1; j++)
                if(vector[j] > vector[j+1]){
                    interruptor = 1;
                    int aux = vector[j];
                    vector[j] = vector[j+1];
                    vector[j+1] = aux;
                }
        }
    }
    else{
        if(!array->isEmpty()){
            int interruptor = 1;

            for(int pasada = 0; pasada < n-1 && interruptor != 0; pasada++){
                interruptor = 0;
                Nodo* actualJ = array->primero;
                for(int j = 0; j < n-pasada-1; j++){
                    if(actualJ->numero > actualJ->siguiente->numero){
                        interruptor = 1;
                        int aux = actualJ->numero;
                        actualJ->numero = actualJ->siguiente->numero;
                        actualJ->siguiente->numero = aux;
                    }
                    actualJ = actualJ->siguiente;
                }
            }
        }
    }
}

void Ordenador::shell(ArrayDinamico* array, int vector[]){
    if(array == NULL){
        int intervalo = n/2;

        while(intervalo > 0){

            for(int i = intervalo; i < n; i++){
                int j = i - intervalo;

                while(j >= 0){
                    int k = j + intervalo;
                    if(vector[j] <= vector[k])
                        j = -1;
                    else{
                        int temp = vector[j];
                        vector[j] = vector[k];
                        vector[k] = temp;
                        j -= intervalo;
                    }
                }
            }
            intervalo = intervalo/2;
        }
    }
    else{
        if(!array->isEmpty()){
            int intervalo = n/2;

            while(intervalo > 0){

                for(int i = intervalo; i < n; i++){
                    int j = i - intervalo;

                    while(j >= 0){
                        int k = j + intervalo;
                        Nodo* nodoJ = array->buscarEnPosicion(j);
                        Nodo* nodoK = array->buscarEnPosicion(k);
                        if(nodoJ->numero <= nodoK->numero)
                            j = -1;
                        else{
                            int temp = nodoJ->numero;
                            nodoJ->numero = nodoK->numero;
                            nodoK->numero = temp;
                            j -= intervalo;
                        }
                    }
                }
                intervalo = intervalo/2;
            }
        }
    }
}

void Ordenador::mergesort(ArrayDinamico* array, int vector[], int l,int r){
    if(l>=r)
        return;//returns recursively
    int m =l+ (r-l)/2;
    mergesort(array, vector, l, m);
    mergesort(array, vector, m+1, r);
    merge(array, vector,l,m,r);
}

void Ordenador::merge(ArrayDinamico* array, int vector[], int l,int m,int r){
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temp arrays
    int L[n1], R[n2];

    if(array == NULL){
        // Copy data to temp arrays L[] and R[]
        for (int i = 0; i < n1; i++)
            L[i] = vector[l + i];
        for (int j = 0; j < n2; j++)
            R[j] = vector[m + 1 + j];

        // Merge the temp arrays back into arr[l..r]
        int i = 0;
        int j = 0;
        int k = l;

        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                vector[k] = L[i];
                i++;
            }
            else {
                vector[k] = R[j];
                j++;
            }
            k++;
        }

        // Copy the remaining elements of
        // L[], if there are any
        while (i < n1) {
            vector[k] = L[i];
            i++;
            k++;
        }

        // Copy the remaining elements of
        // R[], if there are any
        while (j < n2) {
            vector[k] = R[j];
            j++;
            k++;
        }
    }
    else{
        // Copy data to temp arrays L[] and R[]
        Nodo* nodoL = array->buscarEnPosicion(l);
        for (int i = 0; i < n1; i++){
            L[i] = nodoL->numero;
            nodoL = nodoL->siguiente;
        }
        Nodo* nodoM = array->buscarEnPosicion(m+1);
        for (int j = 0; j < n2; j++){
            R[j] = nodoM->numero;
            nodoM = nodoM->siguiente;
        }

        // Merge the temp arrays back into arr[l..r]
        int i = 0;
        int j = 0;
        Nodo* nodoK = array->buscarEnPosicion(l);

        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                nodoK->numero = L[i];
                i++;
            }
            else {
                nodoK->numero = R[j];
                j++;
            }
            nodoK = nodoK->siguiente;
        }

        // Copy the remaining elements of
        // L[], if there are any
        while (i < n1) {
            nodoK->numero = L[i];
            i++;
            nodoK = nodoK->siguiente;
        }

        // Copy the remaining elements of
        // R[], if there are any
        while (j < n2) {
            nodoK->numero = R[j];
            j++;
            nodoK = nodoK->siguiente;
        }
    }
}


void Ordenador::quicksort(ArrayDinamico* array, int vector[], int primero, int ultimo){

    int central = (primero + ultimo)/2;
    int i = primero;
    int j = ultimo;

    if(array == NULL){
        int pivote = vector[central];
        do{
            while (vector[i] < pivote) i++;
            while (vector[j] > pivote) j--;

            if (i<=j){
                int tmp = vector[i];
                vector[i] = vector[j];
                vector[j] = tmp;
                i++;
                j--;
            }
        } while (i <= j);

        if (primero < j)
            quicksort(array, vector, primero, j);
        if (i < ultimo)
            quicksort(array, vector, i, ultimo);
    }
    else{
        int pivote = array->buscarEnPosicion(central)->numero;
        Nodo* nodoI = array->buscarEnPosicion(i);
        Nodo* nodoJ = array->buscarEnPosicion(j);
        do{
            while (nodoI->numero < pivote) {
                i++;
                nodoI = nodoI->siguiente;
            }
            while (nodoJ->numero > pivote) {
                j--;
                nodoJ = nodoJ->anterior;
            }
            if (i<=j){
                int tmp = nodoI->numero;
                nodoI->numero = nodoJ->numero;
                nodoJ->numero = tmp;
                i++;
                nodoI = nodoI->siguiente;
                j--;
                nodoJ = nodoJ->anterior;
            }
        } while (i <= j);

        if (primero < j)
            quicksort(array, vector, primero, j);
        if (i < ultimo)
            quicksort(array, vector, i, ultimo);
    }
}

void Ordenador::binsort(ArrayDinamico* array, int vector[]){
    int contar[n];
    if(array == NULL){
        for (int i=0; i<n; i++)
            contar[i] = 0;

        for (int i=0; i<n; i++)
            (contar[vector[i]])++;

        for (int i=0, j=0; i<n; i++)
            for (; contar[i]>0; (contar[i])--)
                vector[j++] = i;
    }
    else{
        for (int i=0; i<n; i++)
            contar[i] = 0;

        Nodo* nodoI = array->primero;
        for (int i=0; i<n; i++){
            (contar[nodoI->numero])++;
            nodoI = nodoI->siguiente;
        }

        Nodo* nodoJ = array->primero;
        for (int i=0, j=0; i<n; i++)
            for (; contar[i]>0; (contar[i])--){
                nodoJ->numero = i;
                nodoJ = nodoJ->siguiente;
                //vector[j++] = i;
                j++;
            }
     }
}

void Ordenador::radixsort(ArrayDinamico* array, int vector[]){

      int front[10], rear[10];
      struct {
        int info;
        int next;
      } node[20];
      int exp, first, i, j, k, p, q, y;

      if(array != NULL){
          /* Inicializar una lista vinculada */
          Nodo* nodoI = array->primero;
          for (i = 0; i < n-1; i++) {
            node[i].info = nodoI->numero;
            node[i].next = i+1;
            nodoI = nodoI->siguiente;
          } /* fin del for */

          node[n-1].info = array->getUltimo()->numero;
          node[n-1].next = -1;
          first = 0; /* first es la cabeza de la lista vinculada */
          for (k = 1; k < 5; k++) {
            /* Suponer que tenemos números de cuatro dígitos */
            for (i = 0; i < 10; i++) {
              /*Inicializar colas */
              rear[i] = -1;
              front[i] = -1;
            } /*fin del for */
            /* Procesar cada elemento en la lista */
            while (first != -1) {
              p = first;
              first = node[first].next;
              y = node[p].info;
              /* Extraer el kâsimo dÁgito */
              exp = pow(10, k-1);	/* elevar 10 a la (k-1)ésima potencia */
              j = (y/exp) % 10;
              /* Insertar y en queue[j] */
              q = rear[j];
              if (q == -1)
            front[j] = p;
              else
            node[q].next = p;
              rear[j] = p;
            } /*fin del while */

            /* En este punto, cada registro está en su cola basándose en el dígito k
               Ahora formar una lista única de todos los elementos de la cola.
               Encontrar el primer elemento. */
            for (j = 0; j < 10 && front[j] == -1; j++);
              ;
            first = front[j];

            /* Vincular las colas restantes */
            while (j <= 9) { 	/* Verificar si se ha terminado */
              /*Encontrar el elemento siguiente */
              for (i = j+1; i < 10 && front[i] == -1; i++);
            ;
              if (i <= 9) {
            p = i;
            node[rear[j]].next = front[i];
              } /* fin del if */
              j = i;
            } /* fin del while */
            node[rear[p]].next = -1;
          } /* fin del for */

          /* Copiar de regreso al archivo original */
          nodoI = array->primero;
          for (i = 0; i < n; i++) {
            nodoI->numero = node[first].info;
            first = node[first].next;
            nodoI = nodoI->siguiente;
          } /*fin del for */
      }/* fin de radixsort*/

      else{
          /* Inicializar una lista vinculada */
          for (i = 0; i < n-1; i++) {
            node[i].info = vector[i];
            node[i].next = i+1;
          } /* fin del for */
          node[n-1].info = vector[n-1];
          node[n-1].next = -1;
          first = 0; /* first es la cabeza de la lista vinculada */
          for (k = 1; k < 5; k++) {
            /* Suponer que tenemos números de cuatro dígitos */
            for (i = 0; i < 10; i++) {
              /*Inicializar colas */
              rear[i] = -1;
              front[i] = -1;
            } /*fin del for */
            /* Procesar cada elemento en la lista */
            while (first != -1) {
              p = first;
              first = node[first].next;
              y = node[p].info;
              /* Extraer el kâsimo dÁgito */
              exp = pow(10, k-1);	/* elevar 10 a la (k-1)ésima potencia */
              j = (y/exp) % 10;
              /* Insertar y en queue[j] */
              q = rear[j];
              if (q == -1)
            front[j] = p;
              else
            node[q].next = p;
              rear[j] = p;
            } /*fin del while */

            /* En este punto, cada registro está en su cola basándose en el dígito k
               Ahora formar una lista única de todos los elementos de la cola.
               Encontrar el primer elemento. */
            for (j = 0; j < 10 && front[j] == -1; j++);
              ;
            first = front[j];

            /* Vincular las colas restantes */
            while (j <= 9) { 	/* Verificar si se ha terminado */
              /*Encontrar el elemento siguiente */
              for (i = j+1; i < 10 && front[i] == -1; i++);
            ;
              if (i <= 9) {
            p = i;
            node[rear[j]].next = front[i];
              } /* fin del if */
              j = i;
            } /* fin del while */
            node[rear[p]].next = -1;
          } /* fin del for */

          /* Copiar de regreso al archivo original */
          for (i = 0; i < n; i++) {
            vector[i] = node[first].info;
            first = node[first].next;
          } /*fin del for */
      }
}
