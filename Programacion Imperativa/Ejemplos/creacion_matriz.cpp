#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    //creacion de matriz
    int matriz[3][3] = { 0 };
    
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;
    
    //imprimir matriz
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << setw(10)<<matriz[i][j] << "   ";
        }
        cout << endl;
    }
    /*
                    0    1     2       columnas    
    filas     0  |  1  | 2  |  3  | 
              1  |  4  | 5  |  6  | 
              2  |  7  | 8  |  9  | 

    
    
    */
    



    return 0;
}