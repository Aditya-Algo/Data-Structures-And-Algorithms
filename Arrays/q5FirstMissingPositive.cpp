// Leetcode 41. First Missing Positive

#include <iostream>
#include <vector>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
    int n = nums.size();

    for(int i=0; i<n; i++) {
        int element = nums[i];
        if(element>=1 && element<=n) {
            int chair = element - 1;
            if(nums[chair] != element) {
                swap(nums[chair], nums[i]);
                i--;
            }
        }
    }
    for(int i=0; i<n; i++) {
        if(i+1 != nums[i]) return i+1;
    }
    return n+1;
}

int main() {

    vector<int> nums = {1,2,0};

    int result = firstMissingPositive(nums);

    cout << result << endl;

    return 0;
}