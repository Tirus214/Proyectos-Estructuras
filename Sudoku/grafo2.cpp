#include "grafo2.h"

bool Grafo2::validarFila(int fila, int num){
    for (int i = 0; i<N; i++){
        if (num == matriz[fila][i]->dato){
            return false;
            }
        }// fin del for(i)
    return true;
}// fin de es_posible_fila


bool Grafo2::validarColumna(int columna, int num){
    for (int i = 0; i<N; i++){
        if (matriz[i][columna]->dato == num){
            return false;
        }
    }
    return true;
}// fin de es_posible_columna


bool Grafo2::validarCuadro(int fila, int columna, int num){
    int x = (fila/4)*4;
    int y = (columna/4)*4;
    for (int i = 0; i<4; i++){
        for (int j = 0; j < 4; j++){
            if (num == matriz[i+x][j+y]->dato ) {
                return false;
                }
            }//fin del for(j)
        }// fin del for(i)
    return true;
}// fin de es_posible_sub3


void Grafo2::inicializar(){
    for (int i=0; i<N*N; i++) {
        vertices[i] = new Nodo2();
    }
}


void Grafo2::rellenar(){
    int c= 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            matriz[i][j] = vertices[c];
            if (matriz[i][j]->dato == 0)
                matriz[i][j]->modificable = true;

            else
                matriz[i][j]->modificable = false;
            c++;
            //cout << c;
        }
    }
}

void Grafo2::mostrar(){
    for (int i = 0; i < N; i++){
        for (int j = 0; j< N; j++){
            cout << matriz[i][j]->dato << " ";
        }
        cout << endl;
    }
}

bool Grafo2::asignar(int fila, int columna, int valor){
    if(validarCuadro(fila, columna, valor) && validarColumna(columna, valor) && validarFila(fila, valor) && matriz[fila][columna]->modificable){
        matriz[fila][columna]->dato = valor;
        return true;
    }
    return false;
}

bool Grafo2::resolver(int fila, int columna){
    if(columna == 8){ // se verifica que la columna es nueve (se sale del limite del tablero)
        fila++; // se aumenta una unidad la fila
        columna = 0; // se reinicia colummna
    }

    if (fila == 8){ // si se llega a la fila nueve es por que se logro asignar todo los valores a las demas casillas es por ello
        return true; // que se retorna true para detener la recursividad
    }
    if (!matriz[fila][columna]->modificable){ // en caso de que la casilla no se pueda modificar no se hace nada sobre ella solo se hace otra llamada recursiva a la funcion
        if(resolver(fila, columna+1)){
            return true;
        }
    }
    for (int k = 0; k < matriz[fila][columna]->cantPosibles; k++){ // este for va a ir probado los valores que pueden ser asignado
        if(asignar(fila, columna, matriz[fila][columna]->posibles[k])){ // si es posible asignar se hace una llamada recursiva de resolver para que haga el mismo
            if(resolver(fila, columna+1)){	//proceso en la casilla siguente si no puede continuar se devuelve a la llamada anterio y el for continua donde quedo
                return true;
            }matriz[fila][columna]->dato = 0; //
        }

    }// fin del for(k)
    return false;
}//fin de resolver()


void Grafo2::getPosibles(){
    int x, temp[17] = {0}; // vector estatico para almacenar temporalmente los posibles valores
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            x=0;
            for (int k = 1; k <=16; k++ ){
                if (validarFila(i, k) && validarColumna(j,k) && validarCuadro(i,j,k) && matriz[i][j]->modificable){
                    temp[x] = k;
                    x++;
                    }
            }
            matriz[i][j]->cantPosibles = x;
            matriz[i][j]->posibles = new int[x]; // se asinga la memoria a la variable puntero dentro del struct
            for (int h = 0; h < x ; h++) {
                matriz[i][j]->posibles[h] = temp[h];
            }
        }
    }
}// fin de determina_posibles

void Grafo2::liberarmemoria(){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            delete [] matriz[i][j]->posibles;
        }
    }
}



void Grafo2::copiarGrafo(Grafo2* grafo){
    if(indice < 64){
        for (int i=0; i<=indice; i++) {
            vertices[i] = grafo->vertices[i];
        }
        indice++;
    }
}
