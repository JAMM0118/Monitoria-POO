#include<iostream>
#include <vector>
using namespace std;

template<class T>
T mostrarDatos(T dato);

int main(){
    //vector<T> numeros;

    mostrarDatos(1);
    mostrarDatos(1.5);
    mostrarDatos('a');
    mostrarDatos("Hola");
    mostrarDatos(false);
    return 0;
}

template<class T>
T mostrarDatos(T dato){
     cout<<dato<<endl;
}
