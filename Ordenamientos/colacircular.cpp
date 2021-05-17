#include "colacircular.h"

void ColaCircular::encolar (int dato){

    if (isEmpty()){
        primero = ultimo = new Nodo(dato);
        primero->siguiente = ultimo->siguiente = primero;
    }
    else{
        Nodo* nuevo = new Nodo(dato);
        ultimo->siguiente = nuevo;
        nuevo->siguiente = primero;
        ultimo = nuevo;
    }
}

Nodo* ColaCircular::desencolar(void){

    Nodo* tmp = primero;

    if (!isEmpty()){
       if (primero == ultimo){
          primero = ultimo = NULL;
       }
       else{
          primero = primero->siguiente;
          tmp->siguiente = NULL;
       }
     }

     return tmp;
}

bool ColaCircular::isEmpty (void){
     return primero == NULL;
}


Nodo* ColaCircular::getFrente(){
      return primero;
}


void ColaCircular::imprimir(){
    if(!isEmpty()){
        Nodo* actual = primero;
        while(actual != NULL){
            cout << actual->numero << endl;
            actual = actual->siguiente;
        }
    }
}
