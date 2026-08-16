#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int arr[] = {4, 2, 5, 2, 3, 4, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    // unordered_set<int> s;
    // for(int i = 0; i < n; i++){
    //     s.insert(arr[i]);
    // }
    // for(const auto& x : s){
    //     cout << x << " ";
    // }
    unordered_set <int> uset;
    for(int i = 0; i < n; i++){
        if(uset.find(arr[i]) == uset.end()){
            cout << arr[i] << " ";
            uset.insert(arr[i]);
        }
    }
}