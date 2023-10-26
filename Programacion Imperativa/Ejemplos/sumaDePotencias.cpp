#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main(){
    int elevacion =0, suma = 0, n;

    cout<<"Digite el numero de potencias de 2 que quieres sumar: "; cin>>n;
    
    for(int i=1;i<=n;i++){

        // la funcion pow es para elevar un numero a una potencia que deseemos
        elevacion = pow( 2,i); 
        suma += elevacion;
    }

    cout<<"La suma total: "<<suma<<endl; 

    system("PAUSE");
    return 0;
}