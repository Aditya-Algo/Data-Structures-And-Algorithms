#include <bits/stdc++.h>
using namespace std;

int myFun(int arr[], int sz) {
    int largest = arr[0];
    int secondLargest = INT_MIN;

    for(int i=1; i<sz; i++) {
        if(arr[i] > largest) {
            secondLargest =largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main() {

    // int arr[] = {12, 13, 56, 87, 86};
    int arr[] = {12, 12, 12, 12};

    int sz = sizeof(arr) / sizeof(arr[0]);

    int result = myFun(arr, sz); 

    cout << result << endl;

    return 0;
}