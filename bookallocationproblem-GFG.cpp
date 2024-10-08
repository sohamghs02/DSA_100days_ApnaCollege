#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxallowedpages) { //mid==maxallowedpages
    int pages = 0, students = 1;
    for(int i=0; i<n; i++) {
        if(arr[i] > maxallowedpages){
            return false;
        }
        if(pages + arr[i] <= maxallowedpages) {
            pages+=arr[i];
        }
        else {
            students++;
            pages=arr[i];
        }
    }
    return students > m ? false : true;
}

int allocatebooks(vector<int> &arr, int n, int m) {
    if(m > n) {
        return -1;
    }
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum+=arr[i];
    }
    int st=0, end=sum;//range  of possible answers
    int ans=-1;

    while(st <= end) {
        int mid = st + (end-st)/2;
        if(isValid(arr,n,m,mid)) { //valid
            ans = mid;
            end = mid-1;
        }
        else { //invalid
            st = mid+1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2, 1, 3, 4};
    int n=4, m=2;
    cout<<allocatebooks(arr, n, m)<<endl;
    return 0;
}