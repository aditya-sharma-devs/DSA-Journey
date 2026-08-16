#include <iostream>
#include <vector>
using namespace std;

// THIS IS THE ITERATIVE WAY;
bool binarySearch(vector<int> &arr, int k)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k)
            return true;
        else if (arr[mid] < k)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}

// THIS IS RECURSIVE BINARY SEARCH;
bool recursiveBinarySearch(vector<int> &arr, int low, int high, int k){
    int mid = low + (high-low)/2;
    if(arr[mid] == k)return true;
    else if(arr[mid] > k)return recursiveBinarySearch(arr, low, mid-1, k);
    else return recursiveBinarySearch(arr, mid+1, high, k);
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 6};
    int k = 6;
    int n = v.size();
    int low = 0;
    int high = n-1;
    cout << "Iterative ans : " <<binarySearch(v, k) << endl;
    cout << "Recursive ans : " << recursiveBinarySearch(v, low, high, k);
}