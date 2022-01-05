#include <bits/stdc++.h>
#include<string>
using namespace std;
typedef long long int ll;

class student{
    private:
      int rollno,phNo;
    public:
      int marks;
      string address;
    void set(){
        int ph;
        int roll;
        cout<<"Enter Roll no and Phone no."<<endl;
        cin>>roll>>ph;
        rollno=roll;
        phNo=ph;
    }
    void get(){
        cout<<"\nroll no is: "<<rollno<<"\nphone no. is: "<<"\n address is : "<<address<<"\n marks is : "<<marks<<endl;
    }
    void setpublic();
};

void student::setpublic(){
    string add;
    cout<<"Enter address of student"<<endl;
    cout<<"hello1"<<endl;
    cin.ignore();
    getline(cin,add);
    cout<<"hello2"<<endl;
    cout<<"Enter marks of student"<<endl;
    int mark;
    cin>>mark;   
    address=add;
    marks=mark;
}
 
int main(){
    student anuj;
    anuj.set();
    anuj.setpublic();   
    anuj.get();
    return 0;
}