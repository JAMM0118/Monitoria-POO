#ifndef Herencia_H
#define Herencia_H
#include "Complemento.h"
#include <iostream>
using namespace std;

class Herencia : public Complemento
{
    public:

    
        Herencia();
        virtual ~Herencia();


        void setNombre(string nombre);
        void setValor1(int valor1);
        void setValor2(int valor2);


        string getNombre();
        int getValor2();
        int getValor1();
        int getSuma();
        int getResta();

    protected:

    private:
};

#endif // Herencia_H
