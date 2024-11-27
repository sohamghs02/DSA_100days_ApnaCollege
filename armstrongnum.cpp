#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x = n;
	int c = 0;
	while(x > 0){
		int rem = x%10;
		c++;
		x = x/10;
	}

	int y = n;
	int sum = 0;
	while(y>0){
		int rem = y%10;
		sum = sum+pow(rem,c);
		y = y/10;
	}

	if(sum == n){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
}