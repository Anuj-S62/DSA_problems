#include<bits/stdc++.h>
using namespace std;

void show(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(vector<int> &arr,int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(vector<int> &arr,int l,int h){
    int pivot = arr[l];
    int i = l;
    int j = h;
    while(i<j){

        while(arr[i] <= pivot) {
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }

        if(i<j) swap(arr,i,j);

    }
    swap(arr,l,j);
    return j;
}

void quicksort(vector<int> & arr,int l,int h){
    if(l < h){
        int j = partition(arr,l,h);
        quicksort(arr,l,j-1);
        quicksort(arr,j+1,h);
    }
}

int main(){
    vector<int> arr = {4,6,2,5,7,9,1,3};
    int h = arr.size()-1;
    quicksort(arr,0,h);

    show(arr);

    return 0;
}