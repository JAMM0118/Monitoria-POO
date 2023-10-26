#include<iostream>
using namespace std;

int main(){
    int numero, suma =0, par , pares_suma = 0, impares_suma = 0;

    cout<<"Digite el tamaño de la expresion: ";
    cin>>numero;

    for(int i=1; i<=numero;i++){
        suma +=i;

        if( i % 2 == 0){
            par = i*-1;
            pares_suma += par;
        }
        else{
            impares_suma += i;
        }

    }
    suma = pares_suma + impares_suma;
    cout<<"La suma total es: "<<suma<<endl;

    return 0;
}