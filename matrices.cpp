#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> matrixMultiply(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int rows_A = A.size();
    int cols_A = A[0].size();
    int cols_B = B[0].size();
    
    vector<vector<int>> result(rows_A, vector<int>(cols_B, 0));
    
    for (int i = 0; i < rows_A; ++i) 
    {
        for (int j = 0; j < cols_B; ++j)
         {
            for (int k = 0; k < cols_A; ++k) 
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    return result;
}

int main() {
    
    vector<vector<int>> matrixA = {{1, 2}, {3, 4}};
    vector<vector<int>> matrixB = {{5, 6}, {7, 8}};
    
    
    vector<vector<int>> result = matrixMultiply(matrixA, matrixB);
    
    
    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}