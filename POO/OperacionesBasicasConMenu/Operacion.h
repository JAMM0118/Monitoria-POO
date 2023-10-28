#ifndef OPERACION_H
#define OPERACION_H

#include <iostream>
#include<stdlib.h>
using namespace std;

class Operacion
{
    public:
        Operacion();
        virtual ~Operacion();

        void menu();
        void setNumerosOperacion(double a, double b, string operacion);
        void mostrarResultado();


        double getOperacion();


    protected:


    private:
        double numero1;
        double numero2;
        string operacion;
        double resultado;
        int opcion;
};

#endif // OPERACION_H
