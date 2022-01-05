#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    // Creating a costructor 
    // constructor is a special member function with some name as of the class .
    //it is automatically invoked(calling a function) whenever an object is created
    // It is used to iniytialise the object of its class
    complex(void);//constructor declaration
    void show(){
        cout<<"value of a and b is :"<<a<<" + "<<"i"<<b<<endl;
    }
};

complex :: complex(void){  //this is a default constructor as it takes no parameter
    a=0;
    b=0;
}

int main(){
    complex c1;
    c1.show();

    return 0;
}

// 1. properties of conctroctor
// 2. it should be created in public section
// 3. they automatically invoked whenever an object is created
// 4. do not have return type
// 5. it can hae default argument
// 6. we cannot refer to their refernce b