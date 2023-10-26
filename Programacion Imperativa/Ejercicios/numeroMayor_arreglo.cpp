#include<iostream>

using namespace std;

int main(){
    int n;

    cout<<"Digite el tamaño del arreglo: "; cin>>n;

    int arreglo[n];
    int mayor = 0;
    
    for(int i=0; i<n; i++){
        cout<<i+1<<" Digite un numero: "; cin>>arreglo[i];
        if(arreglo[i] > mayor){
            mayor = arreglo[i];
        }
    }

    cout<<"\nEl numero mayor del arreglo es: "<<mayor<<endl; 
    
    return 0;
}