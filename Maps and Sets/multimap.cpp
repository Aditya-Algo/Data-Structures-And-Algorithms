#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<string, int> m;

    m.emplace("BMW", 100);
    m.emplace("BMW", 100);
    m.emplace("BMW", 100);
    m.emplace("BMW", 100);
    m.emplace("Mercedes", 101);
    m.emplace("Toyota", 102);
    m.emplace("Mahindra", 103);

    for(auto p: m) {
        cout << p.first << " " << p.second << endl;
    }

    // m.erase("BMW");
    // for(auto p: m) {
    //     cout << p.first << " " << p.second << endl;
    // }

    m.erase(m.find("BMW"));

    for(auto p: m) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}