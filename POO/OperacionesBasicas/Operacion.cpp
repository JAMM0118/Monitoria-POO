#include "Operacion.h"

Operacion::Operacion()
{
    //ctor
}

Operacion::~Operacion()
{
    //dtor
}


void Operacion :: setNumerosSuma(int a ,int b){
    numero1 = a;
    numero2 = b;
}

int Operacion :: getSuma(){
    return numero1 + numero2;
}

void Operacion :: setNumerosResta(int a ,int b){
    numero1 = a;
    numero2 = b;
}

int Operacion :: getResta(){
    return numero1 - numero2;
}

void Operacion :: setNumerosMultiplicacion(int a ,int b){
    numero1 = a;
    numero2 = b;
}

int Operacion :: getMultiplicacion(){
    return numero1 * numero2;
}
void Operacion :: setNumerosDivision(double a, double b){
    numero1 = a;
    numero2 = b;
}

double Operacion :: getDivision(){
    return numero1 / numero2;
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
