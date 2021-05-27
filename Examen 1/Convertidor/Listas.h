#ifndef LISTAS_H
#define LISTAS_H
#include "mainwindow.h"
#include "ui_mainwindow.h"

struct Nodo
{
    QString num;
    Nodo *siguiente;
    Nodo *anterior;


    void imprimir()
    {
        qDebug () << "Numero almacenado: " << num;
    }
};

struct ListaSimple
{
    Nodo *primerNodo;
    Nodo *ultimoNodo;

    void add(QString num)
        {
            //Añade el caracter a la lista simple
            //entrada: el char plano del archivo de texto, su número de ascii
            //salida: ninguna

            Nodo *nuevo = new Nodo();
            nuevo->num = num;
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
            Nodo *tmp = new Nodo();
            tmp = primerNodo;
            QString num;
            while(tmp != NULL)
            {
                num.append(tmp->num);
                tmp = tmp->siguiente;
            }
            qDebug() << num;
        }
     }

};













#endif // LISTAS_H
