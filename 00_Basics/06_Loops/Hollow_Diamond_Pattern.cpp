#include<iostream> // This program prints a hollow diamond pattern of stars
using namespace std; // The output will be:

int main() { // The number of rows in the upper half of the diamond (including the middle row)
    int n = 5; // The number of rows in the upper half of the diamond (including the middle row)

    // Upper part
    for(int i = 1; i <= n; i++) {  // Loop through each row of the upper half of the diamond

        // spaces
        for(int j = 1; j <= n - i; j++) { // Print spaces to align the stars in a diamond shape
            cout << " ";
        }

        // hollow part
        for(int j = 1; j <= 2*i - 1; j++) { // Print stars for the hollow part of the diamond
            if(j == 1 || j == 2*i - 1) // Print a star at the beginning and end of the hollow part
                cout << "*"; // Print a star for the hollow part of the diamond
            else
                cout << " "; // Print a space for the hollow part of the diamond
        }

        cout << endl; // Move to the next line after printing each row of the upper half of the diamond
    }

    // Lower part
    for(int i = n-1; i >= 1; i--) { // Loop through each row of the lower half of the diamond (starting from the second last row)

        // spaces
        for(int j = 1; j <= n - i; j++) { // Print spaces to align the stars in a diamond shape
            cout << " "; // Print spaces to align the stars in a diamond shape
        }

        // hollow part
        for(int j = 1; j <= 2*i - 1; j++) { // Print stars for the hollow part of the diamond
            if(j == 1 || j == 2*i - 1) // Print a star at the beginning and end of the hollow part
                cout << "*"; // Print a star for the hollow part of the diamond
            else
                cout << " "; // Print a space for the hollow part of the diamond
        }

        cout << endl; // Move to the next line after printing each row of the lower half of the diamond
    }

    return 0; // End of the program
}