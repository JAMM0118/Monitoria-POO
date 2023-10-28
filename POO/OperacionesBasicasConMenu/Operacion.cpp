#include "Operacion.h"

Operacion::Operacion(){}

Operacion::~Operacion(){}

void Operacion :: menu(){

    cout<<"\tBienvenido a la calculadora basica"<<'\n';
    cout<<"---------------------------------------------"<<endl;
    cout<<"\t1. Hacer suma"<<'\n';
    cout<<"\t2. Hacer resta"<<'\n';
    cout<<"\t3. Hacer multiplicacion"<<'\n';
    cout<<"\t4. Hacer division"<<'\n';
    cout<<"---------------------------------------------"<<endl;

    cout<<"Selecione una opcion: ";
    cin>>opcion;

    cout<<"\nDigite el primer valor: ";
    cin>>numero1;

    cout<<"\nDigite el segundo valor: ";
    cin>>numero2;

    if(opcion == 1){
        setNumerosOperacion(numero1,numero2,"+");
    }

    else if(opcion == 2){
        setNumerosOperacion(numero1,numero2,"-");
    }
    else if(opcion == 3){
        setNumerosOperacion(numero1,numero2,"*");
    }
    else if(opcion == 4){
        setNumerosOperacion(numero1,numero2,"/");
    }

    mostrarResultado();
    cout<<'\n';
    system("pause");

}


void Operacion :: setNumerosOperacion(double a, double b, string operacion){
    numero1 = a;
    numero2 = b;

    if(operacion == "+"){
        resultado = numero1 + numero2;
    }

    else if (operacion == "-"){
        resultado = numero1 - numero2;
    }

    else if (operacion == "*"){
        resultado = numero1 * numero2;
    }
    else if (operacion == "/"){
        resultado = numero1 / numero2;
    }
}

double Operacion :: getOperacion(){
    return resultado;
}

void Operacion :: mostrarResultado(){
    cout<<"El resultado de la operacion es: "<<getOperacion();
}

