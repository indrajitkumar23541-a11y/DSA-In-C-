#include <iostream>
using namespace std;

int main() {
    // 1. Declare and initialize a 2D array (3 rows, 3 columns)
    int matrix[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    // 2. Accessing elements
    cout << "Element at Row 0, Column 1: " << matrix[0][1] << endl;
    cout << "Element at Row 2, Column 2: " << matrix[2][2] << endl;

    // 3. Modifying an element
    matrix[1][1] = 99; // Changing 50 to 99
    cout << "Updated Element at Row 1, Column 1: " << matrix[1][1] << endl;

    // 4. Traversing the 2D array using nested loops
    cout << "\nPrinting the 2D matrix (Grid layout):" << endl;
    for (int i = 0; i < 3; i++) {       // Outer loop for rows
        for (int j = 0; j < 3; j++) {   // Inner loop for columns
            cout << matrix[i][j] << "\t"; // Print element
        }
        cout << endl; // Newline after each row
    }

    // 5. Demonstrating linear/contiguous memory in Row-Major order
    cout << "\nMemory addresses (Notice contiguous storage row-by-row):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Address of matrix[" << i << "][" << j << "] = " << &matrix[i][j] << endl;
        }
    }

    return 0;
}
