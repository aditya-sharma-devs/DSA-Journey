#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {7, 2, 9, 4, 1, 8, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num = arr[0];
    for(int i = 0; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = num;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}