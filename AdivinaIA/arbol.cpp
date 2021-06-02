#include "arbol.h"



// PRINCIPAL DE INSERTA,
//INSERTA UN NUMERO ENTERO

void Arbol::insertar(QString texto)
{
     raiz = insertar(texto, raiz);
}

//  INSERTA RECURSIVAMENTE
Nodo* Arbol::insertar(QString valor, Nodo* nodo)
{
    // cuando el nodo es nulo, raiz o hijos de hojas
    //quiere decir que allí debe
   // ubicar el valor, en un nuevo nodo

      if (nodo == NULL)
      {
                return new Nodo(valor);
      }
      // si el valor es mayor,
      //llama recursivamente a insertar en el hijo
      // derecho
      else if (nodo->texto < valor)
      {
        nodo->hijoNo = insertar(valor, nodo->hijoNo);
      }
      // en caso contrario, va al lado izquierdo
      else if (nodo->texto >= valor)
      {
         nodo->hijoSi = insertar(valor, nodo->hijoSi);
      }

      return nodo;
}


void Arbol::inOrden(Nodo* nodo)
{
   if (nodo != NULL)
   {
     inOrden(nodo->hijoSi);
     qDebug() << nodo->texto << "  ";
     inOrden(nodo->hijoNo);
   }
}






void Arbol::preOrden(Nodo* nodo)
{
   if (nodo != NULL)
   {
     qDebug() << nodo->texto << "  ";
     preOrden(nodo->hijoSi);
     preOrden(nodo->hijoNo);
   }
}

void Arbol::posOrden(Nodo* nodo)
{
   if (nodo != NULL)
   {
     posOrden(nodo->hijoSi);
     posOrden(nodo->hijoNo);
     qDebug() << nodo->texto << "  ";

   }
}


int Arbol::contadorNodos(Nodo* nodo)
{
     if (nodo == NULL)
        return 0;
     else
         return 1+ contadorNodos(nodo->hijoNo)+contadorNodos(nodo->hijoSi);
}





// BUSCA UN VALOR EN EL ARBOL ORDENADO
Nodo* Arbol::buscar (QString valor, Nodo* nodo)
 {
     // cuando el nodo es nulo, quiere decir que allí debe
     // ubicar el valor, en un nuevo nodo
     if (nodo == NULL)
     {
         return NULL;
     }
     else if (nodo->texto == valor)
     {
        return nodo;
     }
     // si el valor es mayor, llama recursivamente a insertar en el hijo
     // derecho
     else if (nodo->texto < valor)
     {
        return buscar(valor, nodo->hijoNo);
     }
     // en caso contrario, va al lado izquierdo
     else //(nodo.texto >= valor)
     {
        return buscar(valor, nodo->hijoSi);
     }
 }

 // cantidad de elementos de un arbol binario
 int Arbol::obtenerNumeroElementos(Nodo* nodo)
 {
     int num_elems = 0;

     if(nodo != NULL)
     {
        num_elems += obtenerNumeroElementos(nodo->hijoSi);
        num_elems++; // contabilizar el nodo visitado
        num_elems += obtenerNumeroElementos(nodo->hijoNo);
    }
    return num_elems;
 }


 // obtiene la altura
