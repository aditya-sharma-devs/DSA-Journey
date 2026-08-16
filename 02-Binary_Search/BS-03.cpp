#include <iostream>
#include <vector>
#include<algorithm> //for lower_bound & upper_bound;
using namespace std;

// PROBLEM - FIND FIRST AND LAST OCCURENCE IN SORTED ARRAY
vector<int> find(vector<int> &arr, int x)
{
    int n = arr.size();
    int first = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
    int last = upper_bound(arr.begin(), arr.end(), x) - arr.begin() - 1;
    if (last == n || arr[last] != x)
        return {-1, -1};
    return {first, last};
}

// PROBLEM - FIND TOTAL OCCURENCES
int countFreq(vector<int>& arr, int target) {
        int n = arr.size();
        int first = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
        int last = upper_bound(arr.begin(), arr.end(), target) - arr.begin() - 1;
        if(last == n || arr[last] != target)return 0;
        return last-first+1;
    }

int main(){
    vector<int> arr = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int x = 5;
    vector<int> ans = find(arr, x);
    cout << "First and Last is : " << endl;
    // for(auto it = ans.begin(); it != ans.end(); it++){
    //     cout << *it << " ";
    // }
    for(auto it : ans){
        cout << it << " ";
    }
    cout << endl << endl;
    cout << "Total Occurences : " << endl;
    cout << countFreq(arr, x);
}