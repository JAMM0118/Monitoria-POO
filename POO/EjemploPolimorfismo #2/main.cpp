#include <iostream>
#include "Empleado.h"
#include "Empleado.cpp"
#include "Persona.h"
#include "Persona.cpp"
using namespace std;

int main()
{
    Persona *persona = new Empleado("Juan");
   
    //Animal *animal2 = new Gato();
    persona->decirNombre();
    persona->hablar();
    //animal2->hacersonido();
    
    
    return 0;
}
