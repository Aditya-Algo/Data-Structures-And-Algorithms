#include <iostream>
using namespace std;

int main() {

    int arr[5] = {2, 4, 6, 8, 10};

    int target = 10;

    int l=0; int h=4; int m;
    
    while(l <= h) {
        m = (l+h)/2;
        if(arr[m] == target) {
            cout << m << endl;
            break;
        } else if (arr[m] < target) {
            l = m+1;
        } else {
            h = m-1;
        }
    }
    

    return -1;
}