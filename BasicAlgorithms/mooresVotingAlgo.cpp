#include <iostream>
#include <vector>
using namespace std;

// Function to find the majority element
int findMajorityElement(const vector<int>& nums) {
    int count = 0, candidate = -1;

    // First Pass: Find a potential candidate
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    // Second Pass: Verify the candidate
    count = 0;
    for (int num : nums) {
        if (num == candidate) count++;
    }

    return (count > nums.size() / 2) ? candidate : -1;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 2, 2, 2};

    int result = findMajorityElement(nums);
    if (result != -1)
        cout << "Majority Element: " << result << endl;
    else
        cout << "No Majority Element found." << endl;

    return 0;
}