#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {4, 2, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 1;
    int j = 0;
    while(i < n){
        if(arr[i] == arr[j]){
            i++;
        }else{
            j++;
            arr[j] = arr[i];
            i++;
        }
    }
    n = j+1;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}