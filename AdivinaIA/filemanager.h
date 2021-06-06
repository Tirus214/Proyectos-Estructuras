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

    //lee el contenido de un txt y lo ingresa en un arreglo
    void leer(QString name, QString arreglo[]);
    //escribe el contenido de un arreglo en un txt
    void escribir(QString name, QString arreglo[]);

    //funciones leer y escribir obtenidas de canal de youtube Nicatronica Videos
    //https://www.youtube.com/watch?v=5My6MiMyWO8&t=151s
};

#endif // FILEMANAGER_H
