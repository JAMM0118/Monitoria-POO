#ifndef Empleado_H
#define Empleado_H
#include "Persona.h"
#include <iostream>
using namespace std;


class Empleado : public Persona
{
    public:
        Empleado(string nombre_);
        virtual ~Empleado();

        void decirNombre() override;
        void hablar() override;

    protected:

    private:
};

#endif // Empleado_H
