#include<iostream>
using namespace std;


int main(){
    int *p=new int(4);
    cout<<"The value at address p is "<<*p<<endl;
    int *arr=new int[4];  // allocating the contiguous memory block for 4 integers i a array
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    delete[] arr; // entered value in arr is now deleted(complete block) and can be used again for collecting new value
    
    for(int i=0;i<4;i++){
        printf("value of arr[%d] is %d \n",i,arr[i]);
    }

    return 0;
}