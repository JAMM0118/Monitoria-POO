/*En un arreglo unidimensional se ha almacenado el número total de toneladas de cereales cosechadas
 durante cada mes del año anterior. Construya un algoritmo que proporcione la siguiente información:

a. El promedio anual de toneladas cosechadas
b. ¿Cuántos meses tuvieron una cosecha superior al promedio anual?
c. ¿Cuántos meses tuvieron una cosecha inferior al promedio anual?
d. ¿Cuál fue el mes en el que se produjeron mayor número de toneladas?

*/

#include<iostream>
using namespace std;

void pedirDatos(float cosechas[], float mayor, int mes, float sumaToneladas, float promedio,
 int mayorMesPromedio, int menorMesPromedio);
void calcular(float cosechas[], float promedio, float sumaToneladas, int mayorMesPromedio, int menorMesPromedio,
int mes, float mayor);
void imprimir(float promedio, int mayorMesPromedio, int menorMesPromedio, int mes ,float mayor);



int main(){

    float cosechas[12], sumaToneladas=0 , mayor =0,promedio;
    int mes, mayorMesPromedio=0, menorMesPromedio=0;


    pedirDatos(cosechas, mayor,mes , sumaToneladas, promedio, mayorMesPromedio, menorMesPromedio);

    return 0;
}

void pedirDatos(float cosechas[], float mayor, int mes, float sumaToneladas,float promedio,
 int mayorMesPromedio, int menorMesPromedio){

    for(int i = 0; i < 12; i++){
        cout<<"Ingrese la cantidad de toneladas del mes "<<i+1<<": ";
        cin>>cosechas[i];

        if(cosechas[i] > mayor){
            mayor = cosechas[i];
            mes = i+1;
        }
        sumaToneladas += cosechas[i];
    }
     cout<<"\n"<<endl;
    
    for(int i=0; i<12; i++){
        cout<<cosechas[i]<<" | ";
    }
    cout<<"\n"<<endl;
    
    calcular(cosechas, promedio, sumaToneladas, mayorMesPromedio, menorMesPromedio,mes,mayor);
    
}

void calcular(float cosechas[], float promedio, float sumaToneladas, int mayorMesPromedio, int menorMesPromedio, int mes, float mayor){
    promedio = sumaToneladas / 12;
    for(int i=0; i<12; i++){
        if(cosechas[i] > promedio){
            mayorMesPromedio++;
        }else{
            menorMesPromedio+=1;
        }
    }
    imprimir(promedio, mayorMesPromedio, menorMesPromedio, mes ,mayor);
}

void imprimir(float promedio, int mayorMesPromedio, int menorMesPromedio, int mes ,float mayor){
    cout<<"El promedio anual de toneladas cosechadas es: "<<promedio<<endl;
    cout<<"La cantidad de meses que tuvieron una cosecha superior al promedio anual fueron: "<<mayorMesPromedio<<endl;
    cout<<"La cantidad de meses que tuvieron una cosecha inferior al promedio anual fueron: "<<menorMesPromedio<<endl;
    cout<<"El mes en el que se produjeron mayor numero de toneladas fue el mes "<<mes<<" con "<<mayor<<" toneladas"<<endl;

}