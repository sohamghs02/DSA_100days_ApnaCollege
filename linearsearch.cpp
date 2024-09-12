#include<bits/stdc++.h>
using namespace std;

int linearsearch(int arr[], int n, int target){
    bool found = false;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            found = true;
        }
    }
    if(found == true){
        return true;
    }
    else{
        return false;
    }
}

//CODE FOR FINDING THE INDEX OF THE ELEMENT IF PRESENT USING LINEAR SEARCH
// int linearsearch(int arr[], int n, int target){
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             return i;
//             break;
//         }
//     }
//     return -1;
// }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    if(linearsearch(arr, n, target)==true){
        cout<<"Element is present";
    }
    else{
        cout<<"Element not found";
    }
    //cout<<linearsearch(arr, n, target)<<endl;
    return 0;
}