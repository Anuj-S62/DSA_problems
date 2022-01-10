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
     int i=b+1;
     int sum=0;
     while(i!=a){
         if(i%2==1 || i%2==-1){
             sum=sum+i;
         }
         cout<<sum<<endl;
         i++;
     }
     cout<<sum<<endl;
 
    return 0;
}




