#include<iostream>
#include<cmath>
using namespace std;

class point{
    int x,y;
    public:
    // constructor overloading
    //constructor with default a
    point(int a,int b=6){
        x=a;
        y=b;
    }
    // point(int c){
    //     x=c;
    //     y=0;
    // }
    void display(){
        cout<<"point is :"<<x<<","<<y<<endl;
    }
    friend float distance(point p1,point p2);
    
};

float distance(point p1,point p2){
     return sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
}

int main(){
    point p(7);
    point q=point(5,6);
    p.display();
    q.display();
    // cout<<distance(p,q);

    return 0;
}