/*En un arreglo unidimensional se almacenan las calificaciones de N alumnos. 
Construya un algoritmo que permita calcular e imprimir lo siguiente:

a. Las calificaciones de los N alumnos.

b. El promedio general del grupo

c. Número de alumnos aprobados y número de alumnos reprobados 
(Si el alumno sacó una calificación menor a 3 se le considera reprobado).

d. Numero de alumnos aprobados y reprobados

e. Número de alumnos cuya calificación fue mayor a 4.5*/

#include <iostream>
using namespace std;

int main(){

    int n, aprobados = 0 , reprobados = 0, mejores_nota = 0;
    float promedio = 0, notasTotales = 0, nota = 0;
    
    cout<<"Ingrese el numero de alumnos: "; cin>>n;
    
    float *calificaciones;
    calificaciones = new float[n];


    for(int i =0; i<n ; i++){
        cout<<"Ingrese la nota del alumno "<<i+1<<": ";
        cin>>nota;

        calificaciones[i] = nota;
        notasTotales += nota;

        if(nota > 4.5){
            mejores_nota++;
        }

        if(nota < 3){
            reprobados++;
        }

        if (nota >= 3){
            aprobados++;
        }
    }

    cout<<"\nLas notas de los alumnos son: "<<endl;
    for(int i =0; i<n ; i++){
        cout<<" | "<<calificaciones[i];
    }
    
    // nan = not a number


    cout<<"\nEl promedio del grupo es: "<<notasTotales/n<<endl;
    cout<<"El numero de alumnos aprobados es: "<<aprobados<<endl;
    cout<<"El numero de alumnos reprobados es: "<<reprobados<<endl;
    cout<<"El numero de alumnos con nota mayor a 4.5 es: "<<mejores_nota<<endl;


    return 0;
}