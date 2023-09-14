#include<iostream>

using namespace std;

int main(){
    
    int arreglo[] = {1,2,3,4,5,6,7,10,67,20};
    int suma=0;
    int longitud = sizeof(arreglo)/sizeof(*arreglo);

    for(int i=0; i<longitud; i++){
        suma += arreglo[i];
    }
    
    cout<<"La suma de los elementos del arreglo son: "<<suma<<endl;

    
    return 0;
}