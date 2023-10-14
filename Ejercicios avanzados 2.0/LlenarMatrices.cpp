/**
 * Llenar una matriz A[ ][ ] de tipo char de tamaño n x m, donde n y m son ingresados por el usuario de tal forma que al imprimir A[ ][ ] se visualice por pantalla un cuadrado sin relleno.
Por ejemplo; suponga que n = 6 y m = 5, entonces
    | * |  * | * | * | * |
    | * |  * |   | * | * |
    | * |  * |   | * | * |
    | * |  * |   | * | * |
    | * |  * |   | * | * |
    | * |  * | * | * | * |


    int/int = int
    3/2 = 1.5 = 1 
**/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    char matriz[100][100];
    int n,m;
    
    cout<<"Ingrese el numero de filas: ";
    cin>>n;

    cout<<"Ingrese el numero de columnas: ";
    cin>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            matriz[i][j] = '*';
            if((j==m/2 && i!= 0 && i!=n-1) ){
                matriz[i][j] = ' ';
            }

        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<setw(3)<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}