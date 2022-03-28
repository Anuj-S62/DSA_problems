// #include<bits/stdc++.h>
// using namespace std;

// void powerset(string a,int i=0,string res=""){
//     if(i==a.length()){
//         cout<<res<<endl;
//         return ;
//     }
//     powerset(a,i+1,res+a[i]);
//     powerset(a,i+1,res);
// }
// string swap(string s,int l,int i){
//     char temp=s[l];
//     s[l]=s[i];
//     s[i]=temp;
//     return s;
// }

// void permutation(string s,int l=0,int r=-1){
//     if(r==-1)r=s.length()-1;
//     if(l==r){
//         cout<<s<<endl;
//         return;
//     }
//     for(int i=l;i<=r;i++){
//         s = swap(s,l,i);
//         permutation(s,l+1,r);
//         s = swap(s,l,i);
//     }
// }

// int main(){
//     // powerset("abc");
//     permutation("abc");
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     long long int n;
//     cin>>n;
//     long long int ans=0;
//     long long int x=1;
//     while(n){
//         if(n&1){
//             ans += x;
//         }
//         x *= 10;
//         n = n>>1;
//         cout<<ans<<endl;
//     }
//     cout<<ans<<endl;

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;


int main(){
    // cout<<sqrt(9)<<endl;
    int x = sqrt(9);
    cout<<x<<endl;

    return 0;
}
