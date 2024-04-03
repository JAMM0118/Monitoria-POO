#include "Producto.h"

Producto :: Producto(){}
Producto :: ~Producto(){}

    
void Producto :: mostrarProducto(){
    for(Producto i : productos){
        cout<< i <<endl;
    }
}

void Producto :: setId(){
    
    fflush(stdin);
    cout<<"Digite el id del producto: ";
    getline(cin,id);
    
}

void Producto :: setNombre(){
    
    fflush(stdin);
    cout<<"Digite el nombre del producto: ";
    getline(cin, nombre);
    
}

void Producto :: setPrecio(){
    
    fflush(stdin);
    cout<<"Digie el precio del producto: ";
    cin>>precio;
}

double Producto :: getPrecio(){
    return precio;
}

string Producto :: getId(){
    return id;
}

string Producto :: getNombre(){
    return nombre;
}