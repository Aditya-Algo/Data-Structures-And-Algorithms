// Leetcode 1249 | Minimum Remove to Make Valid Parentheses

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

string minRemoveToMakeValid(string s) {
    stack<int> st;

    for(int i=0; i<s.length(); i++) {
        if(s[i] == '(') {
            st.push(i);
        }
        else if(s[i] == ')') {
            if(st.empty()) {
                s[i] = '!';
            }
            else {
                st.pop();
            }
        }
    }

    while(!st.empty()) {
        s[st.top()] = '!';
        st.pop();
    }

    // Removal of all !(Problematic parentheses) from the string s
    s.erase(remove(s.begin(), s.end(), '!'), s.end());

    return s;
}


int main() {
    string s = "lee(t(c)o)de)";
    string result = minRemoveToMakeValid(s);
    cout << "Result is " << result << endl;
    return 0;
}