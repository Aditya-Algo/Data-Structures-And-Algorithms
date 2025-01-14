#include <iostream>
#include <vector>
using namespace std;

void myFun(vector<char>& s) {
    int start = 0, end = s.size() - 1;
    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

int main() {
    vector<char> s = {'h', 'e', 'l', 'l', '0'};
    myFun(s);

    cout << "Reversed String: ";

    for(char i : s) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}