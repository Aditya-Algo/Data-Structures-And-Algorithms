#include <iostream>
#include <string>
#include <cctype>  // for isdigit function
using namespace std;

class Solution {
    // Helper function to decode the string recursively
    string decodeString(string& s, int& i) {
        string result;  // This will store the decoded string as we go through the input
        while (i < s.length() && s[i] != ']') {  // Continue until we reach the end of the string or a closing bracket ']'
            if (isdigit(s[i])) {  // Check if the current character is a digit
                int k = 0;  // This will store the number (which could be more than one digit)
                
                // Extract the number (k) from the string, which could be multi-digit
                while (i < s.length() && isdigit(s[i])) {
                    k = k * 10 + s[i++] - '0';  // Convert char to integer and accumulate the number
                }
                
                i++;  // Skip the opening bracket '[' after the number
                
                // Recursively decode the string inside the brackets
                string r = decodeString(s, i);
                
                // Append the decoded string 'r' to the result 'k' times
                while (k-- > 0) {
                    result += r;
                }
                
                i++;  // Skip the closing bracket ']'
            } else {
                // If it's a character (not a digit), simply add it to the result string
                result += s[i++];
            }
        }
        return result;  // Return the partially decoded string
    }

public:
    string decodeString(string s) {
        int i = 0;  // This variable keeps track of the current index in the string
        return decodeString(s, i);  // Start the decoding process from index 0
    }
};

int main() {
    Solution solution;
    
    // Test case: You can modify this string to test other cases
    string input = "3[a2[c]]";
    
    // Decode the string
    string output = solution.decodeString(input);
    
    // Print the result
    cout << "Decoded string: " << output << endl;
    
    return 0;
}