#include "PresupuestoViaticos.h"

PresupuestoViaticos::PresupuestoViaticos(){}

PresupuestoViaticos::~PresupuestoViaticos(){}


void PresupuestoViaticos :: mostrarDistancias(){
      distancias[0][0] = "Distancia(Km)";



    for(int i=1;i<5;i++){
        distancias[0][i] = arreglo[i-1];
        distancias[i][0] = arreglo[i-1];
    }

    for(int i=0;i<5;i++){
        for(int j=0; j<5;j++){
            cout<<setw(15)<<distancias[i][j]<<" ";
        }
        cout<<"\n";
    }

}

void PresupuestoViaticos :: mostrarPrecioViaticos(){
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


void PresupuestoViaticos :: mostrarCostoViaticos(){
    for(int i=0;i<5;i++){
        for(int j=0; j<5;j++){
            cout<<setw(15)<<matrizViaticos[i][j]<<" ";
        }
        cout<<"\n";
    }

}


void PresupuestoViaticos :: pedirDistancias(){
    int contador = 2;
    int aux = 3;
    mostrarDistancias();

    for(int i= 1; i<5;i++){

        cout<<"\n\n";
        if(contador == 5){
            contador = aux;
            aux++;
        }

        for(int j=1;j<5;j++){

            if (i == j){
                distancias[i][j] = "0";
            }
            else{

                if(contador <5){
                    cout<<"Digite la distancia entre "<<distancias[i][0]<<" y "<<distancias[0][contador]<<": ";
                    cin>>distancias[i][contador];
                    distancias[contador][i] = distancias[i][contador];
                    contador++;
                }
            }
        }
        system("cls");
        mostrarDistancias();

    }
}


void PresupuestoViaticos :: calcularCostoViaticos(string matrizConPresupuesto[5][5]){
    matrizConPresupuesto[0][0] = "Valor (Km)";
    for(int i=1; i<5;i++ ){
        for(int j=1; j<5;j++){
            matrizConPresupuesto[i][j] = matrizViaticos[i][j];

            if( (stoi(matrizViaticos[i][j]) >= 301) &&  (stoi(matrizViaticos[i][j]) <= 600)){

                //matrizConPresupuesto[i][j] = to_string(getCostos1());
                costosTotales += getCostos1();
                if(j==1){
                    costoBogota += getCostos1();
                }
                if(j==2){
                    costoMedellin += getCostos1();
                }
            }

            if( (stoi(matrizViaticos[i][j]) >= 601) &&  (stoi(matrizViaticos[i][j]) <= 900)){
                //matrizConPresupuesto[i][j] =to_string( getCostos2());
                costosTotales += getCostos2();
                if(j==1){
                    costoBogota += getCostos2();
                }
                if(j==2){
                    costoMedellin += getCostos2();
                }
            }

            if( (stoi(matrizViaticos[i][j]) >= 901) ){
                //matrizConPresupuesto[i][j] = to_string(getCostos3());
                costosTotales += getCostos3();
                if(j==1){
                    costoBogota += getCostos3();
                }
                if(j==2){
                    costoMedellin +=getCostos3();
                }
            }
        }
    }

    for(int i=1;i<5;i++){
        matrizConPresupuesto[0][i] = arreglo[i-1];
        matrizConPresupuesto[i][0] = arreglo[i-1];
    }

    //mostrarCostoViaticos();

    cout<<"\n\n";
    cout<<"Los costos totales de viaticos para todas las ciudades son: "<<costosTotales<<"\n\n";
    cout<<"Los costos totales de viaticos para Bogota son: "<<costoBogota<<"\n\n";
    cout<<"Los costos totales de viaticos para Medellin son: "<<costoMedellin<<"\n\n";

}


void PresupuestoViaticos :: setCostos(int costo1, int costo2, int costo3,string matriz[5][5]){
    costos[0] = costo1;
    costos[1] = costo2;
    costos[2] = costo3;
    calcularCostoViaticos(matriz);
}


int PresupuestoViaticos :: getCostos1(){
    return costos[0];
}

int PresupuestoViaticos :: getCostos2(){
    return costos[1];
}
int PresupuestoViaticos :: getCostos3(){
    return costos[2];
}
