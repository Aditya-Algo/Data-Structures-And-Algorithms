#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void findPairSum(const vector<int>& nums, int target) {
    unordered_map<int, int> mp;

    for(int num : nums) {
        int complement = target - num;

        if(mp.find(complement) != mp.end()) {
            cout << "Pair: (" << num <<", " << complement << ")\n";
        }

        // Add the current number to the map
        mp[num++];
    }
}

int main() {
    vector<int> nums = {2, 7, 11, 15, 1, 8, 6, 3, 4};
    int target = 10;

    cout << "Pairs that sum to " << target << " are:\n";
    findPairSum(nums, target);

    return 0;
}