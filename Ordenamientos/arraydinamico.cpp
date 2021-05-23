#include "arraydinamico.h"

    bool ArrayDinamico::isEmpty(){
        return primero == NULL;
    }


    void ArrayDinamico::insertarAlInicio(int _dat){
            Nodo* nuevo = new Nodo(_dat);
            if(primero == NULL){
                primero = ultimo = nuevo;
                primero->anterior = primero->siguiente = primero;
            }
            else{
                primero->anterior = nuevo;
                nuevo->anterior = ultimo;
                nuevo->siguiente = primero;
                primero = nuevo;
                ultimo->siguiente = nuevo;
            }
        }

    void ArrayDinamico::insertarAlFinal(int _dat){
            Nodo* nuevo = new Nodo(_dat);
            if(primero == NULL){
                primero = ultimo = nuevo;
                primero->anterior = primero->siguiente = primero;
            }
            else{
                ultimo->siguiente = nuevo;
                nuevo->siguiente = primero;
                nuevo->anterior = ultimo;
                ultimo = nuevo;
                primero->anterior = nuevo;
            }
        }

    Nodo* ArrayDinamico::getPrimero(){
        return primero;
    }

    Nodo* ArrayDinamico::getUltimo(){
        return ultimo;
    }


    Nodo* ArrayDinamico::borrarAlInicio(){
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



        Nodo* ArrayDinamico::borrarAlFinal(){
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


        Nodo* ArrayDinamico::buscarEnPosicion(int posicion){
            Nodo* actual = primero;
            if(actual != NULL)
                for (int i=0; i<posicion; i++)
                    actual = actual->siguiente;
            return actual;
        }


        void ArrayDinamico::imprimir(){
                if (primero != NULL){
                    Nodo* tmp = primero;
                    do{
                        cout << "<- |" << tmp->numero << "| ->";
                        tmp = tmp->siguiente;

                    }while(tmp != primero);
                }

            }
