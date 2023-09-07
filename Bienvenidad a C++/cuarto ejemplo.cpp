#include<iostream>
using namespace std;

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

     // 3 5 7
    int auxiliar, auxiliar2, auxiliar3;

    for (int i=0; i<3; i++){ 

        if(numero >numero2){
            auxiliar = numero;
        }
        if( numero2 > numero3){
            auxiliar2 = numero2;
            auxiliar3 = numero3;
        }
        else{
            auxiliar2 = numero3;
            auxiliar3 = numero2;
         
        }
        if(auxiliar > auxiliar2){
            cout<<"El numero mayor es: "<<auxiliar<<endl;
            cout<<"El numero del medio es: "<<auxiliar3<<endl;
            cout<<"El numero menor es: "<<auxiliar2<<endl;
            break;
        }
        else{
            cout<<"El numero mayor es: "<<auxiliar2<<endl;
            cout<<"El numero del medio es: "<<auxiliar3<<endl;
            cout<<"El numero menor es: "<<auxiliar<<endl;
            break;
        }
     
    } 

    return 0;
}