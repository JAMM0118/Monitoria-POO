//elementos de la serie fibonacci


#include<iostream>

using namespace std;

int main(){
    int n, x=0, y=1, z=1;
    
    cout<<"Digite el numero de elementos: ";  //5
    cin>>n;
    cout<<"1 "; // 1 1 2 3 5 8

    for(int i=1; i<n;i++){
        
        z = x+y; // 1 2 3
        
        cout<<z<<" "; // 1 1 2 3
        
        x = y; // 1 1 2
        
        y = z; // 1 2 3
    }


    return 0;
}
