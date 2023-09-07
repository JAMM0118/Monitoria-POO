#include<iostream>
#include<math.h>
using namespace std;

int saldo = 1000, seleccion; 
float extra, saldo_final = 0, retiro;

int main(){
    cout<<"\tBienvenido a su Cajero Virtual"<<endl;
    cout<<"1. Ingresar dinero en cuenta"<<endl;
    cout<<"2. Retirar dinero de la cuenta"<<endl;
    cout<<"3. Salir"<<endl; 
    cout<<"Seleccione una opcion: "; cin>>seleccion;
    
    switch (seleccion){
    case 1: cout<<"Digite la cantidad de dinero a ingresar: "; 
            cin>>extra;
            saldo_final = saldo + extra; cout<<"Dinero en cuenta: "<<saldo_final; break;

    case 2: cout<<"Digite la cantidad de dinero a retirar: "; 
            cin>>retiro;
            if (retiro > saldo ){
                cout<<"No puedes retirar esta cantidad de dinero porque no tienes dicha cantidad "; 
            }   
            else{
                saldo_final = saldo-retiro;
                cout<<"Dinero en cuenta: "<<saldo_final; break;
            }    
    
    case 3: break;
    }

    return 0;
}