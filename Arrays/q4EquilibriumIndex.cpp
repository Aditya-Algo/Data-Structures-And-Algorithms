// Leetcode 724. Find Pivot Index

#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int totalSum=0, leftSum=0;

    // Calculate total sum
    for(int i : nums) {
        totalSum = totalSum + i;
    }

    // Travarse the Vector
    for(int i=0; i<nums.size(); i++) {
        // Check leftSum == RightSum or not
        if(leftSum == totalSum - leftSum - nums[i]) {
            return i;   // if equal then return current index
        }
        leftSum = leftSum + nums[i]; // if not then add curent index element ito leftSum.
    }
    return -1; // If equbrilium index not file means leftSum and RightSum are not equal then return -1.

}

int main() {

    vector<int> nums = {1,7,3,6,5,6};

    int result = pivotIndex(nums);

    cout << result << endl;

    return 0;
}