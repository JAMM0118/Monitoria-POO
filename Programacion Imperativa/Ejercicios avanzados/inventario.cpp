/*
Enunciado: Seguimiento de Inventario de Productos

Eres el desarrollador de software de una pequeña tienda. 
La tienda vende una variedad de productos y necesita un programa para realizar un seguimiento del inventario de productos.
Debes implementar un programa en C++ que permita a la tienda realizar las siguientes operaciones:

1. Agregar un nuevo producto al inventario con la siguiente información:
   - Nombre del producto (string).
   - Código del producto (int).
   - Precio por unidad del producto (float).
   - Cantidad (int).

2. Actualizar la información de un producto existente en el inventario (por ejemplo, cambiar el precio o la cantidad).

3. Mostrar la información de un producto en el inventario dado su código.

4. Mostrar una lista de todos los productos en el inventario, incluyendo su nombre, código, precio y cantidad.

5. Calcular el valor total del inventario, que es la suma del producto del precio por unidad 
por la cantidad de cada producto en el inventario.

Implementa este programa utilizando arreglos para almacenar la información de los productos. 
Utiliza un menú de opciones para permitir al usuario realizar las operaciones mencionadas.

Aquí hay algunas pautas adicionales para la implementación:

- Utiliza un arreglo o arreglos para almacenar la información de cada producto.
- Crea funciones separadas para cada una de las operaciones mencionadas anteriormente.
- Implementa un ciclo de ejecución que permita al usuario realizar múltiples operaciones 
hasta que decida salir del programa.

¡Exitos!
*/

#include <iostream>

using namespace std;

void pedirDatosProducto(string nombre[],int codigo[], float precio[], int cantidad[], int contador);
void mostrarDatosProducto(string nombre[],int codigo[], float precio[], int cantidad[],int contador);
void actualizarDatosProducto(int codigo[], float precio[], int cantidad[],int contador);
void buscarProductoPorCodigo(string nombres[],int codigos[],float precios[],int cantidades[],int contador);
int calcularValorTotal_Inventario(float precios[],int contador);

int main(){

   string nombres[100];
   int codigos[100];
   float precios[100];
   int cantidades[100];
   int contador=0;
   int opcion;

   do{
      cout<<"\n";
      cout<<"\tBienvenido al sistema de inventario de productos"<<endl;
      cout<<"1. Agregar un nuevo producto al inventario"<<endl;
      cout<<"2. Actualizar la informacion de un producto existente"<<endl;
      cout<<"3. Mostrar la informacion de un producto en el inventario dado su codigo"<<endl;
      cout<<"4. Mostrar la informacion de todos los productos en el inventario"<<endl;
      cout<<"5. Calcular el valor total del inventario"<<endl;
      cout<<"6. Salir"<<endl;
      
      cout<<"Ingrese una opcion: ";
      cin>>opcion;
      cin.ignore();
      cin.clear();
      fflush(stdin);

      switch (opcion){
         case 1: pedirDatosProducto(nombres,codigos,precios,cantidades,contador);
                  contador++; break;
         
         case 2: 
            mostrarDatosProducto(nombres,codigos,precios,cantidades,contador);
            actualizarDatosProducto(codigos,precios,cantidades,contador); break;
         
         case 3: buscarProductoPorCodigo(nombres,codigos,precios,cantidades,contador); break;
         
         case 4: mostrarDatosProducto(nombres,codigos,precios,cantidades,contador); break;
         
         case 5: cout<<"\nEl valor total del inventario es: "<<calcularValorTotal_Inventario(precios,contador)<<endl;break;
         
         case 6: exit(0); break;
      }
   }while(opcion!=6);
   
   return 0;
}


void pedirDatosProducto(string nombre[],int codigo[], float precio[], int cantidad[],int contador){
      
      /* Forma de arreglar problemas de ingreso de datos por consola
      cin.ignore();
      cin.clear();
      fflush(stdin); // fflush limpia el buffer de entrada (teclado)
     */
      
      cout<<"Ingrese el nombre del producto: "; 
      getline(cin,nombre[contador]); //nueva forma de ingresar datos por consola solo para STRING
      
      cout<<"Ingrese el codigo del producto: ";
      cin>>codigo[contador];
      
      cout<<"Ingrese el precio del producto: ";
      cin>>precio[contador];
      
      cout<<"Ingrese la cantidad del producto: ";
      cin>>cantidad[contador];
}

void mostrarDatosProducto(string nombre[],int codigo[], float precio[], int cantidad[], int contador){
      cout<<"\n";
      for(int i=0; i<contador; i++){
   
         cout<<"Nombre: "<<nombre[i]<<" -- ";
         cout<<"Codigo: "<<codigo[i]<<" -- ";
         cout<<"Precio: "<<precio[i]<<" -- ";
         cout<<"Cantidad: "<<cantidad[i]<<" -- ";
         cout<<endl;
      }
}


void actualizarDatosProducto(int codigo[], float precio[], int cantidad[],int contador){
   
   int opcion,codigoProducto;

   cout<<"\nIngrese el codigo del producto que desea actualizar: ";
   cin>>codigoProducto;

   cout<<"¿Que quiere actualizar?";
   cout<<"\n1. Precio"<<endl<<"2. Cantidad"<<endl;
   
   cout<<"Ingrese una opcion: ";
   cin>>opcion;

   cin.ignore();
   cin.clear();
   fflush(stdin);

// | productos |  precio | cantidad |
// | producto 1 |  1 | 3 |   posicion 0   23
// | producto 2 |  2 | 10 |  posicion 1  22
// | producto 3 | 5 | 15 |   posicion 2  25
// | producto 4 |  10 | 20 |  posicion 3  41
 
 //codigo ingresado 41

   for(int i=0; i<contador; i++){
      if(codigo[i]==codigoProducto){

         switch(opcion){
            case 1:
               cout<<"Ingrese el nuevo precio: ";
               cin>>precio[i];
               break;
            case 2:
               cout<<"Ingrese la nueva cantidad: ";
               cin>>cantidad[i];
               break;
         }
      } 
   }
}

void buscarProductoPorCodigo(string nombres[],int codigos[],float precios[],int cantidades[],int contador){
   int codigoProducto;
   
   cout<<"\nIngrese el codigo del producto que desea buscar: ";
   cin>>codigoProducto;
   
   cout<<"\n";
   
   for(int i=0; i<contador; i++){
      if(codigos[i]==codigoProducto){
         cout<<"Nombre: "<<nombres[i]<<" -- ";
         cout<<"Codigo: "<<codigos[i]<<" -- ";
         cout<<"Precio: "<<precios[i]<<" -- ";
         cout<<"Cantidad: "<<cantidades[i]<<" -- ";
         cout<<endl;
      }
   }
}

int calcularValorTotal_Inventario(float precios[],int contador){
   float valorTotal=0;

   for(int i=0; i<contador; i++){
      valorTotal+=precios[i];
   }

   return valorTotal;
}
