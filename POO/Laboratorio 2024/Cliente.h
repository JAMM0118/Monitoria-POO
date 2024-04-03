#ifndef Cliente_H
#define Cliente_H

#include<iostream>
#include<vector>
using namespace std;


class Cliente{

    private:
        string id, nombre, fecha;

    protected: 
        vector<Cliente> clientes;

    public:
        Cliente();
        virtual ~Cliente();
        
        void setId();
        void setNombre();
        void setFecha();
        
        string getId();
        string getNombre();
        string getFecha();   

        void mostrarCliente();

        friend std::ostream& operator<<(std::ostream& os, const Cliente& obj) {
            os << "\nId: " << obj.id  << "\nNombre: " << obj.nombre << "\nFecha: " << obj.fecha << std::endl;
            return os;
        }     
         
    
};


#endif