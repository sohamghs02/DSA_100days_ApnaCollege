#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isprime=true;
    if(n<=1){
        return 0;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime==true) cout<<"Prime number";
    else cout<<"Not a Prime number";
    return 0;
}