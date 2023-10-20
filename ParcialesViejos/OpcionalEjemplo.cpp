#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

void menu(string matrizHabitaciones[5][5],string cedulas[100]);
void mostrarHabitaciones(string matrizHabitaciones[5][5]);
void asignarHabitacion(string matrizHabitaciones[5][5],string cedulas[100]);
void actualizarHabitaciones(string matrizHabitaciones[5][5],int piso, int numeroHabitacion,string cedulas[100]);

int numeroClientes = 0;


int main(){
    string habitaciones[5][5];
    string cedulas[100];
    

    menu(habitaciones,cedulas);

    return 0;
}


void menu(string matrizHabitaciones[5][5],string cedulas[100]){
    system("cls");
    mostrarHabitaciones(matrizHabitaciones);
    int opcion;
    cout<<"\n\n\t------------Bienvenido al hotel-----------"<<"\n\n";

    cout<<"1.Asignar Habitacion"<<endl;
    cout<<"2.Consultar Asignacion"<<endl;
    cout<<"3.Desasignar Habitacion"<<endl;
    cout<<"4.Consultar Recaudo"<<endl;
    cout<<"5.Finalizar Programa"<<"\n\n";

    cout<<"Seleccione una opcion: ";
    cin>>opcion;
    switch (opcion){
        case 1: asignarHabitacion(matrizHabitaciones,cedulas); break;
        case 2: break;
        case 3: break;
        case 4: break;
        case 5: exit(0); break;
    
    }
}

void mostrarHabitaciones(string matrizHabitaciones[5][5]){

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            if(j == 0 && i>0){
                matrizHabitaciones[i][j] = "Piso " + to_string(5-i);
            
            }
            
            if(i==0 && j>0){
                matrizHabitaciones[i][j] = to_string(j);
            }


            if(i > 0 && j>0 && matrizHabitaciones[i][j] != "Ocupada"){
                matrizHabitaciones[i][j] = "D";
            }

           cout<<setw(10)<<matrizHabitaciones[i][j]<<" ";
        }
        cout<<'\n';
    }
}


void asignarHabitacion(string matriz[5][5],string cedulas[100]){
    int piso, numeroHabitacion;


    cout<<"\n\n\t------------Asignar Habitacion-----------"<<"\n\n";
    
    cout<<"Ingrese su numero de cedula: ";
    cin>>cedulas[numeroClientes];
    numeroClientes++;

    cout<<"Ingrese el numero de piso: ";
    cin>>piso;
    
    cout<<"Ingrese el numero de habitacion: ";
    cin>>numeroHabitacion;

    actualizarHabitaciones(matriz,piso,numeroHabitacion,cedulas);

}


void actualizarHabitaciones(string matrizHabitaciones[5][5],int piso, int numeroHabitacion,string cedulas[100]){
    
    if(numeroClientes >0){
        matrizHabitaciones[5-piso][numeroHabitacion] = "Ocupada";
        menu(matrizHabitaciones,cedulas);
    }
    
}
