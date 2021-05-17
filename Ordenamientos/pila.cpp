#include "pila.h"

void Pila::push(int dato){

     if (isEmpty())
     {
         ultimo = new Nodo(dato);
     }
     else
     {
         Nodo *nuevo = new Nodo(dato);
         nuevo->siguiente = ultimo;
         ultimo = nuevo;
     }
}

Nodo* Pila::pop(void){

      if (isEmpty())
      {
         return NULL;
      }
      else
      {
          Nodo* borrado = ultimo;
          ultimo = ultimo->siguiente;
          borrado->siguiente = NULL;
          return borrado;
      }
}

bool Pila::isEmpty (void){

     if (ultimo == NULL)
        return true;
     else
         return false;
}

Nodo * Pila::peek(){
     return ultimo;
}
