#include<iostream>
using namespace std;    

int main(){    
    
    int arreglo[5] = {1,2,3,4,5};

    int longitud=sizeof(arreglo)/sizeof(*arreglo); // forma de obtener la longitud de un arreglo

    cout<<"\nOrden normal del arreglo"<<"\n"<<endl; 
    for(int i=0; i<longitud; i++){
        cout<<"El numero "<<arreglo[i]<<" esta ubicado en la posicion ["<<i<<"]"<<endl;
    }


    cout<<"\nOrden inverso del arreglo"<<"\n"<<endl; 
    for(int k=longitud-1; k>=0;k--){
        cout<<"El numero "<<arreglo[k]<<" esta ubicado en la posicion ["<<k<<"]"<<endl;
    }

}