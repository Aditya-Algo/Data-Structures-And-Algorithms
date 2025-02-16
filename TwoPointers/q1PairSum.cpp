#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

void findPairSum(const vector<int>& nums, int target) {
    unordered_map<int, int> map;
    vector<pair<int, int>> pairs;

    // Find pairs and store them in the vector
    for (int num : nums) {
        int complement = target - num;

        if (map.find(complement) != map.end()) {
            // Always store the smaller number first for consistency
            pairs.push_back({min(num, complement), max(num, complement)});
        }
        map[num]++;
    }

    // Sort the pairs by the first element (ascending order)
    sort(pairs.begin(), pairs.end());

    // Print the sorted pairs
    for (auto& pair : pairs) {
        cout << "Pair found: (" << pair.first << ", " << pair.second << ")\n";
    }
}

int main() {
    vector<int> nums = {2, 7, 11, 15, 1, 8, 6, 3, 4};
    int target = 10;

    cout << "Pairs that sum to " << target << " are:\n";
    findPairSum(nums, target);

    return 0;
}