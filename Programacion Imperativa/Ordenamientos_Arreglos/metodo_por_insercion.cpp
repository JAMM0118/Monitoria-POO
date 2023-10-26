//Metodo de ordenaminento por insercion (directo)

// | 1 | 3 | 2 | 5 | 9 | 7 | 10 | 12 | 4

#include<iostream>
using namespace std;

int main(){
    int lista[] = {1,3,2,5,9,7,10,12,4,5,5};
    int pos, aux;


    //Algoritmo

    for(int i = 0; i<11; i++){
        pos = i; 
        aux = lista[i];  

        while((pos>0) && (lista[pos-1] > aux)){
            lista[pos] = lista[pos-1];  
            pos--;
        }

        lista[pos] = aux;
     
    }

    cout<<"\nOrden ascendente: ";

    for(int i = 0; i<11; i++){
        cout<<lista[i]<<" | ";
    }

    cout<<"\nOrden Descendente: ";
    for(int i = 10; i>=0; i--){
        cout<<lista[i]<<" | ";
    }

    return 0;
}