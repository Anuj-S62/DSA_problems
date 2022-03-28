#include<bits/stdc++.h>
using namespace std;

template <class t1,class t2>
class multiply{
    t1 a;
    t2 b;
    public:
        multiply(t1 x,t2 y){
            a=x;
            b=y;
        }
        multiply(){}
        void display(){
            cout<<"value of data 1 is :"<<a<<endl;
            cout<<"value of data 2 is :"<<b<<endl;
            cout<<"multiplication of data 1 and data 2 is "<<a*b<<endl;
            cout<<endl;
        }
};

template<class t1,class t2>
void sum(t1 x,t2 y){
    cout<<"sum is : "<<x+y<<endl;
}

int main(){
    multiply<int,int> m1(4,5);
    m1.display();
    multiply<float,int> m2(4.3,5);
    m2.display();
    multiply<float,float> m3(3.3,1.5);
    m3.display();

    sum(1.4,2.7);

    return 0;
}