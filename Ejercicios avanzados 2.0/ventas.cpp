/**Programa para la venta de productos
 * 
 * Haz un menu que permita:
 * 1. Hacer una compra
 * 2. Buscar comprador y los productos que ha comprado
 * 
 * Debes hacer una matriz que se muestre todo el tiempo durante la ejecucion del programa
 * En la matriz se debe mostrar los productos y el numero de ventas que se han hecho en total
 * 
 * 
 * **/


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;


void mostrarPodructos(string productos[5][6],string productosVendidos[15]);
void calcularVentas(string productos[5][6],string productosVendidos[15],string compra, int contador);
void busquedaComprador(string productos[5][6],string productosVendidos[15],string compradores[4]);
void hacerCompra(string productos[5][6],string productosVendidos[15],string compradores[4],string compras[4],string producto);

int main(){
    string productos[5][6];
    int contador = 1;
    
    string productosVendidos[16] = {"Arroz","Frijoles","Papa","Carne","Pollo","Huevos","Salchichas","Leche","Queso","Manzana",
    "Cereal","Tomate","Cebolla", "Maduro","Banano"};
    
    string compradores[4] = {"Juan","Pedro","Maria","Luis"};
    string compras[4] = { " " };
    string productoAComprar;
    
    mostrarPodructos(productos,productosVendidos);
    while(true){

    
        cout<<"\n\n";

        cout<<"¿Que quieres comprar?: ";
        cin>>productoAComprar;
        calcularVentas(productos,productosVendidos,productoAComprar,contador);
        contador++;

        //hacerCompra(productos,productosVendidos,compradores,compras,productoAComprar);
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

void calcularVentas(string productos[5][6],string productosVendidos[15],string compra, int contador){
    bool bandera = false;
    for(int i=0; i<15; i++){
        
        if(compra == productosVendidos[i]){
            bandera = true;
            productos[1][5] = to_string(contador);

            break;
        }
    }
    mostrarPodructos(productos,productosVendidos);
}


void busquedaComprador(string productos[5][6],string productosVendidos[15],string compradores[4]){
    string comprador;
    cout<<"Digite el nombre del comprador a buscar: ";
    cin>>comprador;

    for(int i=0; i<4; i++){
        if(comprador == compradores[i]){
            cout<<"El comprador "<<comprador<<" compro: ";
            for(int j=0; j<15; j++){
                if(productosVendidos[j] == "Arroz"){
                    cout<<productosVendidos[j]<<endl;
                }
            }
          
            
        }
    }

}


void hacerCompra(string productos[5][6],string productosVendidos[15],string compradores[4],string compras[4],string producto){
    string comprador;
    cout<<"Digite el nombre del comprador: ";
    cin>>comprador;
    for(int i=0; i<4; i++){
        compras[i] += " " + producto; 
        break;
            
        
    }
    cout<<compras[0]<<endl;

}