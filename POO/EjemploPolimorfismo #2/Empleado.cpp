#include "Empleado.h"

Empleado::Empleado(string nombre_)
{
   this->nombre = nombre_;
}

Empleado::~Empleado()
{
    // dtor
}
void Empleado::decirNombre()
{
    cout << "Mi nombre es " << nombre << endl;
}

void Empleado::hablar()
{
    cout << "Hola soy " << nombre << endl;
}
