#include<iostream>
#include<conio.h>
using namespace std;


int main(){
    int n;
    
    cout<<"Digite el numero a descomponer en factores primos: "; 
    cin>>n;

    // 10  10/2 = 5    5/5 = 1   2 5

    for(int i=2; i<=n; i++){ 
        while(n % i == 0){
            
            cout<<i<<" ";
            
            n /= i;
        }
    }
    
    cout<<"\nDigite cualquier tecla para continuar..";
    getch();

    return 0;
}