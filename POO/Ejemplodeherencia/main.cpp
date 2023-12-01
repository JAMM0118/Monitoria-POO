#include<iostream>
#include "Herencia.h"
#include "Complemento.h"
#include"Herencia.cpp"
using namespace std;

int main(){

    Herencia prueba;


    prueba.setValor1(10);
    prueba.setValor2(20);
    prueba.setNombre("YO");
    cout<<"La suma es: "<<prueba.getSuma()<<endl;
    cout<<"La resta es: "<<prueba.getResta()<<endl;
    cout<<"El nombre es: "<<prueba.getNombre()<<endl;



    return 0;
}

