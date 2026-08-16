#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += arr[i];
    // }
    // long long total = (long long)(n+1)*(n+2)/2;
    // cout << "missing = " << total - sum;

    int hash[n+2] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]]++;
    }
    for(int i = 1; i < n+2; i++){
        if(hash[i] == 0){
            cout << i;
            return 0;
        }
    }
    return 0;
}