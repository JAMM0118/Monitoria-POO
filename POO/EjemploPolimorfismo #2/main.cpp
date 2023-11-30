#include <iostream>
#include "Empleado.h"
#include "Empleado.cpp"
#include "Persona.h"
#include "Persona.cpp"
#include "Admin.h"
#include "Admin.cpp"
using namespace std;

int main()
{
    Persona *persona = new Empleado("Juan");
    Persona *persona2 = new Admin("Pedro");
    //Animal *animal2 = new Gato();
    persona->decirNombre();
    persona->hablar();
    persona2->decirNombre();
    persona2->hablar();
    //animal2->hacersonido();
    
    
    return 0;
}
