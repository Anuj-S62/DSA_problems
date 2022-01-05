#include<iostream>
using namespace std;

class y;

class x{
    int data;
    public:
    void setdata(int a){
        data=a;
    }
    void display(){
        cout<<data<<endl;
    }
    friend class sp;
};

class y{
    int data;
    public:
    void setdata(int a){
        data=a;
    }
    void display(){
        cout<<data<<endl;
    }
    friend class sp;

};

class sp{
    public:
    void swap(x &o1,y &o2){ // -> "&" is used to pass refrence of a variable 
        int temp;
        temp=o1.data;
        o1.data=o2.data;
        o2.data=temp;
    }
};

int main(){
    x a;
    y b;
    sp z;
    a.setdata(4);
    b.setdata(8);
    z.swap(a,b);
    a.display();
    


    return 0;
}