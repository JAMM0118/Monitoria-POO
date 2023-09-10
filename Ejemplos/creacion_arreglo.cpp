#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int n;
    
    cout<<"Digite el tamaño del arreglo: "; cin>>n;
    
    //creacion del arreglo
    int arreglo[n];
    

    // Almacenando datos en el arreglo
    for(int i=0; i<n; i++){
        cout<<"Digite un numero: "; cin>>arreglo[i];
    }

    cout<<"\n";
    // Mostrando datos del arreglo
    for(int j=0; j<n;j++){
        cout<<"El numero "<<arreglo[j]<<" esta ubicado en la posicion ["<<j<<"]"<<endl;
    }


    //funcion para no dejar cerrar el programa hasta despues de presionar una tecla
    getch();

    return 0;
}