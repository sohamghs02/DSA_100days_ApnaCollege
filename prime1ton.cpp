#include<iostream>
using namespace std;

int isPrime(int n){
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
    if(isprime==true){
        return 1;
    }
    else{
        return 0;
    }
}
void primerange(int n){
    for(int i=1;i<=n;i++){
        if(isPrime(i)==1){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    primerange(n);
    return 0;
}