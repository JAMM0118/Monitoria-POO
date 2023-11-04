#include "CajeroAutomatico.h"

CajeroAutomatico::CajeroAutomatico(){}

CajeroAutomatico::~CajeroAutomatico(){}

void CajeroAutomatico :: menu(){

    cout<<"\tBienvenido a su Cajero Virtual"<<endl;
    cout<<"1. Ingresar dinero en cuenta"<<endl;
    cout<<"2. Retirar dinero de la cuenta"<<endl;
    cout<<"3. Ver Dinero en cuenta"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"Seleccione una opcion: ";
    cin>>seleccion;

    opciones(seleccion);
}
void CajeroAutomatico :: opciones(int seleccion){
    switch(seleccion){
    case 1: setConsignacion();break;

    case 2: setRetirar();break;

    case 3:cout<<"El dinero en la cuenta es: "<<
            getDineroEnCuenta()<<endl;
            system("pause");break;

    case 4: exit(0);break;
    }

}

void CajeroAutomatico :: setConsignacion(){
   cout<<"Digite la cantidad a consignar: ";
    cin>>consignacion;
    saldo += consignacion;
}

void CajeroAutomatico :: setRetirar(){
    cout<<"Digite la cantidad a consignar: ";
    cin>>retiro;
    if(retiro > saldo){
        cout<<"No hay saldo suficiente"<<endl;
        system("pause");
    }
    else{
        saldo -= retiro;
    }
}

double CajeroAutomatico :: getDineroEnCuenta(){
    return saldo;

}
