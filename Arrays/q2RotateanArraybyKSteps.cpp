#include <iostream>
#include <vector>

using namespace std;

void rev(vector<int>& arr, int start, int end) {
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotate(vector<int>& nums, int k) {
    int sz = nums.size();
    k=k%sz;
    rev(nums, 0, sz-1);
    rev(nums, 0, k-1);
    rev(nums, k, sz-1);
}

int main() {

    vector<int> nums = {12, 3, 45, 6, 78, 32, 4, 2, 37, 89};
    int k = 3;

    rotate(nums, k);

    for(int i : nums) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}