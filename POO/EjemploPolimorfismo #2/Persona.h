#ifndef Persona_H
#define Persona_H

#include <iostream>
using namespace std;


class Persona
{
    public:

        Persona();
        virtual ~Persona();
        
        virtual void decirNombre() = 0; //metodo virtual puro
        virtual void hablar() = 0;
    
    protected:
    string nombre;

    private:
};

#endif // Persona_H
