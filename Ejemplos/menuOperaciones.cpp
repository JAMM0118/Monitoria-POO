#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int number, par_impar, opcion ;
float proceso;

int main(){

    while(true){
    cout<<"\n";   
    cout<<"\tElige una opcion"<<endl;
    cout<<"1. Calcular el cubo de un numero"<<endl;
    cout<<"2. Verificar si un numero es par o impar"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Seleciona una opcion: "; cin>>opcion;

    switch (opcion){
    case 1: cout<<"Digite el numero: "; 
            cin>>number; 
            proceso = pow(number,3);
            cout<<"El cubo del numero ingresado es: "<<proceso<<endl; break;

    case 2: cout<<"Digite el numero a verificar: "; cin>>par_impar; 
            if (par_impar%2 == 0 ){
                cout<<"El numero ingresado es par"<<endl; break;
            }
            else{
                cout<<"El numero ingresado es impar"<<endl; break;
            }

    case 3: exit(0); break;
    }}

    return 0;
}