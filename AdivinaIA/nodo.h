#ifndef NODO_H
#define NODO_H
#include <cstdlib>
#include <iostream>
#include <QFile>

using namespace std;

struct Nodo
{
       QString texto;
       Nodo* hijoSi;
       Nodo* hijoNo;

       Nodo (QString d)
       {
            texto = d;
            hijoSi = hijoNo = NULL;
       }

       //evalua si el nodo es hoja
       bool isHoja();
       //inserta un nodo hijoSi
       void insertarHijoSi(QString);
       //inserta un nodo hijoNo
       void insertarHijoNo(QString);
};

#endif // NODO_H
