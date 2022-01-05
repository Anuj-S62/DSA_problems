#include<iostream>
using namespace std;

class complex;

class calculator{
    public:
    int sumReal(complex o1,complex o2);
};

class complex{
    private:
    int a;
    int b;
    public:
    void set(int x,int y){
        a=x;
        b=y;
    }
    // friend int calculator :: sumReal(complex o1,complex o2); -->declaring only single function of class as friend of complex class
    friend int calculator :: sumReal(complex o1,complex o2);   //-->declaring whole class as friend of complex class
    friend complex setBySum(complex o1,complex o2);
    void print(){
        cout<<"complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex setBySum(complex o1,complex o2){
    complex r;
    r.a=o1.a+o2.a;
    r.b=o1.b+o2.b;
    return r;
}

int calculator :: sumReal(complex o1,complex o2){
        return o1.a+o2.a;
    }


int main(){
    complex c[3];
    c[0].set(3,7);
    c[1].set(5,9);
    c[0].print();
    c[1].print();
    c[3]=setBySum(c[0],c[1]);
    c[3].print();
    calculator res;
    int a=res.sumReal(c[0],c[1]);
    return 0;
}


