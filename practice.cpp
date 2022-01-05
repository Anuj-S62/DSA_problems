// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// struct Student{
//     string first_name;
//     string last_name;
//     int age;
//     int standard;
// };

// int main() {
//     Student st;
    
//     cin >> st.age >> st.first_name >> st.last_name >> st.standard;
//     cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
//     return 0;
// }


// #include <iostream>
// #include<string>
// using namespace std;
 
 
// int main(){
//     // char a[67];
//     string a;
//     getline(cin,a);
//     // cin.getline(a,67);
//     cout<<a;
//     return 0;
// }



//Operator Overloading

#include<iostream>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(string s)
    {
        int v1=0;
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;
        b=v2;
    }
};

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"
Complex operator +(Complex &o1,Complex &o2){
    Complex res;
    res.a=o1.a+o2.a;
    res.b=o1.b+o2.b;
    return res;
}

Complex operator <<(Complex &x){
    printf("%d+i%d",x.a,x.b);
}

int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}
