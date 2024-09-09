#include<iostream>
using namespace std;

int rev(int n){
    int rem=0,rev=0;
    while(n>0){
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    return rev;
}
int main(){
    int num;
    cin>>num;
    cout<<rev(num)<<endl;
    return 0;
}