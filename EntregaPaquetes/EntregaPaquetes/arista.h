#ifndef ARISTA_H
#define ARISTA_H


struct Arista{
    int nodo;
    int peso;

    Arista(int nod, int pes){
        nodo = nod;
        peso = pes;
    }

    Arista(){
        nodo = peso = 0;
    }
};

#endif // ARISTA_H
