#include<iostream>
using namespace std;

class Student{
    protected:
    int roll_number;
    public:
    void set_number(int a){
        roll_number=a;
    }
    void print_number(){
        cout<<"Your roll number is: "<<roll_number<<endl;
    }
};

class test :virtual public Student{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2){
        maths=m1;
        physics=m2;
    }
    void print_marks(){
        cout<<"Your marks is:-"<<endl
            <<"Maths: "<<maths<<endl
            <<"Physics: "<<physics<<endl;
    }
};

class sport : virtual public Student{
    protected:
    float score;
    public:
    void set_score(int s){
        score = s;
    }
    void print_score(){
        cout<<"your sport score is: "<<score<<endl;
    }
};

class result : virtual public test,virtual public sport{
    public:
      void display(){
          print_number();
          print_marks();
          print_score();
          cout<<"your total is :"<<score+maths+physics;
      }
};

int main(){
    result anuj;
    anuj.set_number(45);
    anuj.set_marks(98,45.6);
    anuj.set_score(8);
    anuj.display();

    
    return 0;
}