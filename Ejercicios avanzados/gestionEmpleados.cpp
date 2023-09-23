/*
Ejercicio de Registro de Empleados

Crea un programa en C++ que permita a una empresa llevar un registro de sus empleados  
El programa debe gestionar la información de los empleados, calcular sus salarios y proporcionar estadísticas. 
Debes implementar las siguientes funcionalidades:

1.  Crea cuatro arreglos separados para almacenar la información de los empleados: 
uno para nombres de empleados, uno para números de identificación, uno para salarios por hora 
y otro para horas trabajadas en la semana

2. Permite a los usuarios agregar nuevos empleados al registro proporcionando su nombre, 
número de identificación, salario por hora y horas trabajadas en la semana. 

3. Calcula el salario total de cada empleado multiplicando el salario por hora por las horas trabajadas.
   Muestra el salario total junto con la información del empleado utilizando los datos almacenados en los arreglos.

4. Proporciona estadísticas generales, como el número total de empleados, 
    el salario promedio, el empleado con el salario más alto y el empleado con el salario más bajo. 

5. Proporciona una opción para buscar empleados por su número de identificación y 
mostrar su información utilizando los datos almacenados en los arreglos.

6. Permite al usuario modificar la información de un empleado (nombre, salario por hora, horas trabajadas) 
mediante su número de identificación. 
Permite a los usuarios eliminar un empleado del registro eliminando sus datos de los arreglos.

7. Crea un menú en el que se pueda agregar empleados, ver empleados, calcular salarios, 
ver estadísticas, buscar empleados, modificar empleados, eliminar empleados y salir del programa.

8. Asegúrate de que el programa valide las entradas del usuario, como verificar si el número de identificación es único 
y si las horas trabajadas y el salario por hora son valores válidos.

*/


#include<iostream>

using namespace std;

void agregarEmpleado(string nombres[],string cedula[],float salarioHora[],int  horasTrabajadas[],int contadorEmpleado);
void mostrarEmpleados(string nombres[],string cedula[],float salarioHora[],int  horasTrabajadas[],int contadorEmpleado);
void calcular_Salario_Empleados(string nombres[],string cedula[],float salarioHora[],int  horasTrabajadas[],int contadorEmpleado);
void estadisticasGenerales(string nombres[],float salarioHora[],int  horasTrabajadas[],float contadorEmpleado);
void buscarEmpleado(string nombres[],string cedula[],float salarioHora[],int  horasTrabajadas[],int contadorEmpleado);
void modificarEmpleado(string nombres[],string cedula[],float salarioHora[],int horasTrabajadas[],int contadorEmpleado);

int main(){

    int contadorEmpleado = 0;

    string nombres[100] = { " " };
    string cedula[100] = { " " };
    float salarioHora[100] = { 0 };
    int horasTrabajadas[100] = { 0 };
    int opcion;

    do{
        cout<<"\n";
        cout<<"\tBienvenido al sistema de registro de empleados"<<endl;
        cout<<"1. Agregar un nuevo empleado al registro"<<endl;
        cout<<"2. Ver informacion de todos los empleados"<<endl;
        cout<<"3. Calcular salario de todos los empleados"<<endl;
        cout<<"4. Ver estadisticas"<<endl;
        cout<<"5. Buscar empleado por cedula"<<endl;
        cout<<"6. Modificar informacion de un empleado"<<endl;
        cout<<"7. Eliminar empleado del registro"<<endl;
        cout<<"8. Salir\n"<<endl;

        cout<<"\nIngrese una opcion: ";
        cin>>opcion;

        switch (opcion){
            case 1: agregarEmpleado(nombres,cedula,salarioHora,horasTrabajadas,contadorEmpleado);
                    contadorEmpleado++; break;
            
            case 2: mostrarEmpleados(nombres,cedula,salarioHora,horasTrabajadas,contadorEmpleado);break;
            
            case 3: calcular_Salario_Empleados(nombres,cedula,salarioHora,horasTrabajadas,contadorEmpleado); break;
            
            case 4: estadisticasGenerales(nombres,salarioHora,horasTrabajadas,contadorEmpleado);break;
            
            case 5: buscarEmpleado(nombres,cedula,salarioHora,horasTrabajadas,contadorEmpleado); break;
            
            case 6:  modificarEmpleado(nombres,cedula,salarioHora,horasTrabajadas,contadorEmpleado); break;
            
            case 7: break;
            case 8: exit(0);break;
        
        }

    }while(opcion != 8);


    return 0;
}


void agregarEmpleado(string nombres[],string cedula[],float salarioHora[],int  horasTrabajadas[],int contadorEmpleado){
   
    cout<<"Ingrese el nombre del empleado: ";
    cin>>nombres[contadorEmpleado];

    cout<<"Ingrese la cedula del empleado: ";
    cin>>cedula[contadorEmpleado];
    
    for(int i=0; i<contadorEmpleado;i++){
        while(cedula[contadorEmpleado] == cedula[i]){
            cout<<"\nLa cedula ya existe en el registro"<<endl;
            cout<<"Ingrese la cedula del empleado: ";
            cin>>cedula[contadorEmpleado];
            cout<<"\n";
        }
    }

    cout<<"Ingrese el salario por hora del empleado: ";
    cin>>salarioHora[contadorEmpleado];
    
    while(salarioHora[contadorEmpleado]<0){
        cout<<"\nEl salario por hora no puede ser negativo"<<endl;
        cout<<"Ingrese el salario por hora del empleado: ";
        cin>>salarioHora[contadorEmpleado];
        cout<<"\n";
    }

    cout<<"Ingrese las horas trabajadas del empleado: ";
    cin>>horasTrabajadas[contadorEmpleado];
    
    while(horasTrabajadas[contadorEmpleado]<0){
        cout<<"\nLa cantidad de horas no puede ser negativa"<<endl;
        cout<<"Ingrese de nuevo la cantidad de horas del empleado: ";
        cin>>horasTrabajadas[contadorEmpleado];
        cout<<"\n";
    }
}


