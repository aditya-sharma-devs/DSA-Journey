#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {12, 45, 7, 89, 23, 56, 90, 34};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxi = INT_MIN;
    int j = n-1;
    int i = 0;
    while(i <= j){
        maxi = max(maxi,max(arr[i++],arr[j--]));
    }
    cout << maxi;
}