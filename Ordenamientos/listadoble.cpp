#include "listadoble.h"

    bool ListaDoble::isEmpty(){
        return primero == NULL;
    }


    void ListaDoble::insertarAlInicio (int _dato){
        if (isEmpty())
            primero = ultimo = new Nodo (_dato);
        else{
            Nodo * nuevo = new Nodo(_dato);
            nuevo->siguiente = primero;
            primero->anterior = nuevo;
            primero = nuevo;
        }
    }

    void ListaDoble::insertarAlFinal (int _dato){
            if (isEmpty())
                primero = ultimo = new Nodo (_dato);
            else{
                Nodo * nuevo = new Nodo(_dato);
                nuevo->anterior = ultimo;
                ultimo->siguiente = nuevo;
                ultimo = nuevo;
            }
        }


    Nodo* ListaDoble::borrarAlInicio(){
            Nodo* tmp = primero;

            if (primero != NULL){

                if (primero == ultimo){
                    primero = ultimo = NULL;
                }
                else{
                    primero = primero->siguiente;
                    primero->anterior = tmp->siguiente = NULL;
                }
            }

            return tmp;
        }



        Nodo* ListaDoble::borrarAlFinal(){
            Nodo* tmp = ultimo;

            if (ultimo != NULL){

                if (primero == ultimo){
                    primero = ultimo = NULL;
                }
                else{
                    ultimo = ultimo->anterior;
                    ultimo->siguiente = tmp->anterior = NULL;
                }
            }

            return tmp;
        }


        void ListaDoble::imprimir(){
            Nodo* actual = primero;
            do{
                cout << *(actual->numero) << endl;
                actual = actual->siguiente;
            } while(actual != primero);
        }
