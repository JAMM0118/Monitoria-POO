/*Sistema de Calificaciones

Escribe un programa en C++ que permita a un profesor registrar las calificaciones de los estudiantes de una clase 
y realizar cálculos sobre estas calificaciones. El programa debe hacer lo siguiente:

1. Pedir al usuario que ingrese el número de estudiantes en la clase.

2. Usar un arreglo para almacenar las calificaciones de los estudiantes. 
El tamaño del arreglo debe ser igual al número de estudiantes.

3. Permitir al usuario ingresar las calificaciones de cada estudiante.

4. Calcular y mostrar el promedio de calificaciones de la clase.

5.Determinar y mostrar la calificación más alta y más baja en la clase.

6. Permitir al usuario buscar la calificación de un estudiante específico por su número de identificación.

Mostrar un mensaje al usuario si la búsqueda no arroja resultados.

Para hacer este ejercicio más interesante, puedes agregar validación de datos 
para asegurarte de que las calificaciones ingresadas estén dentro de un rango válido (por ejemplo, entre 1 y 5)


*/

#include<iostream>

using namespace std;


int pedirCantidadEstudiantes(int cantidadEstudiantes);
void pedirNotasEstudiantes(float notasEstudiantes[],int cantidadEstudiantes);
float calcularPromedio(float notasEstudiantes[],float cantidadEstudiantes,float promedio);
void calcularNotaMasAlta_NotaMasBaja(float notasEstudiantes[],int cantidadEstudiantes);
void buscarNotaEstudiante(float notasEstudiantes[],int cantidadEstudiantes);
bool validarOpcion(string opcion);

int main(){

    float *calificaciones;
    int cantidadEstudiantes;
    string opcion;
    float promedio;    
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
            switch (stoi(opcion)){
                case 1: cout<<"\n";
                        cantidadEstudiantes = pedirCantidadEstudiantes(cantidadEstudiantes);
                        calificaciones = new float[cantidadEstudiantes];
                        cout<<"\n"; break;

                case 2: cout<<"\n";
                        pedirNotasEstudiantes(calificaciones,cantidadEstudiantes);
                        cout<<"\n"; break;

                case 3: cout<<"\n";
                        promedio = calcularPromedio(calificaciones,cantidadEstudiantes,promedio);
                        cout<<"El promedio general del grupo es: "<<promedio<<endl; cout<<"\n"; break;

                case 4: cout<<"\n";
                        calcularNotaMasAlta_NotaMasBaja(calificaciones,cantidadEstudiantes); cout<<"\n";break;

                case 5: cout<<"\n";
                        buscarNotaEstudiante(calificaciones,cantidadEstudiantes); cout<<"\n"; break;

                case 6: cout<<"\n";
                        cout<<"Gracias por usar el sistema de calificaciones"<<endl; exit(0); break;
            }
        }else{
            cout<<"\n";
            cout<<"La opcion ingresada no es valida"<<endl;
            cout<<"\n";
        }


    }while((opcion) != to_string(6) || validarOpcion(opcion) == false);

    
    return 0;
}


int pedirCantidadEstudiantes(int cantidadEstudiantes){
    
    cout<<"Ingrese la cantidad de estudiantes: ";
    cin>>cantidadEstudiantes;

    return cantidadEstudiantes;

}

void pedirNotasEstudiantes(float notasEstudiantes[],int cantidadEstudiantes){
    
    for(int i=0; i<cantidadEstudiantes; i++){
        cout<<"Ingrese la nota del estudiante "<<i+1<<" : ";
        cin>>notasEstudiantes[i];
        
        if(notasEstudiantes[i]<1 || notasEstudiantes[i]>5){
            cout<<"La nota ingresada no es valida"<<endl;
            i--;
        }
    }

}

float calcularPromedio(float notasEstudiantes[],float cantidadEstudiantes,float promedio){
    float sumaNotas=0;
    for(int i=0; i<cantidadEstudiantes; i++){
        sumaNotas += notasEstudiantes[i];
    }
    promedio = sumaNotas/cantidadEstudiantes;
    // 21.6 / 5.0 = 4.32
    
    // float / int = int
    // float / float = float

    return promedio;
}

void calcularNotaMasAlta_NotaMasBaja(float notasEstudiantes[],int cantidadEstudiantes){

    float notaMasAlta = notasEstudiantes[0];
    float notaMasBaja = notasEstudiantes[0];

    for(int i=0; i<cantidadEstudiantes; i++){

        if(notasEstudiantes[i]>notaMasAlta){
            notaMasAlta = notasEstudiantes[i];
        }
        if(notasEstudiantes[i]<notaMasBaja){
            notaMasBaja = notasEstudiantes[i];
        }
    }

    cout<<"La nota mas alta es: "<<notaMasAlta<<endl;
    cout<<"La nota mas baja es: "<<notaMasBaja<<endl;
}

void buscarNotaEstudiante(float notasEstudiantes[],int cantidadEstudiantes){

    int idEstudiante;
    bool bandera = false;
    cout<<"Ingrese el id del estudiante: ";
    cin>>idEstudiante;

    for(int i=0; i<cantidadEstudiantes; i++){
        if(idEstudiante == (i+1)){
            bandera = true;
            cout<<"La nota del estudiante "<<idEstudiante<<" es: "<<notasEstudiantes[i]<<endl;
        }
    }

    if(bandera == false){
        cout<<"No se encontro el estudiante"<<endl;
    }
}

bool validarOpcion(string opcion){

    // string = hola / tamaño = 4 
    // string[0] = h

    if(!isdigit(opcion[0]) || stoi(opcion)<1  || stoi(opcion)>6){
        return false;
    }
        
    else{
        return true;
    }
}