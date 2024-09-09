#include<iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if( n > 0 && (n & (n - 1)) == 0){
        return true;
    }
    else return false;
    //return n > 0 && (n & (n - 1)) == 0;
}
int main(){
    int n;
    cin>>n;
    cout<<isPowerOfTwo(n)<<endl;
    return 0;
}