//Altura. La altura de un árbol se define como el
//nivel del nodo de mayor nivel. Como cada nodo de un árbol
//puede considerarse a su vez como la raíz de un árbol, también
//podemos hablar de altura de ramas; el máximo número de nodos
//que hay que recorrer para llegar de la raíz a una de las hojas.

  int Arbol::obtenerAltura(Nodo* nodo) {

      // resultado
    int altura    = 0;

    // referencias hi e hd
    Nodo* ref_h_izq;
    Nodo* ref_h_der;

    // resultado de alturas de hi e hd
    int altura_r_izq = 0;
    int altura_r_der = 0;

    //
    if(nodo != NULL) {
        // incia en 1 para contar la raiz
        altura = 1;

        // inicialiaza las referencias
        ref_h_izq = nodo->hijoSi;
        ref_h_der = nodo->hijoNo;

        // si ninguno de los hijos es nulo
        if( (ref_h_izq != NULL) && (ref_h_der != NULL) ) {
            // obtiene las alturas de cada arbol izq y der
            altura_r_izq = obtenerAltura(ref_h_izq);
            altura_r_der = obtenerAltura(ref_h_der);

            // suma la altura mayor, para determinar el mayor nivel
            if(altura_r_izq >= altura_r_der)
            {
                altura += altura_r_izq;
            }
            else
            {
                altura += altura_r_der;
            }
        // hizq no es nulo, suma altura de hijo izquierdo
        }
        else if( (ref_h_izq != NULL) && (ref_h_der == NULL) )
        {
            altura += obtenerAltura(ref_h_izq);
        }
        // hder no es nulo, suma altura de hijo derecho
        else if( (ref_h_izq == NULL) && (ref_h_der != NULL) )
        {
            altura += obtenerAltura(ref_h_der);
        }
        // cuando ambos son nulos, resta el uno con el que empezó
        else if( (ref_h_izq == NULL) && (ref_h_der == NULL) )
        {
            altura -= 1;
        }
    }
    // retorna el resultado
    return altura;

}

int maximo (int a, int b)
{
    if (a>b)
       return a;
       else return b;
}

int Arbol::altura (Nodo* nodo)
{
    if (nodo == NULL)
        return -1;
    else
         return 1 + maximo(altura(nodo->hijoSi),altura(nodo->hijoNo));
}

int Arbol::cantNodos2 (Nodo* nodo)
{
    if (nodo == NULL)
        return 0;
    else
         return 1 + cantNodos2(nodo->hijoSi)+cantNodos2(nodo->hijoNo);
}



int Arbol::cantHojas(Nodo* raiz)
{
    if (raiz == NULL)
       return 0;
    else if (raiz->hijoNo == NULL && raiz->hijoSi==NULL)
         return 1;
    else
        return cantHojas(raiz->hijoNo)+cantHojas(raiz->hijoSi);

}






// borrar
 Nodo* Arbol::mayor (Nodo* arbol)
  {
    if (arbol == NULL)
        return NULL;
    else if (arbol->hijoNo == NULL)
        return arbol;
    else
        return mayor (arbol->hijoNo);
  }


Nodo* Arbol::borrarElemento(QString ele)
{
      raiz = borrarElemento(ele, raiz);
      return raiz;
}

Nodo* Arbol::borrarElemento(QString ele, Nodo* arbol)
    {
        if (arbol == NULL)
        {
            return NULL;
        }
        else if (ele < arbol->texto)
            arbol->hijoSi = borrarElemento(ele, arbol->hijoSi);
        else if (ele > arbol->texto)
            arbol->hijoNo = borrarElemento(ele, arbol->hijoNo);
        else if (arbol->hijoSi == NULL && arbol->hijoNo == NULL)
            arbol = NULL;
        else if (arbol->hijoSi == NULL)
            arbol = arbol->hijoNo;
        else if (arbol->hijoNo == NULL)
            arbol = arbol->hijoSi;
        else{
            Nodo* max = mayor(arbol->hijoSi); // mayor de los menores
            arbol->hijoSi = borrarElemento(max->texto, arbol->hijoSi);
            arbol->texto = max->texto;
        }
        return arbol;
    }



void Arbol::insertarNuevo(Nodo* elemento, QString pregunta, QString respuesta){
    QString antiguo = elemento->texto;
    elemento->texto = pregunta;
    elemento->hijoSi = new Nodo(respuesta);
    elemento->hijoNo = new Nodo(antiguo);
}


void Arbol::hacerBalanceado(Nodo* arbol, int altura){
    if(altura == 0)
        return;
    else if(arbol->isHoja()){
        arbol->hijoSi = new Nodo(" ");
        arbol->hijoNo = new Nodo(" ");
    }

    hacerBalanceado(arbol->hijoSi, altura-1);
    hacerBalanceado(arbol->hijoNo, altura-1);
}






