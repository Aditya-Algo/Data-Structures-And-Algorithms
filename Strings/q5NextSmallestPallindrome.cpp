#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> generateNextPalindrome(int a[], int n) {
        vector<int> ans;
        int carry, solved = 0;
        
        // First, try to form the next palindrome by reflecting the left half of the array
        for (int i = n / 2; i < n; i++) {
            if (a[i] < a[n - i - 1]) {
                a[i] = a[n - i - 1];
                // Reflect the right half of the array to the left half
                for (int j = i + 1; j < n; j++) {
                    a[j] = a[n - j - 1];
                }
                solved = 1;
                break;
            } else if (a[i] > a[n - i - 1]) {
                break;
            }
        }

        // If the next palindrome is successfully formed
        if (solved == 1) {
            for (int i = 0; i < n; i++) {
                ans.push_back(a[i]);
            }
            return ans;
        }

        // Decremental case: when no palindrome was found, increment to the next palindrome
        else {
            carry = 1;
            // Handle the middle of the array (for odd length arrays, it's the central element)
            for (int i = (n - 1) / 2; i >= 0; i--) {
                if (a[i] + carry == 10) {
                    a[i] = 0;
                    carry = 1;
                } else {
                    a[i]++;
                    carry = 0;
                    break;
                }
            }

            // If there is still a carry, we need to add a 1 at the beginning
            if (carry == 1) {
                ans.push_back(1);
            }

            // Push the updated array into the result vector
            for (int i = 0; i < n; i++) {
                ans.push_back(a[i]);
            }

            // If there was a carry, the number of digits has increased
            if (carry == 1) {
                n++;
            }

            // Reflect the right half to form a palindrome
            for (int i = (n + 1) / 2; i < n; i++) {
                ans[i] = ans[n - i - 1];
            }

            return ans;
        }
    }
};

// Test the function
int main() {
    Solution sol;
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    
    vector<int> result = sol.generateNextPalindrome(a, n);
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}