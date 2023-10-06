/*Programa donde se registran en vivo las votaciones de 4 candidatos a la gobernacion 
en los muncipios ROLDANILLO ,TULUA, ZARZAL , BUGA , CALI, CARTAGO, YUMBO
        JUAN - PEDRO  - MANUEL

El programa debe mostrar en pantalla el nombre del candidato y el numero de votos que lleva cada uno
                           0           1  2   3   4   N..       columnas

        filas     0     | #          | Juan | Pedro | 0 | 0 |
                  1     | TULUA      | 0    | 0     | 0 | 0 |
                  2     | ROLDANILLO | 0    | 0     | 0 | 0 |
                  3     | ZARZAL     | 0    | 0     |0  | 0 |
                  4     | BUGA       | 0    | 0     |0  | 0 |
                  5     | CALI       | 0    | 0     |0  |  0|
                  6     | CARTAGO    | 0    | 0     |0  | 0 |
                  7     | YUMBO      | 0    | 0     |0  |  0|

*/

#include <iostream>
#include <stdlib.h>
#include<iomanip>
using namespace std;

void mostrarVotos(string votaciones[8][100],int cantidadCandidatos);
void pedirVotos(string votaciones[8][100],int cantidadCandidatos, int votos[100]);
void reiniciarVotos(string votaciones[8][100],int cantidadCandidatos, int votos[100],int posicionSegundaVuelta1,int posicionSegundaVuelta2);
void determinarGanador(int votos[100],int cantidadCandidatos,int votosGanador,int ganador,string votaciones[8][100]);

int main(){
    string votaciones[8][100] = { " " };
    int cantidadCandidatos, votosGanador =0;
    int votos[100] = {0}, posicionSegundaVuelta1, posicionSegundaVuelta2 ;
    int ganador =0, votosTotales=0;
    bool haySegundaVuelta = false;

    cout<<"Digite la cantidad de cantidad cantidatos: ";
    cin>>cantidadCandidatos;

    for(int j=1; j<cantidadCandidatos+1; j++){
        cout<<"Digite el nombre del candidato # "<<j<<" : ";
        cin>>votaciones[0][j];
    }

    pedirVotos(votaciones,cantidadCandidatos,votos);
    mostrarVotos(votaciones,cantidadCandidatos);
    
    for(int i=0; i<cantidadCandidatos; i++){
              
        /*      a       b     c
            |  70  |  70  | 35  |  
        
            175/2 = 87.5  50% de los votos totales
            a+b > 87.5 = hay sengunda vuelta

        */
        int auxiliarContador=0;
        for(int j=0; j<cantidadCandidatos; j++){  
            if(i != j){
                if(votos[i] + votos[j] > votosTotales/2){
                    if(votos[i] + votos[j] > auxiliarContador){
                        auxiliarContador = votos[i] + votos[j];
                        posicionSegundaVuelta1 = i+1;
                        posicionSegundaVuelta2 = j+1;
                        haySegundaVuelta = true;
                    }
                    
                }    
            }
        } 
    }


    if(haySegundaVuelta == true){
        cout<<"\nHay segunda vuelta"<<endl;
        cout<<"Los candidatos que pasan a segunda vuelta son: "<<votaciones[0][posicionSegundaVuelta1]<<" y "<<votaciones[0][posicionSegundaVuelta2]<<'\n';
        system("pause");
        reiniciarVotos(votaciones,cantidadCandidatos,votos,posicionSegundaVuelta1,posicionSegundaVuelta2);
        pedirVotos(votaciones,2,votos);
        mostrarVotos(votaciones,2);
        determinarGanador(votos,2,votosGanador=0,ganador=0,votaciones);
        
    }else{
        determinarGanador(votos,cantidadCandidatos,votosGanador,ganador,votaciones);
    }
    
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


void pedirVotos(string votaciones[8][100],int cantidadCandidatos, int votos[100]){
    for(int i=1; i<cantidadCandidatos+1; i++){
        for(int j=1; j<8; j++){
            mostrarVotos(votaciones,cantidadCandidatos);
            
            cout<<"Digite el numero de votos del candidato "<<votaciones[0][i]<<" en el municipio "<<votaciones[j][0]<<" : ";
            cin>>votaciones[j][i];
            votos[i-1] += stoi(votaciones[j][i]);

            system("cls");
        }
    }

}

void reiniciarVotos(string votaciones[8][100],int cantidadCandidatos, int votos[100],int posicionSegundaVuelta1,int posicionSegundaVuelta2){
      string candidato1 = votaciones[0][posicionSegundaVuelta1];
      string candidato2 = votaciones[0][posicionSegundaVuelta2];
      
      for(int i=0; i<8; i++){
        for(int j=0; j<cantidadCandidatos+1; j++){
            if(votaciones[i][j] != candidato1 && votaciones[i][j] != candidato2){
                votaciones[i][j] = " ";
            }
        }
    }

    votaciones[0][1] = candidato1;
    votaciones[0][2] = candidato2;

    for(int i=0; i<cantidadCandidatos; i++){
        votos[i] = 0;
    }

}


void determinarGanador(int votos[100],int cantidadCandidatos,int votosGanador,int ganador,string votaciones[8][100]){
    for(int i=0; i<cantidadCandidatos; i++){
        if(votos[i] > votosGanador){
            votosGanador = votos[i];
            ganador = i+1;
        }
    }
    cout<<votaciones[0][ganador]<<" es el candidato ganador con "<<votosGanador<<" votos "<<endl;
}
