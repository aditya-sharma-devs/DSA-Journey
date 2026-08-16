#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {-1, 1, 3, 5, 7, 9};
    int arr2[] = {2, 3, 5, 6, 8, 9};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    set<int> st;
    for(int i = 0; i < n; i++){
        st.insert(arr1[i]);
    }
    for(int i = 0; i < m; i++){
        st.insert(arr2[i]);
    }
    for(const auto& x : st){
        cout << x << " ";
    }
}