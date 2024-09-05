#include<iostream>
using namespace std;

int main(){
    int a=0,b=1;
    int n;
    cin>>n;
    int c=a+b;
    if(n==1){
        cout<<a;
    }
    else if(n==2){
        cout<<a<<" "<<b;
    }
    else{
        cout<<a<<" "<<b<<" ";
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
            cout<<c<<" ";
        }
    }
    return 0;
}