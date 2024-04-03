#ifndef Crud_H
#define Crud_H

#include<iostream>
#include<stdlib.h>
#include"Cliente.h"
#include"Cliente.cpp"
#include"Producto.h"
#include"Producto.cpp"

using namespace std;


class Crud: public Cliente, public Producto{

    private:
        int opcion;

    protected: 

    public:
        Crud();
        virtual ~Crud();

        void crearObject(); 
        void updateObject();
        void readObject();
        void deleteObject();
        
        
        
};


#endif