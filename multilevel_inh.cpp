#include<iostream>
using namespace std;

class student{
    protected:
    int roll_number;
    public:
    void set_rollnumber(int r){
        roll_number = r;
    }
    void get_rollnumber(){
        cout<<"Your roll number is :"<<roll_number<<endl;
    }
};

class exam : public student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(int m1, int m2){
        maths=m1;
        physics = m2;
    }
    void get_marks(){
        cout<<"Your marks in maths is :"<<maths<<endl;
        cout<<"Your marks in physics is :"<<physics<<endl;
    }
};

/*

In Base class   |   privated inherited   |   publically inherited     |   protected inherited     |
--------------------------------------------------------------------------------------------------|
private mode:   |    not inherit         |    not inherit             |   not inherit             |
protected mode: |    private inherit     |    protected inherit       |   protected inherit       |
public mode:    |    private inherit     |    public inherit          |   protected inherit       | 

*/



class result : public exam{
    public:
    void display(){
        get_rollnumber();
        get_marks();
        cout<<"Your result is :"<<(maths+physics)/2<<"%"<<endl;
    }
};

/* in multilevel inheritance A is base class of B and B is base class of C
    A--->B--->C
    */


int main(){
   result r;
   r.set_rollnumber(29);
   r.set_marks(90,94);
   r.display(); 

    return 0;
}