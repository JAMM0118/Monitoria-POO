#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

void menu(string matrizHabitaciones[5][5],string cedulas[100],string habitacionesOcupadas[100]);
void mostrarHabitaciones(string matrizHabitaciones[5][5]);
void asignarHabitacion(string matrizHabitaciones[5][5],string cedulas[100],string habitacionesOcupadas[100]);
void actualizarHabitaciones(string matrizHabitaciones[5][5],int piso, int numeroHabitacion,string cedulas[100]);
void consultarAsignacion(string matrizHabitaciones[5][5],string cedulas[100],string habitacionesOcupadas[100]);
void desasignarHabitacion(string matrizHabitaciones[5][5],string cedulas[100],string habitacionesOcupadas[100]);
void imprimirRecaudoTotal();

int numeroClientes = 0;
int precios[]= {32000,43000,52000,65000};
int recaudoTotal = 0;


int main(){
    string habitaciones[5][5];
    string cedulas[100];
    string habitacionesOcupadas[100];
    
    while(true){
        menu(habitaciones,cedulas,habitacionesOcupadas);
    }
    
    return 0;
}


void menu(string matrizHabitaciones[5][5],string cedulas[100],string habitacionesOcupadas[100]){
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
        case 1: asignarHabitacion(matrizHabitaciones,cedulas,habitacionesOcupadas); break;
        case 2: consultarAsignacion(matrizHabitaciones,cedulas,habitacionesOcupadas); break;
        case 3: desasignarHabitacion(matrizHabitaciones,cedulas,habitacionesOcupadas); break;
        case 4: imprimirRecaudoTotal(); break;
        case 5: exit(0); break;
    
    }
}

void mostrarHabitaciones(string matrizHabitaciones[5][5]){
    /**
     * 
             | 1 |  2 | 3 | 4 |     
    | Piso 4 | D |  D | D | D |
    | Piso 3 | D |  D | D | D |
    | Piso 2 | D |  D | D | D | 
    | Piso 1 | D |  D | D | D | 
  *
  
  */

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


void asignarHabitacion(string matriz[5][5],string cedulas[100],string habitacionesOcupadas[100]){
    int piso, numeroHabitacion;
    string cedula;


    cout<<"\n\n\t------------Asignar Habitacion-----------"<<"\n\n";
    
    cout<<"Ingrese su numero de cedula: ";
    cin>>cedula;

    cout<<"Ingrese el numero de piso: ";
    cin>>piso;
    
    cout<<"Ingrese el numero de habitacion: ";
    cin>>numeroHabitacion;

    if(matriz[5-piso][numeroHabitacion] != "D"){
        
        cout<<"\nLa habitacion ya esta ocupada"<<"\n\n";
        system("pause");
        
    }else{
        cedulas[numeroClientes] = cedula;
        habitacionesOcupadas[numeroClientes] =  to_string(piso) + to_string(numeroHabitacion);
        numeroClientes++;
        recaudoTotal += precios[piso-1];
        actualizarHabitaciones(matriz,piso,numeroHabitacion,cedulas);

    }

}


void actualizarHabitaciones(string matrizHabitaciones[5][5],int piso, int numeroHabitacion,string cedulas[100]){
    
    if(numeroClientes >0){
        matrizHabitaciones[5-piso][numeroHabitacion] = "Ocupada";
        
    }
    
    cout<<"\n\nLa habitacion ha sido asignada correctamente"<<"\n\n";
}



void consultarAsignacion(string matrizHabitaciones[5][5],string cedulas[100],string habitacionesOcupadas[100]){
    string cedula;
    bool bandera = false;
    
    cout<<"\n\n\t------------Consultar Asignacion-----------"<<"\n\n";
    
    cout<<"Digite la cedula a consultar: ";
    cin>>cedula;

    for(int i = 0; i < numeroClientes; i++){
        if(cedulas[i] == cedula){
            bandera = true;
            cout<<"\n\nLa cedula "<<cedula<<" esta asignada al Piso "<<habitacionesOcupadas[i][0]<<" habitacion "<<habitacionesOcupadas[i][1]<<"\n\n";
            system("pause");
            break;
        }
    }

    if(bandera == false){
        cout<<"\n\nLa cedula "<<cedula<<" no esta asignada a ninguna habitacion"<<"\n\n";
        system("pause");
    }

}

void desasignarHabitacion(string matrizHabitaciones[5][5],string cedulas[100],string habitacionesOcupadas[100]){
    string cedula;
    
    cout<<"\n\n\t------------Desasignar Habitacion-----------"<<"\n\n";

    cout<<"Digite la cedula del cliente a desasignar: ";
    cin>>cedula;

    // variableDeTipoChar = '1'
    //Como pasar de un char a un int  variableDeTipoChar - '0' = 1 -> int

    for(int i=0 ;i<numeroClientes; i++){
        if(cedulas[i]== cedula){
            int piso = habitacionesOcupadas[i][0]-'0' ;
            int numeroHabitacion = habitacionesOcupadas[i][1]-'0';

            
            matrizHabitaciones[5-(piso)][numeroHabitacion] = "D";
            cedulas[i] = "";
            habitacionesOcupadas[i] = "";
            
            if(piso == 1){
                cout<<"\n\nEl precio a pagar por la habitacion es: "<<precios[0]<<"\n";
            }
            if(piso == 2){
                cout<<"\n\nEl precio a pagar por la habitacion es: "<<precios[1]<<"\n";
            }
            if(piso == 3){
                cout<<"\n\nEl precio a pagar por la habitacion es: "<<precios[2]<<"\n";
            }
            if(piso == 4){
                cout<<"\n\nEl precio a pagar por la habitacion es: "<<precios[3]<<"\n";
            }

            cout<<"\n\nLa habitacion ha sido desasignada correctamente"<<"\n\n";
            system("pause");
            break;

        }
    }
}

void imprimirRecaudoTotal(){
    cout<<"\n\nEl recaudo total del hotel hasta el momento es de: "<<recaudoTotal<<"\n\n";
    system("pause");
}