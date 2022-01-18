#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int n;
     cin>>n;
     int x;
     float a;
     for(int i=0;i<n;i++){
         cin>>x;
         a=2.5*x*x*tan(0.942477795);
         cout<<fixed;
         cout<<setprecision(3)<<a<<endl;
     }
 
    return 0;
}