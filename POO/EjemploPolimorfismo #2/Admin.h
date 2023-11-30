#ifndef Admin_H
#define Admin_H
#include "Persona.h"
#include <iostream>
using namespace std;

class Admin : public Persona
{
    public:
        Admin(string nombre_);
        virtual ~Admin();

       
        void decirNombre() override;
        void hablar() override;
    protected:

    private:
};

#endif // Admin_H
