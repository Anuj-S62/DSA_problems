#include<iostream>
using namespace std;
//base class
class employee{
    public:
    int id;
    float salary = 45;
    employee(int pid){
        id=pid;
    }
    employee(){};
};

// derived class
/* class {{derived-class name}} : {{visibility mode}} {{base-class-name}}
{
    members/members
}  */


// visibility mode : public->public mmembers of base class is public member of derived class
// visibility mode : private->public mmembers of base class is private member of derived class

class programmer : public employee{
    public:
    int progLevel = 10;
    programmer(int pid){
        id=pid;
    }
    programmer(){}

};

int main(){
    employee e1(1);
    employee e2(2);
    cout<<e1.salary<<endl;
    cout<<e1.id<<endl;
    programmer p1(4);
    cout<<p1.id<<endl;
    return 0;
}