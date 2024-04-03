#ifndef Facturacion_H
#define Facturacion_H

#include<iostream>
#include "Crud.h"
#include "Crud.cpp"
using namespace std;


class Facturacion : public Crud{

    private:
       int opcion;

    protected: 

    public:
        Facturacion();
        ~Facturacion();

        
        void menu();
        void verFacturas();


};


#endif