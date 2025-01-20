#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us;

    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(4);
    us.insert(5);

    for(auto p : us) {
        cout << p << " ";
    }
    cout << endl;
    return 0;
}