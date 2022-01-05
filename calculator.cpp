#include<iostream>
#include<cmath>
using namespace std;

class simple_calculator{
    protected:
    float a,b;
    public:
    simple_calculator(float c,float d){
        a=c;
        b=d;
        cout<<"enter operation"<<endl;
    }
    simple_calculator(){}
    void add(){
        cout<<"sum is : "<<a+b<<endl;
    }
    void subtract(){
        cout<<"subtract is : "<<a-b<<endl;
    }
    void multiply(){
        cout<<"multiplication is : "<<a*b<<endl;
    }
    void divide(){
        cout<<"dividion is : "<<a/b<<endl;
    }
};

class scientific{
    protected:
    float e,f;
    public:
    scientific(float c,float d){
        e=c;
        f=d;
    }
    scientific(){}
    void power(){
        cout<<f<<" to the power "<<e<<" is :"<<pow(e,f)<<endl;
    }
};

class hybrid: public simple_calculator,public scientific{
    public:
    hybrid(float c,float d){
           a=c;
           b=d;
           e=c;
           f=d;
    }
    hybrid(){}
};

int main(){
    hybrid h1(4,2);
    h1.add();
    h1.subtract();
    h1.multiply();
    h1.divide();
    h1.power();

    return 0;
}