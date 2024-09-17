#include<bits/stdc++.h>
using namespace std;

//Brute Force approach
// vector<int> pairSum(vector<int>& arr, int n, int target){
//     vector<int>ans;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==target){
//                 ans.push_back(arr[i]);
//                 ans.push_back(arr[j]); 
//                 return ans;               
//             }
//         }
//     }
//     return ans;
// }

//Optimal Approach
vector<int> pairSum(vector<int>& arr, int n, int target){
    vector<int>ans;
    int i=0,j=n-1;
    while(i<j){
        int psum=arr[i]+arr[j];
        if(psum>target){
            j--;
        }
        else if(psum<target){
            i++;
        }
        else{
            ans.push_back(arr[i]);
            ans.push_back(arr[j]); 
            return ans;           
        }
    }
    return ans;
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
    vector<int>ans = pairSum(arr, n, target);
    // if(ans.size()==0){
    //     cout<<"No pair found";
    // }
    // else{
    //     cout<<ans[0]<<" "<<ans[1];
    // }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}