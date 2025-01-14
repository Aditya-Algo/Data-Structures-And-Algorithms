#include <iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3], i, j, f=0;

    // Input matrix elements
    cout << "Enter Matrix Elements: " << endl;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            cin >> a[i][j];
        }
    }

    // Display the original matrix
    cout << "Original Matrix: " << endl;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Compute the transpose of the matrix
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            b[i][j] = a[j][i];  // transpose logic
        }
    }

    // Display the transpose of the matrix
    cout << "Transpose of Matrix is: " << endl;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    // Check if the matrix is symmetric
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            if(a[i][j] != b[i][j]) {
                f = 1;
                break;
            }
        }
        if(f == 1) {
            break;  // Exit outer loop if matrix is not symmetric
        }
    }

    if(f == 0) {
        cout << "Matrix is Symmetric." << endl;
    } else {
        cout << "Matrix is not Symmetric." << endl;
    }

    return 0;
}