//Un programa donde dependiendo de un rango con la de numeros aleatoria, nos determine o asigne 
// el valor de un precio

#include<iostream>
#include<time.h>
#include<stdlib.h>


using namespace std;  

int main(){
    int numeroAletorio = 0;
    int precio = 0;

    srand(time(NULL));
    numeroAletorio = 5000 + rand() % (15000 -5000);

    cout<<"Ingrese el precio del producto: "; cin>>precio;
    if(precio >= 5000 && precio <= numeroAletorio){
        cout<<"El precio del producto esta en el rango de 5000 -10000: "<<endl;

    }

    system("PAUSE");



    return 0;
}