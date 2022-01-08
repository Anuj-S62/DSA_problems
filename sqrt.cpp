#include<bits/stdc++.h>
using namespace std;


int mySqrt(int a){
        if(a==1 || a==0){
            return a;
        }
    int low=0;
    int high = a;
    long long int mid=0;
    while(low<high){
        mid =low+(high-low)/2;
        if(mid*mid==a){
            return mid;
        }
        else if(mid*mid > a){
            high = mid;
        }
        else{
            low = mid;
        }
        if((high-low)==1){
            return low;
        }
    }
    return a;
    }  


int main(){
    cout<<sqrt(2147395599)<<endl;
    cout<<mySqrt(2147395599);
    return 0;
}