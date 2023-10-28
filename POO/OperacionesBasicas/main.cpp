#include <iostream>
#include "Operacion.h"
#include "Operacion.cpp"

using namespace std;

int main()
{
    Operacion operacion; //se crea instancia de la clase
    operacion.setNumerosSuma(5,2); // 7
    operacion.setNumerosResta(5,2); // 3
    operacion.setNumerosMultiplicacion(5,2); //10
    operacion.setNumerosDivision(5,2); // 2.5

    cout<<"\nLa suma es: "<<operacion.getSuma()<<endl;
    cout<<"La resta es: "<<operacion.getResta()<<endl;
    cout<<"La multiplicacion es: "<<operacion.getMultiplicacion()<<endl;
    cout<<"La division es: "<<operacion.getDivision()<<endl;

    operacion.setNumerosOperacion(5,2,"/");
    cout<<"\nEl resultado de la operacion es: "<<operacion.getOperacion()<<endl;
    
    return 0;
}
