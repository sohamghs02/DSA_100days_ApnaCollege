#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int n, int target){
    int st = 0, end = n-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(target>arr[mid]){
            st = mid+1;
        }
        else if(target<arr[mid]){
            end = mid-1;
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
    int result = binarySearch(arr, n, target);
    cout<<result<<endl;
    return 0;
}