#include<iostream>
using namespace std;

class binary{
private:
    string s;
    int chk_bin();

public:
    void get(){
        cout<<"Enter Binary number"<<endl;
        cin>>s;
    }
    void display();

    void change(){
        if(chk_bin()){
            return;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                s[i]='0';
            }
        else{
            s[i]='1';
        }
        cout<<"Changed"<<endl;
    }
    }

};
int binary :: chk_bin(){
    for(int i=0;i<s.length();i++){
        if(!(s[i]=='0' || s[i]=='1')){
            cout<<"Incorrect Binary"<<endl;
            return 1;
        }
    }
    return 0;
}
void binary :: display(){
    if(chk_bin()){
            return;
    }
    cout<<"Displaying the number"<<endl;
    cout<<s<<endl;
    cout<<endl;
}

int main(){
    binary num;
    num.get();
    num.display();
    num.change();
    num.display();

    return 0;
}