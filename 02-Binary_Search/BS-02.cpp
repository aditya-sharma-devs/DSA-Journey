#include <iostream>
#include <vector>

using namespace std;

// Lower Bound, or we could also use predefined function lower_bound();
// LOWER BOUND IS BASICALLY SMALLEST INDEX IN ARRAY SUCH THAT , ARR[IDX] >= TARGET;
int lowerBound(vector<int> &arr, int target)
{
    int n = arr.size();
    int low = 0;
    int ans = n;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= target)
        {
            ans = min(mid, ans);
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

// Upper Bound, or we could also use predefined function upper_bound();
// UPPER BOUND IS BASICALLY SMALLEST INDEX IN ARRAY SUCH THAT , ARR[IDX] > TARGET;
int upperBound(vector<int> &arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > target)
        {
            ans = min(ans, mid);
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

// PROBLEM - SEARCH INSERT PORSITION FOR K;
int searchInsertK(vector<int> &arr, int k)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
    // we return low beacuse low , will remain at mid+1 position as we dont find the k at mid , and then if k >= arr[mid], high moves to mid-1; which passes the low and loop stops , so we could return low here! AS WE WERE FINDING THE LOWEST INDEX FOR THE K;
}

int main()
{
    vector<int> v = {2, 3, 7, 10, 11, 11, 25};
    // int target = 10;
    int target = 11;
    int k = 4;
    cout << "Lower Bound is : ";
    cout << lowerBound(v, target) << endl;
    cout << "Upper Bound is : ";
    cout << upperBound(v, target) << endl;
    cout << "Insert Position for k is : ";
    cout << searchInsertK(v, k);
}