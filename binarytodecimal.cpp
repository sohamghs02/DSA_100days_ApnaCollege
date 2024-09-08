#include<iostream>
using namespace std;

int bintodec(int n){
    int ans = 0, pow = 1;
    while(n > 0){
        int rem = n%10;
        n = n/10;
        ans = ans+(rem*pow);
        pow = pow*2;
    }
    return ans;
}
int main(){
    int binnum;
    cin>>binnum;
    cout<<bintodec(binnum)<<endl;
    return 0;
}