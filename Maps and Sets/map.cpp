#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;

    m["Laptop"]=1000;
    m["Keyboard"]=100;
    m["AndroidPhone"]=5000;

    m.insert({"Camera", 500});

    m.emplace("Watches", 50);

    for(auto p: m) {
        cout << p.first << " " << p.second << endl;
    }

    cout << "Count of Keyboard: " << m.count("Keyboard") << endl;

    cout << "Valur of Laptop Key: " << m["Laptop"] << endl;

    m.erase("Laptop");

    for(auto p: m) {
        cout << p.first << " " << p.second << endl;
    }


    if(m.find("Watches") != m.end()) {
        cout << "found" << endl;
    } else {
        cout << "not found ...." << endl;
    }

    return 0;
}