void mostrarEmpleados(string nombres[],string cedula[],float salarioHora[],int  horasTrabajadas[],int contadorEmpleado){
    
    for(int i=0;i<contadorEmpleado;i++){
        cout<<"\n";
        cout<<"Nombre: "<<nombres[i]<<endl;
        cout<<"Cedula: "<<cedula[i]<<endl;
        cout<<"Salario por hora: "<<salarioHora[i]<<endl;
        cout<<"Horas trabajadas: "<<horasTrabajadas[i]<<endl;
        cout<<"\n";
    }
}

void calcular_Salario_Empleados(string nombres[],string cedula[],float salarioHora[],int  horasTrabajadas[],int contadorEmpleado){
    for(int i=0;i<contadorEmpleado;i++){
        int salarioTotal = salarioHora[i]*horasTrabajadas[i];

        cout<<"\n";
        cout<<"Nombre: "<<nombres[i]<<endl;
        cout<<"Cedula: "<<cedula[i]<<endl;
        cout<<"Salario: "<<salarioTotal<<endl;
        cout<<"\n";
    }
}


void estadisticasGenerales(string nombres[],float salarioHora[],int  horasTrabajadas[],float contadorEmpleado){
    float sumaSalarios = 0;
    long salario_Mas_Alto = 0;
    float salario_Mas_Bajo = 999999999;
    int posicion_Salario_Mas_Alto = 0;
    int posicion_Salario_Mas_Bajo = 0;
    
    cout<<"\n";
    cout<<"La cantidad de empleados registrados es: "<<contadorEmpleado<<endl;
    
    for(int i=0;i<contadorEmpleado;i++){
        float salario = salarioHora[i]*horasTrabajadas[i];
        sumaSalarios += salario;

        if(salario_Mas_Alto < salario){
            salario_Mas_Alto = salario;
            posicion_Salario_Mas_Alto = i;
        }

        if(salario_Mas_Bajo > salario){
            salario_Mas_Bajo = salario;
            posicion_Salario_Mas_Bajo = i;
        }
    }

    long promedio = sumaSalarios/contadorEmpleado;
    
    cout<<"El salario promedio de los empleados es: "<<promedio<<endl;
    cout<<nombres[posicion_Salario_Mas_Alto]<<" tiene el salario mas alto que es: "<<salario_Mas_Alto<<endl;
    cout<<nombres[posicion_Salario_Mas_Bajo]<< " tiene el salario mas bajo que es: "<<salario_Mas_Bajo<<endl;
}


void buscarEmpleado(string nombres[],string cedula[],float salarioHora[],int  horasTrabajadas[],int contadorEmpleado){
    string cedula_Buscada;

    cout<<"Digite la cedula a buscar: ";
    cin>>cedula_Buscada;

    for(int i=0;i<contadorEmpleado;i++){
        if(cedula_Buscada == cedula[i]){
            cout<<"\nDatos del empleado buscado \n";
            cout<<"\n";
            cout<<"Nombre: "<<nombres[i]<<endl;
            cout<<"Cedula: "<<cedula[i]<<endl;
            cout<<"Salario por hora: "<<salarioHora[i]<<endl;
            cout<<"Horas trabajadas: "<<horasTrabajadas[i]<<endl;
            cout<<"\n";
        }
    }
}


void modificarEmpleado(string nombres[],string cedula[],float salarioHora[],int horasTrabajadas[],int contadorEmpleado){
    string cedula_Modificar;
    int opcion, posicion_Empleado_Modificar;
    
    cout<<"Ingrese la cedula del empleado a modificar: ";
    cin>>cedula_Modificar;

    for(int i=0; i<contadorEmpleado;i++){
        if(cedula_Modificar == cedula[i]){
            posicion_Empleado_Modificar = i;
        }
    }

    cout<<"\n";
    cout<<"\tOpciones modificables"<<endl;
    cout<<"1. Nombre"<<endl;
    cout<<"2. Salario por hora"<<endl;
    cout<<"3. Horas trabajadas"<<endl;
    cout<<"\n";

    cout<<"Ingrese la opcion a modificar: ";
    cin>>opcion;

    switch (opcion){
        case 1: cout<<"Ingrese el nuevo nombre: ";
                cin>>nombres[posicion_Empleado_Modificar]; break;
        
        case 2:  cout<<"Ingrese el nuevo salario por hora: ";
                cin>>salarioHora[posicion_Empleado_Modificar]; break;

        case 3:  cout<<"Ingrese las nuevas horas trabajadas: ";
                cin>>horasTrabajadas[posicion_Empleado_Modificar]; break;
    }
}