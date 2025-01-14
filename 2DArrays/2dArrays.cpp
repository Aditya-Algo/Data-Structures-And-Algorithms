#include <iostream>
using namespace std;

int main() {

    int matrix[4][5];
    
    for(int i=0; i<4; i++) {
        for(int j=0; j<5; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix:" << endl;

    for(int i=0; i<4; i++) {
        for(int j=0; j<5; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}