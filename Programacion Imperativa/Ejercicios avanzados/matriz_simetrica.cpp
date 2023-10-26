/* Como hacer una matriz simetrica
            j= 1       ==           i=2
i=2    | 1 | 2  | 3 |      j=1   | 1 | 2  | 3 |
       | 2 | 2  | 3 |  ->        | 2 | 2  | 3 |
       | 3 | 3  | 2 |            | 3 | 3  | 2 |

*/

#include <iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int matriz[100][100], filas, columnas,contador=0;
    bool simetrica = false;

    cout<<"Ingrese el numero de filas: ";
    cin>>filas;
    cout<<"Ingrese el numero de columnas: ";
    cin>>columnas;

    for(int i=0 ; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"Ingrese el valor de la posicion ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }

    if(filas == columnas){
        for(int i=0 ; i<filas; i++){
            for(int j=0; j<columnas; j++){
                if(matriz[i][j] == matriz[j][i]){
                    simetrica = true;
                    contador++;
                }
                else{
                    simetrica = false;
                }
            }
            cout<<"\n";
        }
    }

    cout<<"Matriz original: "<<endl;
    for(int i=0 ; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\nMatriz traspuesta: "<<endl;
    for(int i=0 ; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<matriz[j][i]<<" ";
        }
        cout<<"\n";
    }

    if(simetrica == true && contador == filas*columnas){
        cout<<"Las matrices son iguales por lo tanto la original es simetrica"<<endl;
    }else{
        cout<<"Las matrices no son iguales por lo tanto la original no es simetrica"<<endl;
    }

    system("pause");

    return 0;
}