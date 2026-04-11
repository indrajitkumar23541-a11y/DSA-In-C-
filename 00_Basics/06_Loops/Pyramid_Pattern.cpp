#include<iostream> // This program prints a pyramid pattern of numbers
using namespace std; // The output will be:

int main() { 
    int n = 5; // The number of rows in the pyramid
    for(int i = 0; i < n; i++) { // Loop through each row

        // spaces
        for(int j = 0; j < n-i-1; j++) { // Print spaces to align the numbers in a pyramid shape
            cout << " ";
        }

        // increasing numbers
        for(int j = 1; j <= i+1; j++) { // Print increasing numbers starting from 1 up to the current row number
            cout << j;
        }

        // decreasing numbers
        for(int j = i; j >= 1; j--) { // Print decreasing numbers starting from the current row number down to 1
            cout << j;
        }

        cout << endl; // Move to the next line after printing each row
    }
    return 0; // End of the program
}