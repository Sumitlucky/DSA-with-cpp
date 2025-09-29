#include<iostream>
using namespace std;

int getMaxSum(int mat[3] [3], int rows, int cols) {
    int maxColSum = INT8_MIN;

    for(int j=0; j<cols; j++) {
        int colSum = 0;
        for(int i=0; i<rows; i++) {
            colSum += mat[i][j];
        }
        maxColSum = max(maxColSum, colSum);
    }
    return maxColSum;
}

int main() {
    int matrix[3][3] = {{1,2,30},{4,5,6},{7,8,9}};
    int rows = 3;
    int cols = 3;

    cout << getMaxSum(matrix, rows,cols) << endl;

    return 0 ;
}