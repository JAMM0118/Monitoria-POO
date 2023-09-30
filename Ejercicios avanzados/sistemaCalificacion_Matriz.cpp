/*Sistema de Calificaciones

Escribe un programa en C++ que permita a un profesor registrar las calificaciones de los estudiantes de una clase 
y realizar cálculos sobre estas calificaciones. El programa debe hacer lo siguiente:

1. Pedir al usuario que ingrese el número de estudiantes en la clase.

2. Usar una matriz para almacenar las calificaciones de los estudiantes. 
El tamaño de las filas debe ser igual al número de estudiantes, contando el encabezado.

3. Permitir al usuario ingresar las calificaciones de cada estudiante.

4. Calcular y mostrar el promedio de calificaciones de la clase.

5.Determinar y mostrar la calificación más alta y más baja en la clase.

6. Permitir al usuario buscar la calificación de un estudiante específico por su número de identificación.

Mostrar un mensaje al usuario si la búsqueda no arroja resultados.

Para hacer este ejercicio más interesante, puedes agregar validación de datos 
para asegurarte de que las calificaciones ingresadas estén dentro de un rango válido (por ejemplo, entre 1 y 5)
*/

#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;


int pedirCantidadEstudiantes(int cantidadEstudiantes,int cantidadEstudiantesNuevos);
void pedirNotasEstudiantes(string notasEstudiantes[][3],int cantidadEstudiantes,int estudiantesNuevos);
void calcularPromedio(string notasEstudiantes[][3],float cantidadEstudiantes);
void calcularNotaMasAlta_NotaMasBaja(string notasEstudiantes[][3],int cantidadEstudiantes);
void buscarNotaEstudiante(string notasEstudiantes[][3],int cantidadEstudiantes);
bool validarOpcion(string opcion);
void mostrarCalificaciones(string notasEstudiantes[][3],int cantidadEstudiantes);
int borrarRegistros(string calificaciones[][3],int cantidadEstudiantes);
                        

int main(){

    string calificaciones[100][3];
    int cantidadEstudiantes=0;
    string opcion;
    int cantidadEstudiantesNuevos=0;
    
    do{ 
        mostrarCalificaciones(calificaciones,cantidadEstudiantes);
        cout<<"\n";
        cout<<"\t\tSistema de Calificaciones"<<endl;
        cout<<"1. Ingresar cantidad de estudiantes"<<endl;
        cout<<"2. Ingresar notas de estudiantes"<<endl;
        cout<<"3. Calcular promedio general"<<endl;
        cout<<"4. Calcular nota mas alta y nota mas baja"<<endl;
        cout<<"5. Buscar nota de estudiante"<<endl;
        cout<<"6. Borrar calificaciones"<<endl; 
        cout<<"7. Salir"<<endl;

        cout<<"Ingrese una opcion: ";    
        cin>>opcion;
        
        if(validarOpcion(opcion) == true){
            switch (stoi(opcion)){
                case 1: cout<<"\n";
                        cantidadEstudiantes = pedirCantidadEstudiantes(cantidadEstudiantes,cantidadEstudiantesNuevos);
                        if(cantidadEstudiantes != 0){
                            cantidadEstudiantesNuevos = cantidadEstudiantes - cantidadEstudiantesNuevos;
                        }
                        cout<<"\n"; break;
                
                case 2: cout<<"\n";
                        pedirNotasEstudiantes(calificaciones,cantidadEstudiantes,cantidadEstudiantesNuevos);                        
                        cout<<"\n"; break;
                
                case 3: cout<<"\n";
                        calcularPromedio(calificaciones,cantidadEstudiantes);
                        break;
        
                case 4: cout<<"\n";
                        calcularNotaMasAlta_NotaMasBaja(calificaciones,cantidadEstudiantes); cout<<"\n";break;

                case 5: cout<<"\n";
                        buscarNotaEstudiante(calificaciones,cantidadEstudiantes); cout<<"\n"; break;
                case 6: 
                        cantidadEstudiantes = borrarRegistros(calificaciones,cantidadEstudiantes);
                        cout<<"\nLos registros han sido borrados\n"; break;

                case 7: cout<<"\n";
                        cout<<"Gracias por usar el sistema de calificaciones"<<endl; exit(0); break;
            }
        }else{
            cout<<"\n";
            cout<<"La opcion ingresada no es valida"<<endl;
            cout<<"\n";
        }
    }while((opcion) != to_string(7) || validarOpcion(opcion) == false);
    
    return 0;
}

