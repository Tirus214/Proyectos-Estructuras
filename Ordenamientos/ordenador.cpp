#include "ordenador.h"

int Ordenador::crearAleatorio(){
    int numero;
    std::uniform_int_distribution<int> distribution(-1000000, 1000000);
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
    for (int i=0; i<n; i++) {
        cout << vector[i] << endl;
    }
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
void mergesort();
void quicksort();
void binsort();
void radixsort();
