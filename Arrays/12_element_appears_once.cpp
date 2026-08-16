#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 3, 5, 2, 3, -1, -1, 5, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int xor1 = 0;
    for(int i = 0; i < n; i++){
        xor1 ^= arr[i];
    }
    cout << xor1;
}