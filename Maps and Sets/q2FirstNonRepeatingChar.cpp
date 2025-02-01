#include <bits/stdc++.h>
using namespace std;

int sol(string &str) {
    unordered_map<char, int> map;
    for(int i=0; i<str.size(); i++) {
        char ch = str[i];
        map[ch]++;
    }

    for(int i=0; i<str.size(); i++) {
        char ch = str[i];
        if(map[ch]==1) {
            return i;
        }
    }
    return -1;
}

int main() {
    string s;
    cout << "Enter a String: ";
    cin >> s;
    cout << sol(s) << endl;
}