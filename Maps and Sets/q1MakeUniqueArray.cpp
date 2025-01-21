#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long int minIncrements(vector<int> arr, int N) {
    sort(arr.begin(), arr.end());
    long long int ans = 0;
    for(int i=1; i<N; i++) {
        if(arr[i] <= arr[i-1]) {
            ans+=arr[i-1]-arr[i]+1;
            arr[i]=arr[i-1]+1;
        }
    }
    return ans;
}

int main() {
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;

    vector<int> arr(N);
    cout << "Enter the elements of the array: ";
    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }

    long long int result = minIncrements(arr, N);

    cout << "Minimum increments needed: " << result << endl;

    return 0;
}