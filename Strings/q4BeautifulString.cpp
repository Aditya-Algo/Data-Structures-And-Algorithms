#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string generate(int n, bool zero) {
    string ans = "";
    if (n == 0) return ans;

    // Initialize with either '0' or '1' based on the value of zero
    if (zero) {
        ans += '0';
        n--;
    } else {
        ans += '1';
        n--;
    }

    // Alternate the characters for the remaining positions
    while (n != 0) {
        char temp = (ans[ans.size() - 1] == '0') ? '1' : '0';
        ans += temp;
        n--;
    }
    
    return ans;
}

// Corrected function name: change
int change(string str, string s, int n) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] != s[i]) {
            ans++;
        }
    }
    return ans;
}

// Function to make the string beautiful
int makeBeautiful(string str) {
    int n = str.size();

    // Generate two alternate patterns: one starting with '0' and the other with '1'
    string g1 = generate(n, true);
    int diff1 = change(str, g1, n);

    string g2 = generate(n, false);
    int diff2 = change(str, g2, n);

    // Return the minimum number of changes to make the string beautiful
    return min(diff1, diff2);
}

int main() {
    // Hardcoded string
    string str = "1110";  // Replace this with any string you want to test

    int result = makeBeautiful(str);
    cout << "Minimum changes to make the string beautiful: " << result << endl;

    return 0;
}