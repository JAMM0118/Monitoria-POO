#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int filas,columnas;

    cout << "Ingrese el numero de filas: ";
    cin >> filas;

    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    //creacion de matriz
    string matriz[filas][columnas] = { "0" };
    cout<<"\n";
   
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            
            cout<<"Digite lo que quiera: ";
            cin>>matriz[i][j];
        }
    }
    cout<<"\n";

    
    //imprimir matriz
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout <<setw(10)<< matriz[i][j] << "   ";
        }
        cout << endl;
    }




    return 0;
}