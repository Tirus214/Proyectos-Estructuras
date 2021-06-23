#include "cablera.h"

int Cablera::prim(int nodo){
    int ans = 0;
    priority_queue<pair<int, int>> cola; //guardar aristas
    cola.push({0, nodo});
    while(!cola.empty()){
        pair<int, int> curr = cola.top();
        cola.pop();
        if(esta[curr.second])
            continue;
        esta[curr.second] = true;
    }
}
