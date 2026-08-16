#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {0, 1, 0, 3, 12, 0, 5, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int j = -1;
    while(i < n){
        if(arr[i] == 0){
            i++;
        }else{
            j++;
            arr[j] = arr[i];
            i++;
        }
    }
    for(int i = j+1; i < n; i++){
        arr[i] = 0;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}