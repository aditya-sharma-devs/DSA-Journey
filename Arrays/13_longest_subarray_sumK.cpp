#include<bits/stdc++.h>
using namespace std;

// BRUTE FORCE (O(N^2)) APPROACH;
// int main(){
//     int arr[] = {1, 2, 1, 1, 1};
//     int k = 3;
//     int maxi = 0;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0; i < n; i++){
//         int count = 0;
//         int sum = 0;
//         for(int j = i; j < n; j++){
//             sum += arr[j];
//             count++;
//             if(sum == k){
//                 maxi = max(maxi, count);
//                 break;
//             }
//         }
//     }
//     cout << maxi;
// }


// OPTIMAL SLIDING WINDOW APPROACH (O(N));
// int main(){
//     int arr[] = {1, 2, 1, 1, 1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = 3;
//     int j = 0; 
//     int sum = 0;
//     int count = 0;
//     int maxi = 0;
//     for(int i = 0; i < n; i++){
//         sum += arr[i];
//         count++;
//         while(sum > k){
//             sum -= arr[j];
//             count--;
//             j++;
//         }
//         if(sum == k){
//             maxi = max(count, maxi);
//         }
//     }
//     cout << maxi;
// }


// BETTER HASH AND PREFIX SUM APPROACH (O(NlogN));
int main(){
    int arr[] = {1, 2, 1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int sum = 0;
    int maxLen = 0;
    unordered_map<int,int> preSumMap;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum == k){
            maxLen = max(maxLen, i+1);
        }
        int rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
            maxLen = max(maxLen, i - preSumMap[rem]);
        } 
        preSumMap[sum] = i;
    }
    cout << maxLen;
}