#include <iostream>
using namespace std;

void selectionSorting(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int smallestIndex = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[smallestIndex]) {
                smallestIndex = j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
    }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n=5;
    int arr []={5, 1, 2, 4, 3}; 
    selectionSorting(arr, n);
    printArray(arr, n);
    return 0;
}