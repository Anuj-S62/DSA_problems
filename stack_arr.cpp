#include<iostream>
#include<stack>
using namespace std;

int main(){
   stack<int> s;
   int arr1[]={1,4,3,2,9,8,8,6,3,5,7}; 
   int arr2[sizeof(arr1)/sizeof(int)];
   for(int i=0;i<sizeof(arr1)/sizeof(int);i++){
       if(s.empty()){
           arr2[i]=-1;
           s.push(arr1[i]);
           continue;
       }
       while(s.top()>arr1[i] || s.top()==arr1[i]){
            s.pop();
       }
       if(s.empty()){
           arr2[i]=-1;
           s.push(arr1[i]);
           continue;
       } 
       else{
          arr2[i]=s.top();
          s.push(arr1[i]); 
       } 
   }
   for(int i=0;i<sizeof(arr1)/sizeof(int);i++){
       cout<<arr1[i]<<" ";
   }
   cout<<endl;
   for(int i=0;i<sizeof(arr1)/sizeof(int);i++){
       cout<<arr2[i]<<" ";
   }
    return 0;
}