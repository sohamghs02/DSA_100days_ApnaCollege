#include<iostream>
#include<vector>
using namespace std;

int linear(vector<int>& arr, int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            return i;
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
    cout<<linear(arr, target)<<endl;
    return 0;
}