/**
 * Crear la matriz de distancias entre ciudades 
y solicitar los datos de las distancias entre 
ciudades capitales por teclado, visualizar la 
matriz con ss respectivos encabezados y 
filas como se mostro anteriormente.             -> 1.0  


Calcular los costos de viáticos, y crear y 
visualizar la matriz de costos, con sus 
respectivos encabezados.                  - >2.5


Calcular y visualizar la sumatoria de los 
costos de la matriz de costos de viáticos. 
                                            -> 1.0 

Calcular y visualizar la sumatoria de los 
costos de viáticos de las siguientes ciudades 
de Bogotá, y Medellín.
                            -> 0.5
 * 
 * **/


#include<iostream>
#include<iomanip>
#include<stdlib.h>   
using namespace std;


void pedirDistancias(string matriz[5][5]);
void mostrarDistancias(string matriz[5][5]);
void mostrarPrecioViaticos(string matriz[4][2]);
void calcularCostoViaticos(string matriz[5][5]);
void mostrarCostoViaticos(string matriz[5][5]);


int main(){
    string matrizDistancias[5][5];
    string matrizViaticos[4][2];

    pedirDistancias(matrizDistancias);
    cout<<"\n\n";
    mostrarPrecioViaticos(matrizViaticos);
    cout<<"\n\n";
    calcularCostoViaticos(matrizDistancias);


    return 0;
}


void pedirDistancias(string matriz[5][5]){

    int contador = 2;
    int aux = 3;
    mostrarDistancias(matriz);
    
    for(int i= 1; i<5;i++){
        
        cout<<"\n\n";
        if(contador == 5){
            contador = aux;
            aux++;          
        }

        for(int j=1;j<5;j++){

            if (i == j){
                matriz[i][j] = "0";
            }
            else{

                if(contador <5){
                    cout<<"Digite la distancia entre "<<matriz[i][0]<<" y "<<matriz[0][contador]<<": ";
                    cin>>matriz[i][contador];
                    matriz[contador][i] = matriz[i][contador];
                    contador++;
                }  
            }
        }
        system("cls");
        mostrarDistancias(matriz);
        
    }

}

void mostrarDistancias(string matriz[5][5]){
     /*| Distancia    | Bogota | Medellin | Cali | Barranquilla |
       | Bogota       |    0   |    200   |  300 |    120       |
       | Medellin     |   200  |      0   |  700 |    1200      |
       | Cali         |   300  |    700   |   0  |    940       |
       | Barranquilla |    120 |    1200  |  940 |       0      | 
    
    
    */
     
    matriz[0][0] = "Distancia(Km)";
    

    string arreglo[] = {"Bogota", "Medellin", "Cali", "Barranquilla"};

    for(int i=1;i<5;i++){
        matriz[0][i] = arreglo[i-1];
        matriz[i][0] = arreglo[i-1];
    }

    for(int i=0;i<5;i++){
        for(int j=0; j<5;j++){
            cout<<setw(15)<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }

}

void mostrarPrecioViaticos(string matrizViaticos[4][2]){

    matrizViaticos[0][0] = "Rango (Km)";
    matrizViaticos[0][1] = "Precio Viaticos";
    matrizViaticos[1][0] = "301-600";
    matrizViaticos[1][1] = "200.000";
    matrizViaticos[2][0] = "601 - 900";
    matrizViaticos[2][1] = "400.000";
    matrizViaticos[3][0] = "901 >";
    matrizViaticos[3][1] = "800.000";

    for(int i=0; i<4;i++){
        for(int j=0;j<2;j++){
            cout<<setw(10)<<matrizViaticos[i][j]<<" ";
        }
        cout<<"\n";
    }

}


void calcularCostoViaticos(string matrizViaticos[5][5]){
    int costos[] = {200000,400000,800000};
    string matriz2[5][5];
    string arreglo[] = {"Bogota", "Medellin", "Cali", "Barranquilla"};
    int costosTotales = 0;
    int costoBogota = 0;
    int costoMedellin = 0;

    matriz2[0][0] = "Valor(Km)";
    
   
    for(int i=1; i<5;i++ ){
        for(int j=1; j<5;j++){
            matriz2[i][j] = matrizViaticos[i][j];

            if( (stoi(matrizViaticos[i][j]) >= 301) &&  (stoi(matrizViaticos[i][j]) <= 600)){
                matriz2[i][j] = "200.000";
                costosTotales += costos[0];
                if(j==1){
                    costoBogota += costos[0];
                }
                if(j==2){
                    costoMedellin += costos[0];
                }
            }

            if( (stoi(matrizViaticos[i][j]) >= 601) &&  (stoi(matrizViaticos[i][j]) <= 900)){
                matriz2[i][j] = "400.000";
                costosTotales += costos[1];
                if(j==1){
                    costoBogota += costos[1];
                }
                if(j==2){
                    costoMedellin += costos[1];
                }
            }
            
            if( (stoi(matrizViaticos[i][j]) >= 901) ){
                matriz2[i][j] = "800.000";
                costosTotales += costos[2];
                if(j==1){
                    costoBogota += costos[2];
                }
                if(j==2){
                    costoMedellin += costos[2];
                }   
            }
        }
    }

    for(int i=1;i<5;i++){
        matriz2[0][i] = arreglo[i-1];
        matriz2[i][0] = arreglo[i-1];
    }

    mostrarCostoViaticos(matriz2);

    cout<<"\n\n";
    cout<<"Los costos totales de viaticos para todas las ciudades son: "<<costosTotales<<"\n\n";
    cout<<"Los costos totales de viaticos para Bogota son: "<<costoBogota<<"\n\n";
    cout<<"Los costos totales de viaticos para Medellin son: "<<costoMedellin<<"\n\n";


}

void mostrarCostoViaticos(string matrizViaticos[5][5]){
      for(int i=0;i<5;i++){
        for(int j=0; j<5;j++){
            cout<<setw(15)<<matrizViaticos[i][j]<<" ";
        }
        cout<<"\n";
    }
}
