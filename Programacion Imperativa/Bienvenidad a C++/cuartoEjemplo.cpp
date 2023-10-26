#include<iostream>
#include <algorithm>

using namespace std;

// Usos de condicionales

// AND == &&
// OR == ||
// NOT == !
// diferente == !=

int main(){

    int numero,numero2,numero3;
    
    cout<<"Ingrese un numero: ";
    cin>>numero;

    cout<<"Ingrese un numero: ";
    cin>>numero2;

    cout<<"Ingrese un numero: ";
    cin>>numero3;

    cout<<"\n";

     // 3 5 7
     
    if(numero>numero2 && numero> numero3){
        if(numero2>numero3){
            cout<<"El numero mayor es: "<<numero<<endl;
            cout<<"El numero del medio es: "<<numero2<<endl;
            cout<<"El numero menor es: "<<numero3<<endl;
            
        }
        else{
            cout<<"El numero mayor es: "<<numero<<endl;
            cout<<"El numero del medio es: "<<numero3<<endl;
            cout<<"El numero menor es: "<<numero2<<endl;
            
        }
    }
    else if(numero2>numero && numero2> numero3){
        if(numero>numero3){
            cout<<"El numero mayor es: "<<numero2<<endl;
            cout<<"El numero del medio es: "<<numero<<endl;
            cout<<"El numero menor es: "<<numero3<<endl;
            
        }
        else{
            cout<<"El numero mayor es: "<<numero2<<endl;
            cout<<"El numero del medio es: "<<numero3<<endl;
            cout<<"El numero menor es: "<<numero<<endl;
            
        }
    }
    else if(numero3>numero && numero3> numero2){
        if(numero>numero2){
            cout<<"El numero mayor es: "<<numero3<<endl;
            cout<<"El numero del medio es: "<<numero<<endl;
            cout<<"El numero menor es: "<<numero2<<endl;
            
        }
        else{
            cout<<"El numero mayor es: "<<numero3<<endl;
            cout<<"El numero del medio es: "<<numero2<<endl;
            cout<<"El numero menor es: "<<numero<<endl;
            
        }
    } 


    // Usar la función sort para ordenar los números
    int numeros[] = {numero, numero2, numero3};
    //                 0        1         2
    sort(numeros, numeros + 3);

    int menor = numeros[0];
    int medio = numeros[1];
    int mayor = numeros[2];

    cout<<"El mayor es: "<<mayor<<endl;
    cout<<"El del medio es: "<<medio<<endl;
    cout<<"El menor es: "<<menor<<endl;
 

    return 0;

}