#ifndef Producto_H
#define Producto_H

#include<iostream>
#include<vector>

using namespace std;


class Producto{

    private:
       string id, nombre;
       double precio;

    protected: 
        vector<Producto> productos;
        
    public:
        Producto();
        ~Producto();

        void setId();
        void setNombre();
        void setPrecio();
        
        string getId();
        string getNombre();
        double getPrecio(); 

        void mostrarProducto();

        friend std::ostream& operator<<(std::ostream& os, const Producto& obj) {
            os << "\nId: " << obj.id << "\nNombre: " << obj.nombre << "\nPrecio: " << obj.precio <<  std::endl;
            return os;
        }
};


#endif