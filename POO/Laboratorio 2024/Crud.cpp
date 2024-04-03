#include "Crud.h"

Cliente c;
Producto p;

Crud :: Crud(){}

Crud :: ~Crud(){}

void Crud :: crearObject(){
    cout<<"¿Que deseas crear?"<<endl;
    cout<<" 1. Cliente "<<endl;
    cout<<" 2. Producto"<<endl;

    cout<<"Seleccione una opcion: "; cin>>opcion;

    switch (opcion)
    {
    case 1:
        c.setId();
        c.setNombre();
        c.setFecha();
        
        clientes.push_back(c);
        
        cout<<"\nCliente creado con exito"<<endl;
        system("pause");
        break;
    case 2: 
        p.setId();
        p.setNombre();
        p.setPrecio();
        
        productos.push_back(p);

        cout<<"\nProducto creado con exito"<<endl;
        system("pause");
        break;
    
    }

} 

void Crud :: updateObject(){
    string searchId;
    cout<<"¿Que deseas actualizar?"<<endl;
    cout<<" 1. Cliente "<<endl;
    cout<<" 2. Producto"<<endl;

    cout<<"Seleccione una opcion: "; cin>>opcion;

    switch (opcion)
    {
    case 1:
        cout<<"Digite el id del cliente a actualizar: ";
        cin>>searchId;

        for(auto &i : clientes){
            if(i.getId() == searchId){
                i.setId();
                i.setNombre();
                i.setFecha();
                cout<<"\nCliente actualizado con exito"<<endl;
                system("pause");
                break;
            }
        }

        break;
    case 2: 
        cout<<"Digite el id del producto a actualizar: ";
        cin>>searchId;

        for(auto &i : productos){
            if(i.getId() == searchId){
                i.setId();
                i.setNombre();
                i.setPrecio();
                cout<<"\nProducto actualizado con exito"<<endl;
                system("pause");
                break;
            }
        }

        break;
    
    }

}

void Crud :: deleteObject(){

}

void Crud :: readObject(){

}

