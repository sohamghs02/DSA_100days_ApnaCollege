#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    double f=1.0;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    cout<<f;
    return 0;
}