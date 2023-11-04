#include "NotasEstudiantes.h"

NotasEstudiantes::NotasEstudiantes(){}

NotasEstudiantes::~NotasEstudiantes(){}

void NotasEstudiantes :: menu(){

    do{
        cout<<"\t\tSistema de Calificaciones"<<endl;
        cout<<"1. Ingresar cantidad de estudiantes"<<endl;
        cout<<"2. Ingresar notas de estudiantes"<<endl;
        cout<<"3. Calcular promedio general"<<endl;
        cout<<"4. Calcular nota mas alta y nota mas baja"<<endl;
        cout<<"5. Buscar nota de estudiante"<<endl;
        cout<<"6. Salir"<<endl;

        cout<<"Ingrese una opcion: ";
        cin>>opcion;

        if(validarOpcion(opcion) == true){
        switch(stoi(opcion)){
            case 1: pedirCantidadEstudiantes(); break;
            case 2: pedirNotasEstudiantes(); break;
            case 3: calcularPromedio(); break;
            case 4: calcularNotaMasAlta_NotaMasBaja();break;
            case 5: buscarNotaEstudiante();break;
            case 6: exit(0); break;
            }
        }
    }while((opcion) != to_string(6) || validarOpcion(opcion) == false);


}
void NotasEstudiantes :: pedirCantidadEstudiantes(){
    cout<<"Digite la cantidad de estudiantes: ";
    cin>>cantidadEstudiantes;

}
void NotasEstudiantes :: pedirNotasEstudiantes(){
    for(int i=0; i<cantidadEstudiantes; i++){
        cout<<"Digite la nota del estudiante #"<<i+1<<": ";
        cin>>notasEstudiantes[i];
    }
}

void NotasEstudiantes :: calcularNotaMasAlta_NotaMasBaja(){
    for(int i=0; i<cantidadEstudiantes; i++){
        if(notasEstudiantes[i] > nota_mas_alta){
            nota_mas_alta = notasEstudiantes[i];
        }
        if(notasEstudiantes[i] < nota_mas_baja){
            nota_mas_baja = notasEstudiantes[i];
        }
    }
    cout<<"\nLa nota mas baja es: "<<nota_mas_baja<<endl;
    cout<<"La nota mas alta es: "<<nota_mas_alta<<endl;
    system("pause");
}

void NotasEstudiantes :: calcularPromedio(){
    for(int i=0; i<cantidadEstudiantes; i++){
        promedio += notasEstudiantes[i];
    }

    cout<<"\nEl promedio del grupo es: "<<
    (promedio/cantidadEstudiantes)<<endl;

    system("pause");
}

void NotasEstudiantes :: buscarNotaEstudiante(){


    cout<<"Ingrese el id del estudiante: ";
    cin>>idEstudiante;

    for(int i=0; i<cantidadEstudiantes; i++){
        if(idEstudiante == (i+1)){
            bandera = true;
            cout<<"La nota del estudiante #"<<idEstudiante<<" es: "<<notasEstudiantes[i]<<endl;
        }
    }
    if(bandera == false){
        cout<<"No se encontro el estudiante"<<endl;
    }
}

bool NotasEstudiantes :: validarOpcion(string opcion){

    // string = hola / tamaño = 4
    // string[0] = h

    if(!isdigit(opcion[0]) || stoi(opcion)<1  || stoi(opcion)>6){
        return false;
    }

    else{
        return true;
    }
}
