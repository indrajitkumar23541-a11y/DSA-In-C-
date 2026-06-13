#include <iostream>
using namespace std;

// Question: Write a program to find the transpose of a 2x3 matrix.
// Transpose swaps rows with columns.
// Input:
// 1 2 3
// 4 5 6
//
// Expected Output (3x2 Matrix):
// 1 4
// 2 5
// 3 6

int main() {
    int rows = 2;
    int cols = 3;

    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // The transpose of a 2x3 matrix will be a 3x2 matrix
    int transpose[3][2];

    // Computing the transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j]; // swap row and col indices
        }
    }

    // Printing original matrix
    cout << "Original Matrix (2x3):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Printing transpose matrix
    cout << "\nTranspose Matrix (3x2):" << endl;
    for (int i = 0; i < cols; i++) { // Outer loop now runs up to cols (3)
        for (int j = 0; j < rows; j++) { // Inner loop runs up to rows (2)
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
