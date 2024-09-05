#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    if(a>=18) cout<<"Should have driving license";
    else if(a>=13 && a<=17) cout<<"Age requiremnet not met";
    else cout<<"Child";
    return 0;
}