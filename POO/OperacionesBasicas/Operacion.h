#ifndef OPERACION_H
#define OPERACION_H

#include <iostream>
using namespace std;


class Operacion
{
    public:
        Operacion();
        virtual ~Operacion();

        void setNumerosSuma(int a, int b);
        void setNumerosResta(int a, int b);
        void setNumerosMultiplicacion(int a, int b);
        void setNumerosDivision(double a, double b);
        void setNumerosOperacion(double a, double b, string operacion);

        int getSuma();
        int getResta();
        int getMultiplicacion();
        double getDivision();
        double getOperacion();

    protected:

    private:
     double numero1;
     double numero2;
     string operacion;
     double resultado;
};

#endif // OPERACION_H
