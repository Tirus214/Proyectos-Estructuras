#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <QFile>
#include <QDebug>


class Filemanager
{
public:
    Filemanager(){}
    void leer(QString name, QString arreglo[]);
    void escribir(QString name, QStringList arreglo);
    void leer2(QString name, QStringList arreglo);
};

#endif // FILEMANAGER_H
