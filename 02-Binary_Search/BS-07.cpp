#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// PROBLEM - Find how many times Array is Rotated! (Only for unique elements)
int findKRotation(vector<int> &nums){
    int n = nums.size();
    int low = 0;
    int high = n-1;
    int index = -1;
    int ans = INT_MAX;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(nums[low] <= nums[mid]){
            if(nums[low] < ans){
                ans = nums[low];
                index = low;
            }
            low = mid+1;
        }else{
            if(nums[mid] < ans){
                ans = nums[mid];
                index = mid;
            }
            high = mid-1;
        }
    }
    return index;
}

int main(){
    vector<int> nums = {4,5,6,7,1,2,3};
    cout << "Rotations of array is : " << findKRotation(nums) << endl;
}