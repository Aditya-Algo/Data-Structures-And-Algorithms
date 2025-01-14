#include <iostream>
using namespace std;

bool linearSearch(int matrix[][2], int rows, int cols, int key) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if(matrix[i][j] == key) {
                return true;
            }
        }
    }
    return false;
}

int main() {


    int matrix[4][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    int rows = 4;
    int cols = 2;


    cout << linearSearch(matrix, rows, cols, 5) << endl;



    return 0;
}