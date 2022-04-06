#include <bits/stdc++.h>
using namespace std;
int isPrime(int n){
	if(n==1) return 2;
	if(n==2) return 1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int prime(int x){
	int ans;
	while(!isPrime(x)){
		x++;
	}
	ans = x;
	return x;
}
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	while(num){
		int a;
		cin>>a;
		int k;
		int s;
		cin>>k;
		cin>>s;
		int l= min(k,s);
		int r = max (k,s);
		int p=0;
		if(isPrime(a)) p =a;
		if(p!=a){

		for(int i=l;i<=r;i++){
			if(isPrime(i)){
				p = i;
				break;
			}
		}
		if(abs(p-k)<abs(p-s)) cout<<"KANISHK"<<endl;
		else if(abs(p-k)>abs(p-s)) cout<<"SURENDER"<<endl;
		else cout<<"DRAW"<<endl;
		}

		num--;
	}
	return 0;
}