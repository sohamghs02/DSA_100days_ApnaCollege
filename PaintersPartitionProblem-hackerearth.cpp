#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int mid) { 
    int painters = 1, time = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] > mid){
            return false;
        }
        if(time + arr[i] <= mid) {
            time+=arr[i];
        }
        else {
            painters++;
            time=arr[i];
        }
    }
    return painters <= m ? true : false;
}

int minTimetoPaint(vector<int> &arr, int n, int m) {
    if(m > n) {
        return -1;
    }
    int sum = 0, maxVal = INT_MIN;
    for(int i=0; i<n; i++) {
        sum+=arr[i];
        maxVal = max(maxVal, arr[i]);
    }
    int st=maxVal, end=sum, ans=-1;//range  of possible answers

    while(st <= end) {
        int mid = st + (end-st)/2;
        if(isPossible(arr,n,m,mid)) { //valid
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
    vector<int> arr = {40, 30, 10, 20};
    int n=4, m=2;
    cout<<minTimetoPaint(arr, n, m)<<endl;
    return 0;
}