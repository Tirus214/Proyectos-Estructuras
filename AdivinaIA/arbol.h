#ifndef ARBOL_H
#define ARBOL_H
#include <QTextStream>
#include <QApplication>
#include <QDebug>


struct Arbol{
    QStringList* lista;
    QString actual;
    int indice;

    Arbol(){
        lista = new QStringList();
        actual = "";
        indice = 0;
    }

    void hijoSi();
    void hijoNo();
};

#endif // ARBOL_H
