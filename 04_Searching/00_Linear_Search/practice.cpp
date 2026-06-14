// Practice Problem: Linear Search in a 2D Array (Matrix)
// Question: Find the row and column index of a target element in a 2D matrix.
// If not found, return {-1, -1}.

#include <iostream>
using namespace std;

// Function to search in a 2D array
// Row and Col are passed by reference to return coordinates
bool searchInMatrix(int matrix[3][4], int rows, int cols, int target, int &rowRes, int &colRes) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == target) {
                rowRes = i;
                colRes = j;
                return true; // Target found
            }
        }
    }
    rowRes = -1;
    colRes = -1;
    return false; // Target not found
}

int main() {
    int matrix[3][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48}
    };
    int rows = 3;
    int cols = 4;
    int target = 29;

    int rowRes = -1, colRes = -1;
    
    cout << "Searching for " << target << " in 2D Matrix...\n";
    if (searchInMatrix(matrix, rows, cols, target, rowRes, colRes)) {
        cout << "Target found at Row: " << rowRes << ", Col: " << colRes << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }

    return 0;
}
