#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count = 0;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] < nums[i-1]) {
                count++;
                if(count > 1) return false;
                if(i==1 ||nums[i-2] <= nums[i]) nums[i-1] = nums[i];
                else nums[i] = nums[i-1]; 
            }
        }
        return true;
    }
};

int main() {

    Solution solution;
    vector<int> nums = {4, 2, 3};

    if(solution.checkPossibility(nums)) {
        cout << "The array can be made non-decreasing with at most one modification." << endl;
    } else {
        cout << "The array cannot be made non-decreasing with at most one modification." << endl;
    }

    return 0;
}