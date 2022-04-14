#include<bits/stdc++.h>
using namespace std;

long solve(int A, int B) {
    long long int high=B/7,low=(A+6)/7; low*=7; high*=7; 
    long long int n=(high-low+7)/7;
    return (n*(high+low))/2;
}


int main(){
	

	return 0;
}