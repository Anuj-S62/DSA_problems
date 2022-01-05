#include<iostream>
using namespace std;

class base1{
    protected:
    int intbase1;
    public:
    void set_intbase1(int a){
        intbase1=a;
    }
};

class base2{
    protected:
    int intbase2;
    public:
    void set_intbase2(int a){
        intbase2=a;
    }
};

class derived : public base1,public base2{
    public:
    void show(){
        cout<<"The value of intbase1 is :"<<intbase1<<endl;
        cout<<"The value of intbase2 is :"<<intbase2<<endl;
        cout<<"The sum of values is :"<<intbase1 + intbase2<<endl;
    }
};


int main(){
    derived d1;
    d1.set_intbase1(45);
    d1.set_intbase2(5);
    d1.show();


    return 0;
}