#include <iostream>
using namespace std;

int diagonalSum(int mat[][6], int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += mat[i][i];

        if(i != n-1-i) {
            sum += mat[i][n-1-i];
        }
    }
    return sum;
}


int main() {

    int matrix[6][6] = {{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18}, {19, 20, 21, 22, 23, 24}, {25, 26, 27, 28, 29, 30}, {31, 32, 33, 34, 35, 36}};
    int n=6;
    cout << diagonalSum(matrix, n) << endl;
    return 0;
}

// Time Complexity is O(n) because only one loop used