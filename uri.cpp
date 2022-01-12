#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int a,b;
     cin>>a>>b;
     int q=a/b;
     int r=a%b;
     if(r<0){
         r=r*-1;
     }
     cout<<q<<" "<<r<<endl;
     
 
    return 0;
}
