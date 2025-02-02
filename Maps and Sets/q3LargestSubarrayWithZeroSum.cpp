#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int maxLen(vector<int>&A, int n) {
    unordered_map<int, int> map;
    int sum=0;
    map[0]=-1;

    int globalLen=0;
    for(int i=0; i<n; i++) {
        sum+=A[i];
        if(map.find(sum) != map.end()) {
            globalLen=max(globalLen, i-map[sum]);
            continue;
        }
        map[sum]=i;
    }
    return globalLen;
}

int main() {
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    vector<int> A(n);
    cout << "Enter "<< n <<" Elements: ";
    for(int i=0; i<n; i++) {
        cin >> A[i];
    }

    int result = maxLen(A, n);
    cout << "Length of the longest subarray with sum 0 is: " << result << endl;
    return 0;
}