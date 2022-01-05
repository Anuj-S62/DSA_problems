#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    // Creating a costructor 
    // constructor is a special member function with some name as of the class .
    //it is automatically invoked(calling a function) whenever an object is created
    // It is used to iniytialise the object of its class
    complex(int x,int y);//constructor declaration
    void show(){
        cout<<"complec number is :"<<a<<" + "<<"i"<<b<<endl;
    }
    complex(){
        a=0;
        b=0;
    }//->if we are defining a constructor with argument then we have to make a constructor with void argument
    complex(complex &x){
        cout<<"custom copy constructor called"<<endl;
        a=x.a;
        b=x.b;
    }
};

complex :: complex(int x,int y){  //this is a parameterised(it takes arguments) constructor as it takes two parameter
    a=x;
    b=y;
}

int main(){
    // implicit call
    complex c1(4,6);
    complex c2(6,8);
    // complex c3=c1; //->copy constructor(inbuilt/custom) called
    // // c3=c1 -> copy constructor not called

    // // explicit call

    // complex z=complex(c1);// -> this will give error and copy constructor will not be called
    complex z;
    z=complex(c1);//->copy constructor will be called
    complex y(c2);//->copy constructor will be called
    c1.show();
    c2.show();
    z.show();
    y.show();

    return 0;
}