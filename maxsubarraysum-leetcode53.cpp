#include<bits/stdc++.h>
using namespace std;

//Kadane's Algorithm
int MaxSubarraySum(int arr[], int n){
    int currSum=0, maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
}

//BRUTE FORCE APPROACH
// int MaxSubarraySum(int arr[], int n){
//     int maxSum;
//     for(int st=0;st<n;st++){
//         int currSum=0;
//         for(int end=st;end<n;end++){
//             currSum+=arr[end];
//             maxSum = max(currSum, maxSum);
//         }
//     }
//     return maxSum;
// }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<MaxSubarraySum(arr,n)<<endl;    
    return 0;
}