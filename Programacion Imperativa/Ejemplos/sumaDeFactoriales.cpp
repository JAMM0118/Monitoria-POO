#include<iostream>
using namespace std;

int main(){

    int nElementos,factorial = 1, suma=0;

    cout<<"Digite el numero de elementos para sumar: "; cin>>nElementos;
    
    for(int i=1; i<=nElementos; i++){
        
        factorial *= i;
        
        cout<<"Fatorial de "<<i<<" es: "<<factorial<<endl;
        
        suma += factorial;
    }

    cout<<"La suma de factoriales es: "<<suma<<endl;

    return 0;
} 