/*Programa donde se registran en vivo las votaciones de 4 candidatos a la gobernacion 
en los muncipios ROLDANILLO ,TULUA, ZARZAL , BUGA , CALI, CARTAGO, YUMBO
        JUAN - PEDRO  - MANUEL

El programa debe mostrar en pantalla el nombre del candidato y el numero de votos que lleva cada uno
                           0           1  2   3   4   N..       columnas

        filas     0     | #          | Juan | Pedro | 0 | 0 |
                  1     | TULUA      | 0| 0 | 0 | 0 |
                  2     | ROLDANILLO | 0| 0 |0  |  0 |
                  3     | ZARZAL     | 0| 0 |0  |  0 |
                  4     | BUGA       | 0| 0 |0  |   0 |
                  5     | CALI       | 0| 0 |0  |  0  |
                  6     | CARTAGO    | 0| 0 |0  | 0 |
                  7     | YUMBO      | 0| 0 |0  |  0 |

*/

#include <iostream>
#include <stdlib.h>
#include<iomanip>
using namespace std;

void mostrarVotos(string votaciones[8][100],int cantidadCandidatos);

int main(){
    string votaciones[8][100] = { " " };
    int cantidadCandidatos, votosGanador =0;
    int votos[100] = {0};
    int ganador =0;

    cout<<"Digite la cantidad de cantidad cantidatos: ";
    cin>>cantidadCandidatos;

    for(int j=1; j<cantidadCandidatos+1; j++){
        cout<<"Digite el nombre del candidato # "<<j<<" : ";
        cin>>votaciones[0][j];
    }

    for(int i=1; i<cantidadCandidatos+1; i++){
        for(int j=1; j<8; j++){
            mostrarVotos(votaciones,cantidadCandidatos);
            
            cout<<"Digite el numero de votos del candidato "<<votaciones[0][i]<<" en el municipio "<<votaciones[j][0]<<" : ";
            cin>>votaciones[j][i];
            votos[i-1] += stoi(votaciones[j][i]);

            system("cls");
        }
    }
    mostrarVotos(votaciones,cantidadCandidatos);

    for(int i=1; i<cantidadCandidatos+1; i++){
        cout<<"El candidato "<<votaciones[0][i]<<" tiene "<<votos[i-1]<<" votos"<<endl;
        if(votos[i-1] > votosGanador){
            votosGanador = votos[i-1];
            ganador = i;
        }
    }

    cout<<votaciones[0][ganador]<<" es el candidato ganador con "<<votosGanador<<" votos "<<endl;

    return 0;
}


void mostrarVotos(string votaciones[8][100],int cantidadCandidatos){
    string municipios[7] = {"TULUA","ROLDANILLO","ZARZAL","BUGA","CALI","CARTAGO","YUMBO"};
    for(int i=0; i<7;i++){
        votaciones[i+1][0] = municipios[i];
    }    

    for(int i=0; i<8; i++){
        for(int j=0; j<cantidadCandidatos+1; j++){
            cout<<setw(10)<<votaciones[i][j]<<" ";
        }
        cout<<"\n";
    }
}