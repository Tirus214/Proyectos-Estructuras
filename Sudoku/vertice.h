#ifndef VERTICE_H
#define VERTICE_H


struct Vertice{
       int valor;
       bool visitado;

       Vertice(int v)
       {
           valor = v;
           visitado = false;
       }

};

#endif // VERTICE_H
