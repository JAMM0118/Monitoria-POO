/***
 * Llenar una matriz A[ ][ ] de tipo char de tamaño n x m, donde n y m son ingresados por el usuario y deben ser impares,
 *  de tal forma que al imprimir A[ ][ ] se visualice por pantalla una pirámide rellena.
Por ejemplo; suponga que n = 3 y m = 5, entonces

          |   |   |  * |   |   |  
          |   | * |  * | * |   |
          | * | * |  * | * | * |
     | *  | * | * |  * | * | * | * |
  |* | *  | * | * |  * | * | * | * | *| 

*/



#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n,m;
    
    cout<<"Ingrese el numero de filas: ";
    cin>>n;

    cout<<"Ingrese el numero de columnas: ";
    cin>>m;

    char matriz[n][m];
    int aux = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matriz[i][j] = '*';
            
            if((i == aux) && (j<(m/2)-aux) || (i == aux) && (j>(m/2)+aux)){
                matriz[i][j] = ' ';  
            }  
        }

        aux++;
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<setw(3)<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}