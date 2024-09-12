#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int n){
    int maxi = INT_MIN;
    int idx = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
            idx = i;
        }
    }
    return idx;
}
int smallest(int arr[], int n){
    int mini = INT_MAX;
    int idx = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<mini){
            mini = arr[i];
            idx = i;
        }
    }
    return idx;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largest(arr, n)<<endl;
    cout<<smallest(arr, n)<<endl;
    return 0;
}