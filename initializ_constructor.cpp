#include <iostream>
using namespace std;

class test
{
    int a, b;   //-->a will be initialised first

public: 
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j) : b(j),a(i)
    // test(int i, int j) : b(j+a),a(i)
    test(int i, int j) : b(j),a(i+b)  //->will throw error bcoz value of "b" is not there in setting up the value of "a"
    {
        cout << "constructor is called" << endl;
        cout << "Value of a is: " << a << endl
             << "Value of b is: " << b << endl;
    }
};

int main(){
    test a(2,3);

    return 0;
}