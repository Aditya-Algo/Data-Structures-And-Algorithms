// Leetcode 151. Reverse Words in String

#include <iostream>
#include <algorithm>
using namespace std;

string revWordsinString(string s) {
    int n=s.length();
    string ans="";

    reverse(s.begin(), s.end());

    for(int i=0; i<n; i++) {
        string word="";
        while(i<n && s[i]!=' ') {
            word+=s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        
        if(word.length() > 0) {
            ans += " " + word;
        }
    }

    return ans.substr(1);

}


int main() {

    string input = "The Sky is Blue";

    string result = revWordsinString(input);

    cout << "Reverse word in string is " << result << endl;

    return 0;
}