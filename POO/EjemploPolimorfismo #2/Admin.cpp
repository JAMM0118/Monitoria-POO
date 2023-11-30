#include "Admin.h"

Admin::Admin(string nombre_)
{
   this->nombre = nombre_;
}

Admin::~Admin()
{
    //dtor
}
void Admin::decirNombre()
{
    cout << "Mi nombre es " << nombre << endl;
}

void Admin::hablar()
{
    cout << "Hola soy " << nombre <<" el admin" << endl;
}