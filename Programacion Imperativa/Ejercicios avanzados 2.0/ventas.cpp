/**Programa para la venta de productos
 * 
 * Haz un menu que permita:
 * 
 * 1.Registrar un comprador
 * 2. Hacer una compra
 * 3. Buscar comprador y los productos que ha comprado
 * 4. Salir
 * 
 * Debes hacer una matriz que se muestre todo el tiempo durante la ejecucion del programa
 * En la matriz se debe mostrar los productos y el numero de ventas que se han hecho en total
 * 
 * 
 * **/


#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>

using namespace std;


void mostrarPodructos(string productos[5][6],string productosVendidos[15]);
void busquedaComprador(string compradores[100],string compras[100]);
void hacerCompra(string productos[5][6],string productosVendidos[15],string compradores[100],string compras[100],string producto);
void menu(string productos[5][6],string productosVendidos[15],string compradores[100],string compras[100],string producto);
void registrarComprador(string compradores[100]);
string volverMinusculas(string palabra);

int contadorVenta =0, numeroCompradores = 0;

int main(){
    string productos[5][6];
    int contadorVenta = 0;
    
    string productosVendidos[16] = {"Arroz","Frijoles","Papa","Carne","Pollo","Huevos","Salchichas","Leche","Queso","Manzana",
    "Cereal","Tomate","Cebolla", "Maduro","Banano"};
    
    string compradores[100];
    string compras[100];
    string productoAComprar;
    
    while(true){
        menu(productos,productosVendidos,compradores,compras,productoAComprar);
    }
    return 0;
}


void mostrarPodructos(string productos[5][6],string productosVendidos[15]){
    
    /*|             Productos               | #numero ventas    |
      | Arroz  |Frijoles | Papa     | Carne |                   |  
      | Pollo  |Huevos   |Salchichas| Leche |
      | Queso  |         |          |       |
    
    
    
    */

    productos[0][2] = "Productos";
    productos[0][5] = "#NumeroVentas";
   int contador = 0;
   for(int i=1; i<5; i++){
       for(int j=0; j<5; j++){
           productos[i][j] = productosVendidos[contador];
           contador++;
       }
   }
    for(int i=0; i<5; i++){
        for(int j=0; j<6; j++){
            cout<<setw(10)<<productos[i][j]<<" ";
        }
        cout<<"\n";
    }

}

void busquedaComprador(string compradores[100],string compras[100]){
    string comprador;
    bool bandera = false;
    
    cout<<"Digite el nombre del comprador a buscar: ";
    cin>>comprador;

    for(int i=0; i<100; i++){
        if(volverMinusculas(comprador) == volverMinusculas(compradores[i])){
            cout<<"\n";
            cout<<"El comprador "<<comprador<<" compro: ";
            cout<<compras[i]<<endl;
            bandera = true;
            break;  
        }
    }

    if(bandera == false){
        cout<<"El comprador no existe"<<endl;
    }

}


void hacerCompra(string productos[5][6],string productosVendidos[15],string compradores[100],string compras[100],string producto){
    string comprador;
    bool bandera = false;
    int posicion;

    cout<<"Digite el nombre del comprador para que la compra sea registrada: ";
    cin>>comprador;


    for(int i=0; i<100; i++){
    
        if(volverMinusculas(comprador) == volverMinusculas(compradores[i])){
            bandera = true;
            posicion = i;
            break;
        }
        else{
            bandera =false;
        }
        
    }

    if(bandera == true){
        for(int i=0; i<15; i++){
            if(volverMinusculas(producto)==volverMinusculas(productosVendidos[i])){           
                compras[posicion] += " -- " + producto; 
                contadorVenta++;
                bandera = true;
                productos[1][5] = to_string(contadorVenta);
                break;
            }
            else{
                bandera = false;
            }
        }

        if(bandera==false){
            cout<<"El producto ingresado no existe"<<endl;
        }      
    }
    else{
        cout<<"El comprador no existe"<<endl;       
    }

}

void menu(string productos[5][6],string productosVendidos[15],string compradores[100],string compras[100],string producto){
    system("cls");
    int opcion;

    cout<<"\t------Bienvenido a la tienda de productos-------\n"<<endl;

    cout<<"-----------------------------------------------------------------------"<<endl;
    mostrarPodructos(productos,productosVendidos);
    cout<<"-----------------------------------------------------------------------"<<endl;

    cout<<"\n\n";
    cout<<"¿Que quieres hacer?: ";
    cout<<"\n";
    cout<<"1. Registrar un comprador"<<endl;
    cout<<"2. Hacer una compra"<<endl;
    cout<<"3. Buscar comprador y los productos que ha comprado"<<endl;
    cout<<"4. Salir"<<endl;

    cout<<"Selecione una opcion: ";
    cin>>opcion;
    
    switch (opcion){

        case 1: 
            registrarComprador(compradores);
            system("pause");
            break;
        
        case 2: 
            cout<<"Digite el producto que desea comprar: ";
            cin>>producto;
            hacerCompra(productos,productosVendidos,compradores,compras,producto);
            system("pause");
            break;
        
        case 3:
            busquedaComprador(compradores,compras);
            system("pause");

            break;


        case 4: exit(0); break;
    }

}

void registrarComprador(string compradores[100]){
    string comprador;
    bool bandera = true;

    cout<<"Digite el nombre del comprador para que sea registrado: ";
    cin>>comprador;
    
    for(int i=0; i<100; i++){
        if(volverMinusculas(comprador) == volverMinusculas(compradores[i])){
            cout<<"El comprador ya existe"<<endl;
            bandera = false;
            break;
        }
    }
    
    for(int i=0; i<100; i++){
        if(bandera == true){
            compradores[numeroCompradores] = comprador;
            numeroCompradores++;
             cout<<"El comprador "<<comprador<<" ha sido registrado"<<endl;
            break;
        }
    }
   
}

string volverMinusculas(string palabra){

    //Juan -> 4
    //Juan -> juan
    //JUAN -> juan 

    string palabraMinuscula;

    for(int i=0; i<palabra.length(); i++){
        palabraMinuscula += tolower(palabra[i]);
    }
    return palabraMinuscula;
}


