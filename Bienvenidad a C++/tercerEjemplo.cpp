#include<iostream>
using namespace std;

int main(){

    int numero=0;
    cout<<"Ingrese un numero:";
    cin>>numero;

/* funcionamiento del do while
    do{
        cout<<"El numero es: "<<numero<<endl;
        numero++;

    }while(numero <= 10);*/

    int contador = 1;

    for (int i = 0; contador < 10; contador++, i++){

        cout<<"El numero es: "<<i<<endl;
    }



    return 0;
}