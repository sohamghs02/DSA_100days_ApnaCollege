#include<bits/stdc++.h>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else if(ch >= 'A' && ch <= 'Z'){
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n){
    int st = 0, end = n-1;
    while(st <= end){
        if(toLowerCase(a[st]) != toLowerCase(a[end])){
            return 0;
        }
        else{
            st++;
            end--;
        }
    }
    return 1;
}

int main(){
    int n;
    cin >> n;
    char a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout<<checkPalindrome(a, n)<<endl;
    return 0;
}