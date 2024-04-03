#include "Facturacion.h"

Facturacion :: Facturacion(){}

Facturacion :: ~Facturacion(){}

void Facturacion :: verFacturas(){

    cout<<"Clientes: "<<endl;
    mostrarCliente();

    cout<<"\n";

    cout<<"Productos: "<<endl;
    mostrarProducto();
    
    system("pause");
}


void Facturacion:: menu(){
    cout<<"\tBienvenido "<<endl;

    cout<<"1. Crear"<<endl;
    cout<<"2. Actualizar"<<endl;
    cout<<"3. Consultar"<<endl;
    cout<<"4. Eliminar"<<endl;
    cout<<"5. Ver facturas"<<endl;
    cout<<"6. Salir"<<endl;

    cout<<"\nSeleccione una opcion: ";
    cin>>opcion;

    switch (opcion)
    {
    case 1: crearObject();break;
    case 2: updateObject();break;
    case 3: readObject(); break;
    case 4: deleteObject(); break;
    case 5: verFacturas(); break;
    case 6: exit(0);break;
    
    }
}