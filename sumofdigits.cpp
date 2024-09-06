#include<iostream>
using namespace std;

int sumofdigit(int n){
    int rem=0,sum=0;
    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<sumofdigit(n)<<endl;
    return 0;
}