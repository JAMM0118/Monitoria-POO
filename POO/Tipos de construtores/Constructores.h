#ifndef Constructores_H
#define Constructores_H

#include <iostream>
#include<stdlib.h>
using namespace std;

class Constructores
{
    public:
        virtual ~Constructores(){};
        
        Constructores(int numero1_){
            this->numero1=numero1_;
        };
        
        Constructores(int numero1_, int numero2_){
            this->numero1=numero1_;
            this->numero2=numero2_;
        };

        Constructores(){
            this->numero1=8;
            this->numero2=9;
            this->numero3=10;
        };

        void setNumero1(){
            cout<<numero1<<endl;
            cout<<numero2<<endl;
            cout<<numero3<<endl;
        };




    protected:


    private:
        int numero1=0;
        int numero2=0;
        int numero3=0;
};

#endif // Constructores_H
