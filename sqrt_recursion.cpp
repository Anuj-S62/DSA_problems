#include<bits/stdc++.h>
using namespace std;

int mysqrt(int a,int low,int high){
    if(a==1 || a==0){
        return a;
    }
    int mid=(high+low)/2;
    if(mid*mid==a){
        return mid;
    }
    else if(mid*mid>a){
        return mysqrt(a,0,mid);
    }
    else{
        return mysqrt(a,mid,a);
    }
}

/* a=16
l=0  h=16  mid=8  64>a
a=8 l=0 h=8 m=4  
*/


int main(){
    cout<<mysqrt(256,0,16);

    return 0;
}