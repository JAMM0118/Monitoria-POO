/*Ejercicio de Registro de Empleados

Crea un programa en C++ que permita a una empresa llevar un registro de sus empleados  
El programa debe gestionar la información de los empleados, calcular sus salarios y proporcionar estadísticas. 
Debes implementar las siguientes funcionalidades:

1.  Crea una matriz para almacenar la información de los empleados: 
 nombres de empleados, números de identificación, salarios por hora 
y  horas trabajadas en la semana

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
#include<iomanip>

using namespace std;

void agregarEmpleado(string matrizEmpledos[][5],int contadorEmpleado);
void mostrarEmpleados(string matrizEmpledos[][5],int contadorEmpleado);
void calcular_Salario_Empleados(string matrizEmpledos[][5],int contadorEmpleado);
void estadisticasGenerales(string matrizEmpleado[][5],float contadorEmpleado);
void buscarEmpleado(string matrizEmpleado[][5],int contadorEmpleado);
void modificarEmpleado(string matrizEmpleado[][5],int contadorEmpleado);

int main(){

    /*
                            0       1        2        3            4         columnas

        filas     0     | Nombre | Cedula | Salario | Horas | Salario Total |
                  1     | 0      | 0      | 0       | 0     |  0            |
                  2     | 0      | 0      | 0       |0      |  0            |
                     
    
    */

    int contadorEmpleado = 0;
    string matrizEmpleados[100][5];

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
            case 1: agregarEmpleado(matrizEmpleados,contadorEmpleado);
                    contadorEmpleado++; break;
            
            case 2: mostrarEmpleados(matrizEmpleados,contadorEmpleado);break;
            
            case 3: calcular_Salario_Empleados(matrizEmpleados,contadorEmpleado); break;
            case 4: estadisticasGenerales(matrizEmpleados,contadorEmpleado); break;
            case 5: buscarEmpleado(matrizEmpleados,contadorEmpleado); break;
            case 6: modificarEmpleado(matrizEmpleados,contadorEmpleado); break;
            case 7: break;
            case 8: exit(0);break;
        
        }

    }while(opcion != 8);

    return 0;
}
void agregarEmpleado(string matrizEmpleado[][5],int contadorEmpleado){
   
    cout<<"Ingrese el nombre del empleado: ";
    cin>>matrizEmpleado[contadorEmpleado+1][0];

    cout<<"Ingrese la cedula del empleado: ";
    cin>>matrizEmpleado[contadorEmpleado+1][1];
    
    for(int i=1; i<contadorEmpleado+1;i++){
        while(matrizEmpleado[contadorEmpleado+1][1] == matrizEmpleado[i][1]){
            cout<<"\nLa cedula ya existe en el registro"<<endl;
            cout<<"Ingrese la cedula del empleado: ";
            cin>>matrizEmpleado[contadorEmpleado+1][1];
            cout<<"\n";
        }
    }

    cout<<"Ingrese el salario por hora del empleado: ";
    cin>>matrizEmpleado[contadorEmpleado+1][2];
    
    while(stof(matrizEmpleado[contadorEmpleado+1][2]) < 0){
        cout<<"\nEl salario por hora no puede ser negativo"<<endl;
        cout<<"Ingrese el salario por hora del empleado: ";
        cin>>matrizEmpleado[contadorEmpleado+1][2];
        cout<<"\n";
    }

    cout<<"Ingrese las horas trabajadas del empleado: ";
    cin>>matrizEmpleado[contadorEmpleado+1][3];
    
    while(stoi(matrizEmpleado[contadorEmpleado+1][3])<0){
        cout<<"\nLa cantidad de horas no puede ser negativa"<<endl;
        cout<<"Ingrese de nuevo la cantidad de horas del empleado: ";
        cin>>matrizEmpleado[contadorEmpleado+1][3];
        cout<<"\n";
    }
}
void mostrarEmpleados(string matrizEmpleado[][5],int contadorEmpleado){
    
    string datosPersonales[] = {"Nombre","Cedula","Salario/hora","Horas trabajadas","Salario total"};
    
    for(int i=0;i<5;i++){
        matrizEmpleado[0][i] = datosPersonales[i];
    }

    for(int i=0;i<contadorEmpleado+1;i++){
        for(int j=0;j<5;j++){
            cout<<setw(15)<<matrizEmpleado[i][j]<<"  ";
            
        }
        cout<<"\n";
    }
    
}
void calcular_Salario_Empleados(string matrizEmpleado[][5],int contadorEmpleado){
    for(int i=1;i<contadorEmpleado+1;i++){
      
        int salario_hora = stoi(matrizEmpleado[i][2]);
        int horas_trabajadas = stoi(matrizEmpleado[i][3]);
        
        int salarioTotal =  salario_hora * horas_trabajadas;
        matrizEmpleado[i][4] = to_string(salarioTotal);
    }

    mostrarEmpleados(matrizEmpleado,contadorEmpleado);
}
void estadisticasGenerales(string matrizEmpleado[][5],float contadorEmpleado){
    float sumaSalarios = 0;
    long salario_Mas_Alto = 0;
    float salario_Mas_Bajo = 999999999;
    int posicion_Salario_Mas_Alto = 0;
    int posicion_Salario_Mas_Bajo = 0;
    
    cout<<"\n";
    cout<<"La cantidad de empleados registrados es: "<<contadorEmpleado<<endl;
    
    for(int i=1;i<contadorEmpleado+1;i++){
        float salario = stoi(matrizEmpleado[i][2])*stoi(matrizEmpleado[i][3]);
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
    cout<<matrizEmpleado[posicion_Salario_Mas_Alto][0]<<" tiene el salario mas alto que es: "<<salario_Mas_Alto<<endl;
    cout<<matrizEmpleado[posicion_Salario_Mas_Bajo][0]<< " tiene el salario mas bajo que es: "<<salario_Mas_Bajo<<endl;
}
void buscarEmpleado(string matrizEmpleado[][5],int contadorEmpleado){
    string cedula_Buscada;

    cout<<"Digite la cedula a buscar: ";
    cin>>cedula_Buscada;

    for(int i=1;i<contadorEmpleado+1;i++){
        if(cedula_Buscada == matrizEmpleado[i][1]){
            cout<<"\nDatos del empleado buscado \n";
            cout<<"\n";
            cout<<"Nombre: "<<matrizEmpleado[i][0]<<endl;
            cout<<"Cedula: "<<matrizEmpleado[i][1]<<endl;
            cout<<"Salario por hora: "<<matrizEmpleado[i][2]<<endl;
            cout<<"Horas trabajadas: "<<matrizEmpleado[i][3]<<endl;
            cout<<"\n";
        }
    }
}
void modificarEmpleado(string matrizEmpleado[][5],int contadorEmpleado){
    string cedula_Modificar;
    int opcion, posicion_Empleado_Modificar;
    
    cout<<"Ingrese la cedula del empleado a modificar: ";
    cin>>cedula_Modificar;

    for(int i=1; i<contadorEmpleado+1;i++){
        if(cedula_Modificar == matrizEmpleado[i][1]){
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
                cin>>matrizEmpleado[posicion_Empleado_Modificar][0]; break;
        
        case 2:  cout<<"Ingrese el nuevo salario por hora: ";
                cin>>matrizEmpleado[posicion_Empleado_Modificar][2]; break;

        case 3:  cout<<"Ingrese las nuevas horas trabajadas: ";
                cin>>matrizEmpleado[posicion_Empleado_Modificar][3]; break;
    }
}