#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H
#include "mainwindow.h"
#include "ui_mainwindow.h"

struct NodoLista
{
    int peso;
    NodoLista *siguiente;
    NodoLista *anterior;
};


struct ListaSimple
{
    NodoLista *primerNodo;
    NodoLista *ultimoNodo;

    void add(int num)
            {
                //Añade el caracter a la lista simple
                //entrada: el char plano del archivo de texto, su número de ascii
                //salida: ninguna

                NodoLista *nuevo = new NodoLista();
                nuevo->peso = num;
                if (primerNodo == NULL)
                {
                    primerNodo = nuevo;
                    ultimoNodo = primerNodo; // ambos apuntan al nuevo
                }
                else
                {
                    ultimoNodo->siguiente = nuevo;
                    nuevo->anterior = ultimoNodo;
                    ultimoNodo = nuevo;
                }
            }

        void imprimir()
        {
            //imprime la lista completa
            //entrada: ninguna
            //salida: ninguna

            if(primerNodo == NULL)
                qDebug() << "La lista esta vacia";
            else
            {
                NodoLista *tmp = new NodoLista();
                tmp = primerNodo;
                QString num;
                while(tmp != NULL)
                {
                    num.append(QString::number(tmp->peso));
                    num.append(" ");
                    tmp = tmp->siguiente;
                }
                qDebug() << num;
            }
         }

        void eliminar()
        {
            if(primerNodo == ultimoNodo)
                qDebug() << "Solo queda un nodo";
            else
                primerNodo = primerNodo->siguiente;
        }
};

#endif // LISTASIMPLE_H
