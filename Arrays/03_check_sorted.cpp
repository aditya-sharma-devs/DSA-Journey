#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 7, 5, 6, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = true;
    for(int i = 1; i < n; i++){
        if(arr[i] >= arr[i-1]){
            continue;
        }else{
            flag = false;
            break;
        }
    }
    if(flag == true)cout << "sorted";
    if(flag == false)cout << "Not sorted";
}