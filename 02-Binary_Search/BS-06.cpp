#include<iostream>
#include<vector>
#include<climits> //for INT_MIN and INT_MAX type things
#include<algorithm> //for min(), max() functions

using namespace std;

// PROBLEM - Find Min in Rotated Sorted Array;  
int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int mini = INT_MAX;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[low] <= nums[mid]) {
                mini = min({mini, nums[low], nums[mid]});
                low = mid+1;
            }
            else {
                mini = min({mini, nums[high], nums[mid]});
                high = mid-1;
            }
        }
        return mini;
    }

int main(){
    vector<int> nums = {3,4,5,1,2};
    cout << findMin(nums);
}