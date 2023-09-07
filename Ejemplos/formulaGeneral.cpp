#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int a,b,c,operacion2,operacion1;
    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    cout<<"Digite el valor de c: "; cin>>c;

    operacion1 = (-b +(sqrt(pow(b,2)-((4*a*c))))) / (2*a);
    operacion2 = (-b -(sqrt(pow(b,2)-((4*a*c))))) / (2*a);
    
    cout<<"\nEl resultado de X1 es: "<<operacion1<<endl;
    cout<<"El resultado de X2 es: "<<operacion2<<endl;

 return 0;
}