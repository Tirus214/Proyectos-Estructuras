#ifndef ARBOL_H
#define ARBOL_H
#include <QTextStream>
#include <QApplication>
#include <QDebug>
#include "nodo.h"

struct Arbol
{
       Nodo* raiz;

       Arbol ()
       {
             raiz = NULL;
       }

       //insertar un nuevo elemento y pregunta al arbol haciendo el cambio en un nodo respectivo
       void insertarNuevo(Nodo*, QString, QString);
       //anade QString vacios para hacer el arbol completo
       void hacerCompleto(Nodo*, int);
       //crear un arbol con raiz
       void insertarRaiz(QString texto);
};

#endif // ARBOL_H
