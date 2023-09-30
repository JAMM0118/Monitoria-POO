#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;


void mostrarMatriz(float matriz[][100],int filas, int columnas){
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<setw(10)<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main(){

 float matriz[100][100];
    int filas,columnas;
    int i=0,j=0;
    cout<<"Digite el numero de filas: "; cin>>filas;
    cout<<"Digite el numero de columnas: "; cin>>columnas;

    while(i<filas){
        mostrarMatriz(matriz,filas,columnas);
        cout<<"Digite un dato: ";
        cin>>matriz[i][j];
        j++;
        if(j==columnas){
            j=0;
            i++;
        }
    system("cls");


}

return 0;
}