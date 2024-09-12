#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int max_idx, min_idx; 
    for(int i=0; i<n; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
            max_idx = i;
        }
        if(arr[i] < mini){
            mini = arr[i];
            min_idx = i;
        }
    }
    // Swap the elements at the indices
    swap(arr[max_idx], arr[min_idx]);    
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}