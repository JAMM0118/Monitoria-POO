#include "Cliente.h"

Cliente :: Cliente(){}

Cliente :: ~Cliente(){}



void Cliente :: mostrarCliente(){
    for(const auto& i : clientes){
        cout<< i <<endl;
    }
}


void Cliente :: setId(){
    
    fflush(stdin);
    cout<<"Digite el id del cliente: ";
    getline(cin,id);
        
}

void Cliente :: setNombre(){
    
    fflush(stdin);
    cout<<"Digite el nombre del cliente: ";
    getline(cin, nombre);
        
}

void Cliente :: setFecha(){
    
    fflush(stdin);
    cout<<"Digite la fecha de ingreso del cliente: ";
    getline(cin,fecha);
}

string Cliente :: getId(){
    return id;
}

string Cliente :: getNombre(){
    return nombre;
}

string Cliente :: getFecha(){
    return fecha;
}  