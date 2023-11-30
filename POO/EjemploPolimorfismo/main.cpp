#include <iostream>
#include "Gato.h"
#include "Gato.cpp"
#include "Perro.h"
#include "Perro.cpp"
#include "Animal.h"
#include "Animal.cpp"

using namespace std;

int main()
{
    /*Animal *animal = new Perro();

    Animal *animal2 = new Gato();

    animal->hacersonido();
    animal2->hacersonido();

    Perro perro = Perro();
    Gato gato = Gato();

    perro.hacersonido();
    gato.hacersonido();

    gato.hablar();

    animal2->hablar();*/

    Perro perro ;
    Gato gato;

    //Animal *animal2 = new Gato();

    Animal *animales[] = {&perro, &gato};

    for(int i = 0; i < 2; i++)
    {
        animales[i]->hacersonido();
        //perro.hablar();
        animales[i]->hablar();
        cout<<'\n';
    }

    return 0;
}
