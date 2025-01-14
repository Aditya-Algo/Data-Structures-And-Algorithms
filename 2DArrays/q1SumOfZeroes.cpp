#include <iostream>
#include <vector>

using namespace std;


int coverageOfMatrix(vector<vector<int>> &mat) {
    int row = mat.size();
    int col = mat[0].size();

    int ans = 0;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(mat[i][j] == 0) {
                if(i-1>0 && mat[i-1][j]==1)
                    ans++;
                if(j+1<col && mat[i][j+1]==1)
                    ans++;
                if(i+1<row && mat[i+1][j]==1)
                    ans++;
                if(j-1>0 && mat[i][j-1]==1)
                    ans++;
            }
        }
    }
    return ans;
}


int main() {
    vector<vector<int>> mat = {
        {1, 0, 1},
        {0, 1, 0},
        {1, 0, 1}
    };

    int result = coverageOfMatrix(mat);

    cout << "Sum of Zero's Coverage of 1 is " << result << endl;

    return 0;
}