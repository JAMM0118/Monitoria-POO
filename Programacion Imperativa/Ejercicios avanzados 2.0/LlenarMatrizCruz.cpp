/**Llenar una matriz A[ ][ ] de tipo char de tamaño n x m, donde n y m son ingresados por el usuario y deben ser impares, 
 * de tal forma que al imprimir A[ ][ ] se visualice por pantalla una cruz.
Por ejemplo; suponga que n = 5 y m = 3, entonces

    |   | * |   |  
    |   | * |   | 
    | * | * | * |
    |   | * |   | 
    |   | * |   |

    5 / 2 = 2.5
    3 / 2 = 1.5

    int/int = int


**/


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
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            matriz[i][j] = ' ';
            if(i==n/2 || j==m/2){
                matriz[i][j] = '*';
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