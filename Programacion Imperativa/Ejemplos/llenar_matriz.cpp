#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;

int main(){
    int filas,columnas,aleatorio;

    cout << "Ingrese el numero de filas: ";
    cin >> filas;

    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    //creacion de matriz
    int matriz[filas][columnas] = { 0 };

    srand(time(NULL));

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            aleatorio = 1 + rand() % (200); //genera un numero aleatorio entre 1 y 200
            matriz[i][j] = aleatorio;
        }
    }


    //imprimir matriz
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout <<setw(5)<< matriz[i][j] << "   ";
        }
        cout << endl;
    }




    return 0;
}