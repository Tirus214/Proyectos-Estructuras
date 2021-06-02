#include "filemanager.h"

void Filemanager::escribir(QString name, QString arreglo[]){
    QFile file("C:/Archivos/" + name + ".txt");
    if (!file.open(QFile::WriteOnly | QFile::Text)){
        qDebug() << "No se pudo abrir el archivo " << name;
        return;
    }
    QTextStream out(&file);
    for (int i=0; i<K; i++) {
        QString line = arreglo[i];
        out << line;
        out << "\n";
    }
    file.flush();
    file.close();
}


void Filemanager::leer(QString name, QString arreglo[]){
    QFile file("C:/Archivos/" + name + ".txt");
    if (!file.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "No se pudo abrir el archivo" << name;
        return;
    }
    int index = 0;
    QTextStream in(&file);
    while(!in.atEnd()){
        QString line = in.readLine();
        try {
            arreglo[index] = line;
            index++;
        }  catch (Filemanager) {
            continue;
        }
    }
    file.close();
}


QStringList Filemanager::leer2(QString name){
    QStringList arreglo;
    QFile file("C:/Archivos/" + name + ".txt");
    if (!file.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "No se pudo abrir el archivo" << name;
        return arreglo;
    }
    QTextStream in(&file);
    while(!in.atEnd()){
        QString line = in.readLine();
        //qDebug() << line;
        try {
           arreglo.append(line);
        }  catch (Filemanager) {
            continue;
        }
    }
    file.close();
    return arreglo;
}
