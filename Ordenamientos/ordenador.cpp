#include "ordenador.h"

int Ordenador::crearAleatorio(){
    int numero;
    std::uniform_int_distribution<int> distribution(0, 9);
    numero = distribution(*QRandomGenerator::global());
    return numero;
}


void Ordenador::generarNumeros(){
    for (int i=0; i<n; i++) {
        int num = crearAleatorio();
        vector[i] = num;
        cola->encolar(vector[i]);
        pila->push(vector[i]);
        lista->insertarAlFinal(vector[i]);
        //cout << *(pila->peek()->numero) << endl;
    }
}

void Ordenador::imprimirNumeros(){
    for (int i=0; i<n; i++)
        cout << vector[i] << endl; 
}


void Ordenador::intercambio(){
    for(int i = 0; i <= n-2; i++)
            for(int j = i+1; j <= n-1; j++)
                if( vector[i] > vector[j] ){
                    int aux = vector[i];
                    vector[i] = vector[j];
                    vector[j] = aux;
                }
}


void Ordenador::seleccion(){
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

void Ordenador::insercion(){
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

void Ordenador::burbuja(){
    int interruptor = 1;

        for(int pasada = 0; pasada < n-1 && interruptor != 0; pasada++){
            interruptor = 0;
            for(int j = 0; j < n-pasada-1; j++)
                if(vector[j] > vector[j+1]){
                    long aux;
                    interruptor = 1;
                    aux = vector[j];
                    vector[j] = vector[j+1];
                    vector[j+1] = aux;
                }
        }
}

void Ordenador::shell(){
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

void Ordenador::mergesort(int izquierda,int derecha){
    int medio;
    if(izquierda<derecha){
        medio=(izquierda+derecha)/2;
        mergesort(izquierda,medio);
        mergesort(medio+1,derecha);
        merge(izquierda,medio,derecha);
    }
}
void Ordenador::merge(int izquierda,int medio,int derecha){
    int h,i,j,b[50],k;
    h=izquierda;
    i=izquierda;
    j=medio+1;

    while((h<=medio)&&(j<=derecha)){
        if(vector[h]<=vector[j]){
            b[i]=vector[h];
            h++;
        }
        else
            {
                b[i]=vector[j];
                j++;
            }
        i++;
    }
    if(h>medio)
        for(k=j;k<=derecha;k++){
            b[i]=vector[k];
            i++;
        }

    else
            for(k=h;k<=medio;k++){
                b[i]=vector[k];
                i++;
            }

    for(k=izquierda;k<=derecha;k++)
        vector[k]=b[k];

}


void Ordenador::quicksort(int primero, int ultimo){

    int central = (primero + ultimo)/2;
    int pivote = vector[central];
    int i = primero;
    int j = ultimo;

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
        quicksort(primero, j);
    if (i < ultimo)
        quicksort(i, ultimo);
}

void Ordenador::binsort(){
    int contar[n];
    for (int i=0; i<n; i++)
        contar[i] = 0;

    for (int i=0; i<n; i++)
        (contar[vector[i]])++;

    for (int i=0, j=0; i<n; i++)
        for (; contar[i]>0; (contar[i])--)
            vector[j++] = i;
}

void Ordenador::radixsort(){
    {
      int front[10], rear[10];
      struct {
        int info;
        int next;
      } node[20];
      int exp, first, i, j, k, p, q, y;

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
    } /* fin de radixsort*/
}
