#include<iostream>
#include<math.h>
using namespace std;

int main(){

    float a,b,h;

    cout<<"Digite el primer cateto: "; cin>> a;
    cout<<"Digite el segundo cateto: " ; cin>>b;

    h = sqrt( pow(a,2) + pow(b,2));
    cout.precision(2);

    cout<<"\nLa hipotenusa es: "<<h<<endl;
    
    return 0;
}