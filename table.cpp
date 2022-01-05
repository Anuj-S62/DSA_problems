#include<iostream>
using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent) {
    int cost;
    float temp=((tip_percent+tax_percent)*meal_cost)/100;
    cost=temp+meal_cost;
    cout<<cost;
}

int main(){
    solve(10,2,2);

    return 0;
}
