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

       bool isHoja();
};

#endif // NODO_H
