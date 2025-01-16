#include <iostream>
#include <vector>
using namespace std;

// Function to rotate the matrix by 90 degrees
void rotate90degree(int m, int n, vector<vector<int>>& a) {
    // First, transpose the matrix
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(a[i][j], a[j][i]);
        }
    }

    // Now, reverse each row to achieve the 90 degree clockwise rotation
    for (int i = 0; i < m; i++) {
        int l = 0, r = n - 1;
        while (l < r) {
            swap(a[i][l], a[i][r]);
            l++;
            r--;
        }
    }
}

// Function to print the matrix
void printMatrix(int m, int n, const vector<vector<int>>& a) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Define a 3x3 matrix using vector
    int m = 3, n = 3;
    vector<vector<int>> a = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original matrix:" << endl;
    printMatrix(m, n, a);

    rotate90degree(m, n, a);

    cout << "Matrix after rotating 90 degrees:" << endl;
    printMatrix(m, n, a);

    return 0;
}