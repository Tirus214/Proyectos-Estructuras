#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <QFile>
#include <QDebug>
#define K 5000000


class Filemanager
{
public:
    Filemanager(){}
    void leer(QString name, QString arreglo[]);
    void escribir(QString name, QString arreglo[]);
    QStringList leer2(QString name);
};

#endif // FILEMANAGER_H
