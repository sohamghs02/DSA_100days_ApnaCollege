#include<iostream>
using namespace std;

int dectobin(int n){
    int ans = 0, pow = 1;
    while(n > 0){
        int rem = n%2;
        n = n/2;
        ans = ans+(rem*pow);
        pow = pow*10;
    }
    return ans;
}
int main(){
    int decnum;
    cin>>decnum;
    cout<<dectobin(decnum)<<endl;
    return 0;
}