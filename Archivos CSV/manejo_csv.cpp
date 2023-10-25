#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>

using namespace std;

string nombre, apellido ,cedula ,edad;
string datos ,busqueda;

void menu();
void ingresarDatos();
void actualizarDatos();
void eliminarDatos();
void listarDatos();
void consultarDatos();

int main(){

    while(true){
        menu();
    }

    return 0;
}

void menu(){
    int opcion;
    cout<<"\tMENU"<<endl;
    cout<<"1. Ingresar nuevos datos"<<endl;
    cout<<"2. Actualizar datos ingresados"<<endl;
    cout<<"3. Eliminar datos ingresados"<<endl;
    cout<<"4. Buscar datos ingresados"<<endl;
    cout<<"5. Listar datos ingresados"<<endl;
    cout<<"6. Salir "<<endl;
    cout<<"\nSeleccion una opcion: ";
    cin>>opcion;
    fflush(stdin); //para limpiar el buffer de la memoria

    switch(opcion){
        case 1: ingresarDatos(); break;
        case 2: actualizarDatos(); break;
        case 3: eliminarDatos(); break;
        case 4: consultarDatos(); break;
        case 5: listarDatos(); break;
        case 6: exit(0);break;
    }
}

void ingresarDatos(){
    //Necesitaremos crear un objeto de la clase fstream para poder ingresar los datos al archivo csv
    ofstream documento("prueba.csv",ios::app);

    if(!documento){
        cout<<"Error al tratar de crear el documento csv"<<endl;
    }else{
        cout<<"Digite su nombre: ";
        getline(cin,nombre);
        cout<<"Digite su apellido: ";
        getline(cin,apellido);
        cout<<"Digite su edad: ";
        getline(cin,edad);

        fflush(stdin); //para limpiar el buffer de la memoria
        cout<<"Digite su cedula: ";
        getline(cin,cedula);

        documento<<nombre<<","<<apellido<<","<<edad<<","<<cedula<<endl;
        documento.close();

        cout<<"\nLos datos han sido ingresados de manera exitosa"<<endl;
    }

}

void actualizarDatos(){
    ifstream documento("prueba.csv",ios::in); //abrimos el archivo csv
    
    if(!documento){
        cout<<"Error al tratar de abrir el documento csv"<<endl;
    }else{
        vector<string>modificacion; //vector para almacenar los datos que no se van a modificar y los que si
        bool bandera= false;
        bool modificar = false;

        cout<<"Digite la cedula del usuario a modificar: ";
        cin>>busqueda;

        while(getline(documento,datos)){

            stringstream registros(datos); //convertimos la cadena de datos en un flujo de datos

            getline(registros,nombre,',');
            getline(registros,apellido,','); //le decimos que se detenga cuando encuentre una coma
            getline(registros,edad,',');
            getline(registros,cedula,',');

            if((busqueda.compare(cedula))== 0){ //comparamos la cedula ingresada con la cedula del archivo csv
                bandera = true;
                int opcion;

                cout<<"\nCedula encontrada"<<endl<<endl;
                cout<<"\tDatos modificables\n";
                cout<<"1. Nombre"<<endl;
                cout<<"2. Apellido"<<endl;
                cout<<"3. Edad"<<endl;
                cout<<"4. Cedula"<<endl;
                cout<<"\nSeleccione una opcion: ";
                cin>>opcion;
                fflush(stdin);

                switch(opcion){
                    case 1: cout<<"Digite el nuevo nombre: ";
                    modificar = true;
                    getline(cin,nombre);break;
                    case 2:cout<<"Digite el nuevo apellido: ";
                    modificar = true;
                    getline(cin,apellido);break;
                    case 3:cout<<"Digite la nueva edad: ";
                    modificar = true;
                    getline(cin,edad);break;
                    case 4:cout<<"Digite la nueva cedula: ";
                    modificar = true;
                    getline(cin,cedula);break;
                }
                //agregamos los datos modificados al vector
                modificacion.push_back(nombre + "," + apellido +","+ edad + "," + cedula ); 
                
                cout<<"\nModificacion hecha"<<endl;
            }else{
                modificacion.push_back(datos); //agregamos los datos no modificados al vector
            }
        }
        documento.close(); //cerramos el archivo csv
        if(bandera){
            if(modificar){
                ofstream sobreEscritura("prueba.csv"); //creamos un nuevo archivo csv
                for(int i=0; i< modificacion.size();i++){
                    sobreEscritura<<modificacion[i]<<endl; //agregamos los datos del vector al nuevo archivo csv
                }
                sobreEscritura.close();
            }
        }
        else{
            cout<<"La cedula buscada no existe"<<endl;
        }
    }
}

void eliminarDatos(){
    ifstream documento("prueba.csv",ios::in); //abrimos el archivo csv
    if(!documento){
        cout<<"Error al tratar de abrir el documento csv"<<endl;
    }else{
        vector<string>eliminacion; //creamos un vector para almacenar los datos que no se eliminaran 
        bool bandera= false;
        bool modificar = false;

        cout<<"Digite la cedula del usuario a eliminar: ";
        cin>>busqueda;

        while(getline(documento,datos)){

            stringstream registros(datos);

            getline(registros,nombre,',');
            getline(registros,apellido,',');
            getline(registros,edad,',');
            getline(registros,cedula,',');

            if((busqueda.compare(cedula))== 0){
                bandera = true;

            }else{
                eliminacion.push_back(datos);
            }
        }
        documento.close();
        if(bandera){
                cout<<"\nUsuario eliminado"<<endl<<endl;
                ofstream sobreEscritura("prueba.csv"); //creamos un nuevo archivo csv
                for(int i=0; i< eliminacion.size();i++){
                    sobreEscritura<<eliminacion[i]<<endl;
                }
                sobreEscritura.close();
        }
        else{
            cout<<"La cedula buscada no existe"<<endl;
        }
    }


}

void listarDatos(){
    ifstream documento("prueba.csv",ios::in); //abrimos el archivo csv
    if(!documento){
        cout<<"Error al tratar de abrir el documento csv"<<endl;
    }else{

        while(getline(documento,datos)){
            stringstream registros(datos); //convertimos la cadena de datos en un flujo de datos

            getline(registros,nombre,',');
            getline(registros,apellido,','); 
            getline(registros,edad,',');
            getline(registros,cedula,',');

            cout<<"Nombre: "<<nombre<<" "<<apellido<<endl;
            cout<<"Edad: "<<edad<<endl;
            cout<<"Cedula: "<<cedula<<endl<<endl;
        }
        documento.close();
    }
}

void consultarDatos(){
    ifstream documento("prueba.csv",ios::in); //abrimos el archivo csv
    if(!documento){
        cout<<"Error al tratar de abrir el documento csv"<<endl;
    }else{
        bool bandera= false;

        cout<<"Digite la cedula a buscar: ";
        cin>>busqueda;

        while(getline(documento,datos)){

            stringstream registros(datos);

            getline(registros,nombre,',');
            getline(registros,apellido,',');
            getline(registros,edad,',');
            getline(registros,cedula,',');

            if((busqueda.compare(cedula))== 0){
                bandera = true;
                cout<<"Nombre: "<<nombre<<" "<<apellido<<endl;
                cout<<"Edad: "<<edad<<endl;
                cout<<"Cedula: "<<cedula<<endl<<endl;
            }
        }
        documento.close();
        if(!bandera){
            cout<<"La cedula buscada no existe"<<endl;
        }
    }
}