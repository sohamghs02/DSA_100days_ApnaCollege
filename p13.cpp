#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ch='A';    
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=1;k<=n-i+1;k++){
            cout<<ch;            
        }
        ch++;
        cout<<endl;
    }
    return 0;
}