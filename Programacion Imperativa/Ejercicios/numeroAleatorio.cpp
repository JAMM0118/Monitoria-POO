#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;


int main(){
    int numero, numeroAleatorio, contador = 0;

    srand(time(NULL)); //Creacion de un nuemero aleatorio



    numeroAleatorio = 1 + rand()%(100); // 1 y 100

    // 1  100  rangoInicial + rangofinal - rangoInicial  344 - 544

    do{
        cout<<"Digite un numero: ";
        cin>>numero;
        if(numero > numeroAleatorio){
            cout<<"\nDigite un numero menor\n";
        }
        if( numero < numeroAleatorio){
            cout<<"\nDigite un numero mayor\n";
        }
    
        contador++;
    }while(numero != numeroAleatorio);

    cout<<"\nFelicidades adivinaste el numero\n";
    cout<<"Numero de intentos: "<<contador<<endl;

    system("PAUSE");



    return 0;
}