#include<iostream>

using namespace std;

int main(){

    string arreglo1[] = {"Alejandro","Bairon","Camilo"};
    string arreglo2[] = {"David","Eduardo","Fernando"};
    string arreglo3[6];

    for(int i=0; i<3; i++){
        arreglo3[i] = arreglo1[i];
        
        if(i==2){
            for(int j=3; j<6; j++){
                arreglo3[j] = arreglo2[j-3];
            }
        }
    }


    for(int i=0; i<6; i++){
        cout<<arreglo3[i]<<" ";
    }


    return 0;
}