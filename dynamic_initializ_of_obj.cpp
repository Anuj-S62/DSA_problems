#include<iostream>
using namespace std;

class bankdeposite{
    int principal;
    int year;
    float interest;
    float returnvalue;
    public:
        bankdeposite();
        bankdeposite(int a,int y,float r);
        bankdeposite(int a,int y,int r);
        void display(){
            cout<<returnvalue<<endl; 
        }


};
    bankdeposite :: bankdeposite(int a,int y,float r){
       principal=a;
       year=y;
       interest=r;
       returnvalue=a;
       for(int i=0;i<y;i++){
           returnvalue=returnvalue*(1+r);
       }
    }
    bankdeposite :: bankdeposite(int a,int y,int r){
       principal=a;
       year=y;
       interest=float(r)/100;
       returnvalue=a;
       for(int i=0;i<y;i++){
           returnvalue=returnvalue*(1+r);
       }
    }
    bankdeposite :: bankdeposite(){
        principal=0;
       year=0;
       interest=0;
       returnvalue=0;
    }

int main(){
    bankdeposite b1(100,1,0.04f);
    b1.display();

    return 0;
}

