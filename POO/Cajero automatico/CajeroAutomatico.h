#ifndef CAJEROAUTOMATICO_H
#define CAJEROAUTOMATICO_H

#include<iostream>
using namespace std;

class CajeroAutomatico
{
    public:
        //constructor
        CajeroAutomatico();
        virtual ~CajeroAutomatico();

        void menu();
        void opciones(int seleccion);

        void setConsignacion();
        void setRetirar();

        double getDineroEnCuenta();

    protected:

    private:
        int seleccion;
        double consignacion;
        double saldo = 1000;
        double retiro;
        int t;
};

#endif // CAJEROAUTOMATICO_H
