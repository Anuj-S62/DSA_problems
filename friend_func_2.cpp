#include<iostream>
using namespace std;

class y; //--> we have to declare y here because we are using class y in class x

class x{
    int data;
    public :
    void setvalue(int value){
        data=value;
    }
    friend void add(x,y);
};

class y{
    int data;
    public :
    void setvalue(int value){
        data=value;
    }
    friend void add(x,y);
};

void add(x o1,y o2){
    cout<<"The sum of data of x and y is "<<o1.data+o2.data;
}

int main(){
    x a;
    y b;
    a.setvalue(5);
    b.setvalue(6);
    add(a,b);
    return 0;
}