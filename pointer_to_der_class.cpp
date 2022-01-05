#include<iostream>
using namespace std;

class base{
    public:
    int a=0;
    void set_data(int a){
        this->a=a;
    }
    virtual void display(){
        cout<<"The value a in base class is: "<<a<<endl;
    }
};

class derived : public base{
    int b=0;
    public:
    void set_data2(int b){
        this->b=b;
    }
    void display(){
        cout<<"The value of b in derived class is: "<<b<<endl;
        // cout<<"The value of a in derived class is: "<<a<<endl;
    }
};

int main(){
    base* ptr;
    derived obj;      
    ptr=&obj;
    ptr->set_data(78);
    ptr->display();

    // derived * obj2;
    // derived a;
    // obj2=&a;
    // obj2->set_data(67);
    // obj2->set_data2(99);
    // obj2->display();

    return 0;
}