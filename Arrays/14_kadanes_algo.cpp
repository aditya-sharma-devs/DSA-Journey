#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, -2, 3, 5, -1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxSum = INT_MIN;
    int start = 0; 
    int temp_start = 0; 
    int end = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(sum < 0){
            sum = 0; 
            temp_start = i;
        }
        sum += arr[i];
        if(sum > maxSum){
            maxSum = sum;
            start = temp_start;
            end = i;
        }
    }
    cout << "Max sum sub-array is : { ";
    for(int i = start; i <= end; i++){
        cout << arr[i] << ", ";
    }
    cout << "}" << endl << "Max sum is : ";
    cout << maxSum;
}