#include <iostream>
#include <climits>
using namespace std;

int maximumColumnSum(int matrix[][3], int rows, int cols) {
    int maxSum = INT_MIN;

    for(int i=0; i<cols; i++) {
        int ithColSum = 0;
        for(int j=0; j<rows; j++) {
            ithColSum += matrix[j][i];
        }
        maxSum = max(ithColSum, maxSum);
    }
    return maxSum;
}

int main() {

    int matrix[2][3] = {{12, 45, 78}, {100, 400, 700}};
    int rows = 2;
    int cols = 3;

    cout << "Maximum Column Sum is " << maximumColumnSum(matrix, rows, cols) << endl;

    return 0;
}