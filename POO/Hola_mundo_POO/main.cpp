#include <iostream>
#include "Holamundo.h"
#include "Holamundo.cpp"

using namespace std;

int main()
{
    Holamundo imprimir; //se crea la instancia de la clase

    //se asigna un valor al atributo (variable) mensaje
    imprimir.setMensaje("Hola mundo");

    //se llama al metodo get para obtener el valor que asignamos anteriormente
    cout<<imprimir.getMensaje()<<endl;


    return 0;
}
