#include "Herencia.h"

Herencia::Herencia()
{
}

Herencia::~Herencia()
{
    // dtor
}

void Herencia::setValor1(int valor1)
{
    this->valor1 = valor1;
}
int Herencia::getValor1()
{
    return this->valor1;
}

void Herencia::setValor2(int valor2)
{
    this->valor2 = valor2;
}
int Herencia::getValor2()
{
    return this->valor2;
}

int Herencia::getSuma()
{
    return this->valor1 + this->valor2;	
}

int Herencia::getResta()
{
    return this->valor1 - this->valor2;
}

void Herencia::setNombre(string nombre)
{
    this->nombre = nombre;
}

string Herencia::getNombre()
{
    return this->nombre;
}