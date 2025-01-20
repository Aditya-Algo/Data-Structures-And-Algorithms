#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> m;

    m.emplace("BMW", 100);
    m.emplace("Mercedes", 101);
    m.emplace("Toyota", 102);

    for(auto p: m) {
        cout << p.first << " " << p.second << endl;
    }
    
    return 0;
}