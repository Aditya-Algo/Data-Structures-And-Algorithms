// Dynamic
// Resizable in Run Time

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8, 20, 30, 40}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    // Dynamicaly Size Calculation of 2D Vectors
    // rows = matrix.size()
    // cols = matrix[i].size()

    for(int i=0; i<matrix.size(); i++) {
        for(int j=0; j<matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}