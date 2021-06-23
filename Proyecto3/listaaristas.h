#ifndef LISTAARISTAS_H
#define LISTAARISTAS_H
#include "arista.h"

struct ListaAristas {
    // solo con pN es suficiente
           Arista *primerNodo, *ultimoNodo;

           ListaAristas()
           {
               primerNodo = ultimoNodo = NULL;
           }

           // encabezados de funcion
           void insertarAlInicio (int dato, int peso);
           Arista* borrarAlInicio(void);
           void imprimir(void);
           void insertarAlFinal(int dato, int peso);
           Arista* borrarAlFinal(void);
           Arista* buscar (int dato);//
           int largo (void);//
           bool vacia(void);
           void borrarEnPosicion(int pos);
           int posicion (int);

};

#endif // LISTAARISTAS_H
