#include<iostream>
using namespace std;

class Base1{
    int a;
    public:
    Base1(int i){
        cout<<"constructor of base 1 class is called"<<endl;
        a=i;
    }
    void base1Val(){
        cout<<"value of base 1 is :"<<a<<endl;
    }
};

class Base2{
    int b;
    public:
    Base2(int i){
        cout<<"constructor of base 2 class is called"<<endl;
        b=i;
    }
    void base2Val(){
        cout<<"value of base 2 is :"<<b<<endl;
    }
};
    // if virtual class is not there :
    //   "3"         "1"            "2"   ->priority
class derived :public Base2, virtual public Base1{  //virtual class's constructor will be called first
    int c;
    public:
    derived(int p,int q,int r): Base1(p),Base2(q){
        cout<<"constructor of derived class is called"<<endl;
        c=r;
    }
    void derivedVal(){
        cout<<"value of derived is :"<<c<<endl;
    }
};

int main(){
    derived d1(1,2,3);
    d1.base1Val();
    d1.base2Val();
    d1.derivedVal();


    return 0;
}