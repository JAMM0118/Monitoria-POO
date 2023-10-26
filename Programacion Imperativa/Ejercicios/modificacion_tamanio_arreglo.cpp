#include<iostream>

using namespace std;

int main(){
    int *arreglo,n;

    cout<<"Digite el tamaño del arreglo: "; cin>>n;

    arreglo = new int[n];
    
    for(int i=0; i<n; i++){
        cout<<"Digite un numero: "; cin>>(arreglo[i]);
    }

    for(int i=0; i<n; i++){
        cout<<"El numero "<<arreglo[i]<<" esta ubicado en la posicion ["<<i<<"]"<<endl;
    }

    return 0;
}