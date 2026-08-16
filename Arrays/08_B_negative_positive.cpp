#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, -2, 3, -4, 5, -6, 7, -9, 10, 15, -100, -5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 1; 
    int j = 0;
    while(i < n){
        if(arr[j] > 0){
            if(arr[i] < 0){
                swap(arr[i],arr[j]);
                j++;
            }
        }else{
            j++;
        }
        i++;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}