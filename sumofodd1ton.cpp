#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}