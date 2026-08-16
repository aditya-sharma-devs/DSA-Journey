#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int arr[] = {7, 2, 9, 4, 1, 8, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k ;
    cout << "Enter k : ";
    cin >> k;
    k = k%n;
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}