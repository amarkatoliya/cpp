#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int mxRowSum(int mat[][3],int row,int col) {
    int maxRowSum = INT_MIN;

    for(int i=0;i<row;i++) {
        int rowSumOfI = 0;
        for(int j=0;j<col;j++) {
            rowSumOfI += mat[i][j];
        }
        maxRowSum = max(maxRowSum,rowSumOfI);
    }
    return maxRowSum;
}

void transpose(int mat[][3],int trans[][3],int row,int col) {
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
           trans[j][i] = mat[i][j];
        }
    }
}

int diagonalSum(int mat[][3],int row,int col) {
    int n = 3;
    if(row != col) {
        return -1;
    }

    int diaSum = 0;

    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            if(i == j) {
                diaSum += mat[i][j];
            }else if(j == n-1-i) {
                diaSum += mat[i][j];
            }
        }
    }
    return diaSum;
}

int main() {
    int  matrix[3][3] = {
        {3, 5, 7},
        {2, 4, 3},
        {8, 6, 6}
    };

    // int transposeMat[3][3] = transpose(matrix); // Removed invalid assignment
    // transpose(matrix, 3, 3);
    // int trans[3][3];
    // transpose(matrix,trans,3,3);

    // cout << mxRowSum(trans,3,3) << endl;


    cout << diagonalSum(matrix,3,3) << endl;
    return 0;
}
