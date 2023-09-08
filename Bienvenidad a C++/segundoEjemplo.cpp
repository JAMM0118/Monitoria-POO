#include<iostream>
using namespace std;

int main(){

    //hacer comentario
/*
    if (condicion){

        if( condicion){
             
        }
        else{
            if (codicion){

            }
        }

    }
*/
    int numero = 1;
    string palabra;
    
    char letra = 'a';
    cout<<"Ingrese una palabra: ";
    
    cin>>palabra;

    cout<<"La palabra es: "<<palabra<<endl;

    switch (letra){

    case 'a' : cout<<"Caso 1"; break; 
    case 'b': cout<<"Caso 2"; break;
    
    default: cout<<"Esta opcion no existe" ; break;
    }

    return 0;
}