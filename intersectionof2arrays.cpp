#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(int arr1[], int n, int arr2[], int m){
    vector<int>ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                ans.push_back(arr2[j]);
            }
        }
    }
    return ans;
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int>ans=intersection(arr1, n, arr2, m);    
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;    
    return 0;
}