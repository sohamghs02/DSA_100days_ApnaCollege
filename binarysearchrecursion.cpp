#include<bits/stdc++.h>
using namespace std;

int binarySearchrec(vector<int> &arr, int target, int st, int end){
    int mid = st + (end-st)/2;
    while(st<=end){
        if(target>arr[mid]){
            return binarySearchrec(arr, target, mid+1, end);
        }
        else if(target<arr[mid]){
            return binarySearchrec(arr, target, st, mid-1);
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int st = 0;
    int end = n-1;
    int result = binarySearchrec(arr, target, st, end);
    cout<<result<<endl;
    return 0;
}