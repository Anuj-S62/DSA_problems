#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int factorial(int a){
    if(a==0){
        return 1;
    }
    return a*factorial(a-1);
} 
 
int main(){
    int a=5;
    cout<<factorial(9);
    return 0;
} 