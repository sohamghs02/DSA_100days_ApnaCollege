#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    cout<<maxi<<" "<<mini<<endl;
    return 0;
}

//code can also be done usng just a min,max function as shown below:

// int maxi = INT_MIN;
// int mini = INT_MAX;
// for(int i=0;i<n;i++){
//     maxi = max(arr[i], maxi);
//     mini = min(arr[i], mini);
// }
// cout<<maxi<<" "<<mini<<endl;