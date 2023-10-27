#ifndef HOLAMUNDO_H
#define HOLAMUNDO_H

#include <iostream>

using namespace std;

class Holamundo
{
    public:

        Holamundo(); //constructor que permite instanciar la clase

        virtual ~Holamundo(); // desctructor

        void setMensaje(string mensaje); // metodo de asignacion de atributos / variables
        string getMensaje(); //metodo de obtencion de atributos / variables

    protected:

    private:
     //atributos == variables
     string mensaje;

};

#endif // HOLAMUNDO_H
