#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {7, 2, 9, 4, 1, 8, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k ;
    cout << "Enter k : ";
    cin >> k;
    k = k%n;
    int temp[k];
    for(int i = 0; i < k; i++){
        temp[i] = arr[i];
    }
    for(int i = k; i < n; i++){
        arr[i-k] = arr[i];
    }
    for(int i = 0; i < k; i++){
        arr[n-k + i] = temp[i];
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}