#include <iostream>
#include <vector>
using namespace std;

void moveNegNum(vector<int>& arr) {
    
    int n=arr.size();
    int j=0;

    for(int i=0;i<n; i++) {
        if(arr[i] < 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    
}

int main() {

    vector<int>arr = {12, -7, -5, 70, -2, 0, 8, -6};

    cout << "Original Array:" << endl;

    for(int val : arr) {
        cout << val << " ";
    }
    
    moveNegNum(arr);
    
    cout << "Updated Array:" << endl;

    for(int val : arr) {
        cout << val << " ";
    }
    
    return 0;
}