#include <iostream>
using namespace std;

int main(){
    int n;    
    cin >> n;
    //Print upper half of butterfly    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int k=1;k<=2*(n-i);k++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    // Print the lower half of the butterfly
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int k=1;k<=2*(n-i);k++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}