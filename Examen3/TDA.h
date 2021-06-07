#ifndef TDA_H
#define TDA_H
#include "mainwindow.h"
#include "ui_mainwindow.h"

struct NodoArbol;
struct ListaSimple;
struct NodoPila;
struct pila;

struct NodoLista
{
    NodoLista *siguiente;
    NodoLista *anterior;
    QString dato;
};
struct ListaSimple
{
    NodoLista *primerNodo;
    NodoLista *ultimoNodo;


    void add(QString dato)
    {
        //Añade el caracter a la lista simple
        //entrada: el char plano del archivo de texto, su número de ascii
        //salida: ninguna
        NodoLista *nuevo = new NodoLista();
        nuevo->dato = dato;
        if (primerNodo == NULL)
        {
            primerNodo = nuevo;
            ultimoNodo = primerNodo; // ambos apuntan al nuevo
        }
            else
            {
                ultimoNodo->siguiente = nuevo;
                nuevo->anterior = nuevo;
                ultimoNodo = nuevo;
            }
        }

    QString imprimir()
        {
            //imprime la lista completa
            //entrada: ninguna
            //salida: ninguna
            QString num;
            if(primerNodo == NULL)
                qDebug() << "La lista esta vaciaaa";
            else
            {
                NodoLista *tmp = new NodoLista();
                tmp = primerNodo;

                while(tmp != NULL)
                {
                    num.append(tmp->dato);
                    tmp = tmp->siguiente;
                }
                qDebug() << "Lista impresa: "<<num;
            }
            return num;
         }
};

struct NodoArbol
{
    NodoArbol *izq;
    NodoArbol *der;
    NodoArbol *siguiente;
    NodoArbol *anterior;
    QString dato;

    NodoArbol()
    {
        izq=NULL;
        der=NULL;
        dato =NULL;
    }

    void visitar(NodoArbol * nodo)
    {
        qDebug() << nodo->dato;
    }

    NodoArbol *getDerecha()
    {
        return der;
    }
    NodoArbol *getIzquierda()
    {
        return izq;
    }

    void insertarDerecha(NodoArbol *qNodo)
    {
        der = qNodo;
    }
    void insertarIzquierda(NodoArbol *qNodo)
    {
        izq = qNodo;
    }

    void preorden(NodoArbol *raiz)
    {
        if(raiz)
        {
            visitar(raiz);
            preorden(raiz->izq);
            preorden(raiz->der);
        }
    }
    void inorden(NodoArbol *raiz)
    {
        if(raiz)
        {
            inorden(raiz->izq);
            visitar(raiz);
            inorden(raiz->der);
        }
    }
    void postorden(NodoArbol *raiz)
    {
        if(raiz)
        {
            postorden(raiz->izq);
            postorden(raiz->der);
            visitar(raiz);
        }
    }

    ListaSimple *listaEnorden(QString num)
    {
        ListaSimple *lista = new ListaSimple();
        for(int x = 0; x<num.size();x++)
        {
            lista->add(num.at(x));
        }

        return lista;
    }
    ListaSimple *listapreorden(NodoArbol *raiz,ListaSimple *qLista)
    {
        ListaSimple *lista = new ListaSimple();
        lista = qLista;
        if(raiz)
        {
            lista->add(raiz->dato);
            listapreorden(raiz->izq,lista);
            listapreorden(raiz->der,lista);
        }
        return lista;
    }

    ListaSimple *listainorden(NodoArbol *raiz,ListaSimple *qLista)
    {
        ListaSimple *lista = new ListaSimple();
        lista = qLista;
        if(raiz)
        {
            listainorden(raiz->izq,lista);
            lista->add(raiz->dato);
            listainorden(raiz->der,lista);
        }
        return lista;
    }
    ListaSimple *listapostorden(NodoArbol *raiz,ListaSimple *qLista)
    {
        ListaSimple *lista = new ListaSimple();
        lista = qLista;
        if(raiz)
        {
            listapostorden(raiz->izq,lista);
            listapostorden(raiz->der,lista);
            lista->add(raiz->dato);
            //visitar(raiz);
        }
        return lista;
    }


};

struct NodoPila
{
    NodoArbol *nodo;
    NodoPila *siguiente;
    NodoPila(NodoArbol* qNodo)
    {
        siguiente = NULL;
        nodo = qNodo;
    }
};
struct Pila
{

    NodoPila *tope;
    NodoPila *base;

    Pila()
    {
        tope = NULL;
    }

    void push (NodoArbol *nodo)
    {
        if (empty ())
        {    tope = new NodoPila(nodo);
             base = tope;
        }
        else
        {
            NodoPila *nuevo = new NodoPila(nodo);
            nuevo->siguiente = tope;
            tope = nuevo;
        }
    }
    NodoPila* pop (void)
    {
        if (empty())
            return NULL;
        else
        {
            NodoPila* borrado = tope;
            tope = tope->siguiente;
            borrado->siguiente = NULL;
            return borrado;
        }
    }

    NodoPila* getTope (void)
    {
        if (empty())
            return NULL;
        else
        {
            return tope;
        }
    }
    bool empty(void)
    {
        if (tope == NULL)
                return true;
             else
                 return false;
    }

    void imprimir()
    {
         qDebug() << "tope";
         NodoPila *tmp = tope;
         // mientras tmp no sea nulo, avanza
         while (tmp != NULL)
         {
               qDebug() << tmp->nodo->dato << "izq"<<tmp->nodo->izq->dato <<"der" << tmp->nodo->der->dato;
               tmp = tmp->siguiente;
         }
         qDebug() << "fondo";
    }



};


struct PilaSimple
{

    NodoLista *tope;
    NodoLista *base;

    PilaSimple()
    {
        tope = NULL;
    }

    void push (QString dato)
    {
        NodoLista *nuevo = new NodoLista();
        nuevo->dato = dato;
        if (empty ())
        {    tope = nuevo;
             base = tope;
        }
        else
        {
            nuevo->siguiente = tope;
            tope = nuevo;
        }
    }
    NodoLista* pop (void)
    {
        if (empty())
            return NULL;
        else
        {
            NodoLista* borrado = tope;
            tope = tope->siguiente;
            borrado->siguiente = NULL;
            return borrado;
        }
    }

    NodoLista* getTope (void)
    {
        if (empty())
            return NULL;
        else
        {
            return tope;
        }
    }
    bool empty(void)
    {
        if (tope == NULL)
                return true;
             else
                 return false;
    }

    void imprimir()
    {
         qDebug() << "tope";
         NodoLista *tmp = tope;
         // mientras tmp no sea nulo, avanza
         while (tmp != NULL)
         {
               qDebug() << tmp->dato;
               tmp = tmp->siguiente;
         }
         qDebug() << "fondo";
    }



};



#endif // TDA_H
