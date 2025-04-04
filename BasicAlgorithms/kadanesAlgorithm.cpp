// find the contiguous subarray with the maximum sum

#include <iostream>
#include <vector>
using namespace std;

int kadaneAlgorithm(vector<int> arr) {
    int maxSum = arr[0]; // Assume first element is the max
    int currentSum = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        // Add current element to the currentSum or start new from current element
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum); // Update maxSum if needed
    }

    return maxSum;
}

int main() {
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};

    int maxSubarraySum = kadaneAlgorithm(arr);
    cout << "Maximum Subarray Sum is: " << maxSubarraySum << endl;

    return 0;
}