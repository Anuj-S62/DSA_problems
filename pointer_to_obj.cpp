#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    // complex(int i,int j):a(i),b(j){}
    void setData(int a,int b){
        this->a=a;  // -> this pointer
        this->b=b;
    }

    void show(){
        cout<<"complex number is "<<a<<" + i"<<b<<endl;
    }
    
};

int main(){
    // complex c1;
    // complex * ptr= &c1;
    // // (*ptr).setData(5,6) // ->this also can be used   "(*ptr).setdata"  and "ptr->setdata" will do same thing
    // ptr->setData(5,6);
    // ptr->show();  
    // complex * p= new complex;
    // p->setData(6,9);
    // p->show();

    complex * arr=new complex[4];
    arr[0].setData(34,67);
    arr[0].show();
    arr[1].setData(7,8);
    arr[1].show();
    int p,q;
    complex * ptr=new complex[4];
    for(int i=0;i<4;i++){
        cin>>p>>q;
        ptr[i].setData(p,q);
    }

    for(int i=0;i<4;i++){
        ptr->show();
        ptr++;
    }

    return 0;
}