#ifndef GATO_H
#define GATO_H
#include "Animal.h"
#include <iostream>
using namespace std;


class Gato : public Animal
{
    public:
        Gato();
        virtual ~Gato();

        void hacersonido() override{
            cout << "Miau" << endl;
        }

        void hablar() override{
            cout << "Hola soy un gato" << endl;
        }

    protected:

    private:
};

#endif // GATO_H
