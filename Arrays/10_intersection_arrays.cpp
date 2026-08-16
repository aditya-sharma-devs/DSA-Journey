#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {-1, 1, 3, 5, 7, 9};
    int arr2[] = {-1, 2, 3, 5, 6, 8, 9};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    int i = 0; int j = 0;

    vector<int> ans;
    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            i++;
        }else if(arr1[i] > arr2[j]){
            j++;
        }else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}