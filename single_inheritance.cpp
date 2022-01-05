#include<iostream>
using namespace std;

class base{
    int data1 = 40;
    public:
    int data2 = 30;
    void setdata(){
        data1 = 10;
        data2 = 20;
    }
    int getdata1(){    // by this method we can access the private data1
        return data1;
    }
    base(){}
};

class derived : public base{
    public:
    int data3;
    derived(int a){
        data3=a*data2*getdata1();
    }
    derived(){
        data3=data2*getdata1();
    }
    void display(void){
        cout<<"The value of data1 is :"<<getdata1()<<endl;
        cout<<"The value of data2 is :"<<data2<<endl;
        cout<<"The value of data3 is :"<<data3<<endl;
    }
};

int main(){
    derived d1;
    // d1.setdata();
    d1.display();
    return 0;
}