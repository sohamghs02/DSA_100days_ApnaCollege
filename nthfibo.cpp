#include<iostream>
using namespace std;

int nfibo(int n){
    int a=0,b=1;
    int c=a+b;
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    cout<<nfibo(n)<<endl;
    return 0;
} 