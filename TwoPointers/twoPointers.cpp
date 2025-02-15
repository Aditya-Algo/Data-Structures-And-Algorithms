#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cout << "Enter Size Of The Array: ";
    cin >> n;
    int *a = new int[n];
    
    for(int i=0; i<n; i++) cin >> a[i];

    int target;
    cout << "Now Enter Target: ";
    cin >> target;

    sort(a, a+n);

    int i=0;
    int j=n-1;
    int f=0;

    while(i<j) {
        if(a[i]+a[j] == target) {
            f=1;
            cout << "True" << endl;
            break;
        }
        else if(a[i]+a[j] < target) {
            i++;
        } else {
            j--;
        }
    }

    if(f == 0) cout << "False" << endl;

    delete[] a;

    return 0;
}