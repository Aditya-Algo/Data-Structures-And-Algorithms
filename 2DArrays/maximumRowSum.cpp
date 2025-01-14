#include <iostream>
#include <climits>
using namespace std;

int maximumRowSum(int matrix[][3], int rows, int cols) {
    int maxSum = INT_MIN;

    for(int i=0; i<rows; i++) {
        int ithRowSum = 0;
        for(int j=0; j<cols; j++) {
            ithRowSum += matrix[i][j];
        }
        maxSum = max(ithRowSum, maxSum);
    }
    return maxSum;
}

int main() {

    int matrix[2][3] = {{12, 45, 78}, {100, 400, 700}};
    int rows = 2;
    int cols = 3;

    cout << "Maximum Row Sum is " << maximumRowSum(matrix, rows, cols) << endl;

    return 0;
}