int pedirCantidadEstudiantes(int cantidadEstudiantes,int cantidadEstudiantesNuevos){
    if(cantidadEstudiantes != 0){
        
        cout<<"Digite la cantidad de estudiantes nuevos a ingresar: ";
        cin>>cantidadEstudiantesNuevos;
        cantidadEstudiantes += cantidadEstudiantesNuevos;

        return cantidadEstudiantes;
    }
    else{
        cout<<"Ingrese la cantidad de estudiantes: ";
        cin>>cantidadEstudiantes;
        return cantidadEstudiantes;
    }
}

void pedirNotasEstudiantes(string notasEstudiantes[][3],int cantidadEstudiantes,int estudiantesNuevos){
    int i=1;
    if(cantidadEstudiantes != 0 && notasEstudiantes[1][1] != ""){
        i = (cantidadEstudiantes+1)-estudiantesNuevos;
    }

    for(i; i<cantidadEstudiantes+1; i++){
       system("cls");
        mostrarCalificaciones(notasEstudiantes,cantidadEstudiantes);
        cout<<"Ingrese la nota del estudiante "<<i<<" : ";
        cin>>notasEstudiantes[i][1];
        notasEstudiantes[i][0] = to_string(i);
        
        if(stof(notasEstudiantes[i][1])<1 || stof(notasEstudiantes[i][1])>5){
            cout<<"La nota ingresada no es valida"<<endl;
            i--;
        }
    }
   
}

void calcularPromedio(string notasEstudiantes[][3],float cantidadEstudiantes){
    float sumaNotas=0;
    for(int i=1; i<cantidadEstudiantes+1; i++){
        sumaNotas += stof(notasEstudiantes[i][1]);
    }
    float promedio = sumaNotas/cantidadEstudiantes;
    // 21.6 / 5.0 = 4.32
    
    // float / int = int
    // float / float = float

   notasEstudiantes[1][2] = to_string(promedio);
                        
}

void calcularNotaMasAlta_NotaMasBaja(string notasEstudiantes[][3],int cantidadEstudiantes){

    float notaMasAlta = stof(notasEstudiantes[1][1]);
    float notaMasBaja = stof(notasEstudiantes[1][1]);

    for(int i=1; i<cantidadEstudiantes+1; i++){

        if(stof(notasEstudiantes[i][1])>notaMasAlta){
            notaMasAlta = stof(notasEstudiantes[i][1]);
        }
        if(stof(notasEstudiantes[i][1])<notaMasBaja){
            notaMasBaja = stof(notasEstudiantes[i][1]);
        }
    }

    cout<<"La nota mas alta es: "<<notaMasAlta<<endl;
    cout<<"La nota mas baja es: "<<notaMasBaja<<endl;
}

void buscarNotaEstudiante(string notasEstudiantes[][3],int cantidadEstudiantes){

    int idEstudiante;
    bool bandera = false;
    cout<<"Ingrese el id del estudiante: ";
    cin>>idEstudiante;

    for(int i=1; i<cantidadEstudiantes+1; i++){
        if(idEstudiante == (i)){
            bandera = true;
            cout<<"La nota del estudiante "<<idEstudiante<<" es: "<<notasEstudiantes[i][1]<<endl;
        }
    }

    if(bandera == false){
        cout<<"No se encontro el estudiante"<<endl;
    }
}

bool validarOpcion(string opcion){

    // string = hola / tamaño = 4 
    // string[0] = h

    if(!isdigit(opcion[0]) || stoi(opcion)<1  || stoi(opcion)>7){
        return false;
    }
        
    else{
        return true;
    }
}


void mostrarCalificaciones(string notasEstudiantes[][3],int cantidadEstudiantes){
    string encabezado[3] = {"Id","Notas","Promedio General"};
    for(int i=0; i<3; i++){
        notasEstudiantes[0][i] = encabezado[i];
    }

    /*  
            0         1       2
        0 | Id  |   Notas | promedio |
        1 |  1   |    4.5  |        |
        2 |  2   |    3.5  |        |
        3 |  3   |    2.5  |        |
        4 |  4   |     3.1  |        |
    
    */
    
    for(int i=0; i<cantidadEstudiantes+1; i++){
        for(int j=0; j<3; j++){
            cout<<setw(10)<<notasEstudiantes[i][j]<<"   ";
        }
        cout<<endl;
    }
    if(cantidadEstudiantes == 0){
        cout<<"\nNo hay estudiantes registrados aun"<<"\n";
    }

}

int borrarRegistros(string calificaciones[][3],int cantidadEstudiantes){
    for(int i=1; i<cantidadEstudiantes+1; i++){
        for(int j=0; j<3; j++){
            calificaciones[i][j] = "";
        }
    }
    cantidadEstudiantes = 0;

    return cantidadEstudiantes;


}