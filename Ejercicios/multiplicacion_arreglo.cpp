#include<iostream>

using namespace std;

int main(){
    
    int n, multiplicacion=1;
    
    cout<<"Digite el tamaño del arreglo: "; cin>>n;
    
    int arreglo[n];
    
    int contador=1;

    for(int i=0; i<n; i++){
        arreglo[i] = contador;
        contador++;
    }

    for(int j=0; j<n;j++){
        multiplicacion *= arreglo[j];
    }


    cout<<"La multiplicacion de los elementos del arreglo es: "<<multiplicacion<<endl;


    return 0;
}