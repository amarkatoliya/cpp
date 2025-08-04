#include <iostream>
#include <vector>
using namespace std;

// Function to perform linear search in 2D array
pair<int, int> linearSearch2D(const vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    if (rows == 0) return {-1, -1};

    int cols = matrix[0].size();

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == target) {
                return {i, j}; // return position when found
            }
        }
    }

    return {-1, -1}; // return -1, -1 if not found
}

int main() {
    vector<vector<int>> matrix = {
        {3, 5, 7},
        {2, 4, 9},
        {8, 1, 6}
    };

    int target;
    cout << "Enter number to search: ";
    cin >> target;

    pair<int, int> result = linearSearch2D(matrix, target);

    if (result.first != -1) {
        cout << "Element found at row " << result.first << ", column " << result.second << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
