#include<iostream>
#include<math.h>
using namespace std;

int main(){

    float a,b,h;

    cout<<"Digite el primer cateto: "; cin>> a;
    cout<<"Digite el segundo cateto: " ; cin>>b;
    int a2 = pow(a,2);
    int b2 = pow(b,2);
    int h2 = a2 + b2;
    h = sqrt(h2 );
    cout.precision(2);

    cout<<"\nLa hipotenusa es: "<<h<<endl;
    
    return 0;
}