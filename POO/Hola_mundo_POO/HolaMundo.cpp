#include "Holamundo.h"

//En el archivo cpp se implementan los metodos y el constructor


Holamundo::Holamundo(){}

Holamundo::~Holamundo(){}

//Un metodo con la palabra set siempre debe asignar un valor a un atributo (variable)
//Es decir, siempre debe tener parametros
void Holamundo :: setMensaje(string palabra){
    mensaje = palabra;

}

//Esta notacion Holamundo (tipo) ( nombre de la clase ) :: getMensaje (metodo de la clase)
//Significa que ese metodo pertenece a esa clase
//un metodo con la palabra get siempre debe retornar algo, no puede ser void
string Holamundo :: getMensaje(){
    return mensaje;
}
