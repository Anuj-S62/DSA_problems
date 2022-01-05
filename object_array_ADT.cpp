#include<iostream>
using namespace std;

class Employee{
    public:
    int id;
    int salary;
    void setid(){
        salary=1000;
        cout<<"Enter ID of employee"<<endl;
        cin>>id;
    }
    void print(){
        cout<<"ID of this employee is "<<id<<endl;
        cout<<"salary of this employee is "<<salary<<endl;

    }
        
};

int main(){
    Employee a[5];
    for(int i=0;i<5;i++){
        a[i].setid();
    }
    for(int i=0;i<5;i++){
        a[i].print();
    }

    return 0;
}