/*
    Como hacer una matriz traspuesta
    | 1 | 2  | 3 |      | 1 | 4  | 7 |
    | 4 | 5  | 6 |  ->  | 2 | 5  | 8 |
    | 7 | 8  | 9 |      | 3 | 6  | 9 |

*/

#include <iostream>
using namespace std;

int main(){
    int matriz[3][3] = { 0 };

    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Ingrese el valor de la posicion ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }

    cout<<"Matriz original: "<<endl;

    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matriz traspuesta: "<<endl;
    
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz[j][i]<<" ";
        }
        cout<<endl;
    }


    return 0 ;
}