#include<iostream>
using namespace std;

//jhon.alejandro.martinez@correounivalle.edu.co

/* Se ingresa por consola la cantidad de estudiantes
    examen 1 , examen 2 , examen 3

    Digite la nota del estudiante #1 en el examen 1: 3
    Digite la nota del estudiante #1 en el examen 2: 5

    estudiantesAprobarontodo; if nota >= 3
    estudiantesAprobaron2; 
    estudiantesAprobaron1;

    los cantidad de estudiantes que aprobaron los 3 examenes fueron 
    los cantidad de estudiantes que aprobaron 2 examenes fueron
    los cantidad de estudiantes que aprobaron 1 examenes fueron

*/

int main(){

    int estudiantes, examen1, examen2, examen3;
    int estudiantesAprobarontodo = 0, estudiantesAprobaron2 = 0, estudiantesAprobaron1 = 0;

    cout<<"Digite la cantidad de estudiantes: "; cin>>estudiantes;
    cout<<"\n";

    for(int i=0; i<estudiantes; i++){

        cout<<"Digite la nota del estudiante #"<<i+1<<" en el examen 1: "; cin>>examen1;
        cout<<"Digite la nota del estudiante #"<<i+1<<" en el examen 2: "; cin>>examen2;
        cout<<"Digite la nota del estudiante #"<<i+1<<" en el examen 3: "; cin>>examen3;

        cout<<"\n";

        if(examen1 >= 3 && examen2 >= 3 && examen3 >= 3){
            estudiantesAprobarontodo++;
        }
        
        else if(examen1 >= 3 && examen2 >= 3 || examen1 >= 3 && examen3 >= 3 || examen2 >= 3 && examen3 >= 3){
            estudiantesAprobaron2++;
        }
        
        else if(examen1 >= 3 || examen2 >= 3 || examen3 >= 3){
            estudiantesAprobaron1++;
        }
    }

    cout<<"Los estudiantes que aprobaron los 3 examenes fueron: "<<estudiantesAprobarontodo<<endl;
    cout<<"Los estudiantes que aprobaron 2 examenes fueron: "<<estudiantesAprobaron2<<endl;
    cout<<"Los estudiantes que aprobaron 1 examenes fueron: "<<estudiantesAprobaron1<<endl;

    return 0;
}