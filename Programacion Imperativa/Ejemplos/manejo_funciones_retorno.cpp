#include<iostream>
using namespace std;

int suma(int a, int b){
    return a + b;
}

int multiplicacion(int a, int b){
    return a*b;
}


float division(float a, float b){
    return a / b;
}

//  2 / 3 = 0.66 
// 2.0 / 3.0 = 0.66

int main(){
    int a, b;
    cout<<"Digite dos numeros: ";
    cin>>a>>b;

    cout<<"La suma es: "<<suma(a,b)<<endl;
    cout<<"La multiplicacion es: "<<multiplicacion(a,b)<<endl;
    cout<<"La division es: "<<division(a,b)<<endl;


    return 0;
}