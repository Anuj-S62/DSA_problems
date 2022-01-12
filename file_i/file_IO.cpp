#include<bits/stdc++.h>
#include<fstream>
using namespace std;


int main(){
    // ofstream hout("thisfile.txt");  // for writing in file  //opening file using inbuilt constructor
    // string st;
    // cout<<"Enter your name"<<endl;
    // getline(cin,st);
    // hout<<st;  // '<<' is used print data in file
    // hout.close();

    // ifstream hin("thisfile.txt");  // for reading the file
    // string str;
    // getline(hin,str);   // getting input from file 
    // cout<<str<<endl;



    ofstream out;
    out.open("thisfile.txt");  // opening file using inbuilt class function
    out<<"hello"<<endl;
    out<<"anuj"<<endl;
    out.close();

    ifstream in;
    in.open("thisfile.txt");

    string st;
    while(in.eof()==0){
        getline(in,st);
        cout<<st;
    }

    out.close();




    return 0;
}