#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b){
    int g = gcd(a, b);
    return (a*b) / g;
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<lcm(a,b)<<endl;
    return 0;
}