// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// int term(int n){
//     if(n<=2){
//         return 1;
//     }
//     return term(n-1)+term(n-2);
// } 
 
// int main(){
//     cout<<term(8); 
//     return 0;
// }


//-------FIBO TERM USING ARRAY----------//

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fib(int a){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(1);
    for(int i=2;i<a-1;i++){
        arr.push_back(arr[i-1]+arr[i-2]);
    }
    cout<<arr[a-2]+arr[a-3];
}
 
int main(){
    fib(1000000000);
    return 0;
}


// #include<iostream>
// using namespace std;
// typedef long long int ll;

// ll fact(ll n){
//     ll fact=1;
//     for(ll i=0;i<n;i++){
//         fact=fact*(i+1);
//     }
//     return fact;
// }

// int fact2(int n){
//     int fact=1;
//     for(int i=0;i<n;i++){
//         fact=fact*(i+1);
//     }
//     return fact;
// }


// int main(){
//     cout<<fact(19)<<endl;
//     cout<<fact2(19)<<endl;

//     return 0;
// }