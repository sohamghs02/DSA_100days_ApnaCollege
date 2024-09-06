#include<iostream>
using namespace std;

int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int bincoeff(int n, int r){
    int ncr = fact(n)/(fact(r) * (fact(n-r)));
    return ncr;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<bincoeff(n, r)<<endl;
    return 0;
}