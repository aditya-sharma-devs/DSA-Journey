#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {0, 1, 0, 3, 12, 0, 5, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = n-1;
    int j = n;
    while(i >= 0){
        if(arr[i] == 0){
            i--;
        }else{
            j--;
            arr[j] = arr[i];
            i--;
        }
    }
    for(int i = 0; i < j; i++){
        arr[i] = 0;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}