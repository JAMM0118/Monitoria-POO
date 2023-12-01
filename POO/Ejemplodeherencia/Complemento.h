#ifndef Complemento_H
#define Complemento_H
#include <iostream>
using namespace std;

class Complemento
{
    public:
        Complemento(){}
        virtual ~Complemento(){}



    protected:
        string nombre;
        int suma = 0;
        int resta =0;
        int multiplicacion=0;
        int valor1=0;
        int valor2=0;


    private:
};

#endif // Complemento_H
