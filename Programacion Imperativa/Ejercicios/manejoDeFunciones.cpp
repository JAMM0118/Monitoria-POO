#include<iostream>
using namespace std;

void pedirDatos(string nombre, int n, string nombres[]);
void mostrarDatos( int n, string nombres[]);

int main(){

    string nombre, nombres[100];
    int n;

    pedirDatos(nombre, n ,nombres);
  
    return 0;
}

void pedirDatos(string nombre, int n, string nombres[]){
    
    cout<<"Digite la cantidad de personas a registrar: "; cin>>n;

    for(int i = 0; i<n; i++){
        cout<<"Ingrese su nombre: "; cin>>nombre;
        nombres[i] = nombre;
    }

    mostrarDatos(n,nombres);
}


void mostrarDatos(int n, string nombres[]){
    
    cout<<"\nMostrando los nombres de las personas registradas: \n";
    for(int i = 0; i<n; i++){
        cout<<nombres[i]<<" | ";
    }
}



