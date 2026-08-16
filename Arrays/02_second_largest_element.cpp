#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {12, 45, 7, 89, 23, 56, 90, 34};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxi = INT_MIN;
    int second_maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > maxi){
            second_maxi = maxi;
            maxi = max(maxi,arr[i]);
        }else if(arr[i] < maxi && arr[i] > second_maxi){
            second_maxi = max(second_maxi,arr[i]);
        }
    }
    if(second_maxi != INT_MIN)cout << second_maxi;
}