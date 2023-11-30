#ifndef PERRO_H
#define PERRO_H
#include "Animal.h"
#include <iostream>
using namespace std;

class Perro : public Animal
{
    public:
        Perro();
        virtual ~Perro();

        void hacersonido() override{
            cout << "Guau" << endl;
        }

        void hablar() override{
            cout << "Hola soy un perro" << endl;
        }

    protected:

    private:
};

#endif // PERRO_H
