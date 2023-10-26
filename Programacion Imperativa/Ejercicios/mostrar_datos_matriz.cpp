#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    /*               0        1        2          3          columnas
    filas     0  | Nombre | Edad | Cedula  |  Telefono   |               
              1  | Juan   |  20  |  111111 |  31599912   | 
              2  |  Pablo |  22  |  111211 |  31599912   | 
    
    */
    int filas = 0;
    int edad;
    int columnas = 4;
    string nombre,cedula,telefono;

    cout<<"Digite el numero de filas: "; cin>>filas;
    filas += 1;
    
    string matriz[filas][columnas]= {  " 0 " };

    for(int i=1; i<filas; i++){
        for(int j=0; j<columnas; j++){
            if(j==0){
                cout<<"Digite su nombre: "; cin>>nombre;
                matriz[i][j] = nombre;

            }else if(j==1){
                cout<<"Digite su edad: "; cin>>edad;
                matriz[i][j] = to_string(edad);

            }else if(j==2){
                cout<<"Digite su cedula: "; cin>>cedula;
                matriz[i][j] = cedula;

            }else if(j==3){
                cout<<"Digite su telefono: "; cin>>telefono;
                matriz[i][j] = telefono;
            }
        }
    }
    cout<<"\n\n";

    string arreglo[] = {"Nombre", "Edad", "Cedula", "Telefono"};

    for(int j=0; j<columnas; j++){
        matriz[0][j] = arreglo[j];
    }

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas;j++){
            cout<<setw(10)<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }




    return 0;
}