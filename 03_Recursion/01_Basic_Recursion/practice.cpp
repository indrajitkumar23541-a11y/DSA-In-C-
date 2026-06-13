#include <iostream>
using namespace std;

// Question: Write two recursive functions:
// 1. print1ToN(n) -> prints numbers from 1 to N.
// 2. printNTo1(n) -> prints numbers from N down to 1.
// Input: n = 5
// Expected Output:
// 1 to N: 1 2 3 4 5
// N to 1: 5 4 3 2 1

// Function to print 1 to N
// Hint: Print during the Unwinding phase (after the recursive call)
void print1ToN(int n) {
    if (n == 0) {
        return; // Base case
    }
    
    print1ToN(n - 1);  // Go down the call stack first
    cout << n << " ";  // Print while coming back up the stack
}

// Function to print N to 1
// Hint: Print during the Winding phase (before the recursive call)
void printNTo1(int n) {
    if (n == 0) {
        return; // Base case
    }
    
    cout << n << " ";  // Print immediately
    printNTo1(n - 1);  // Make the recursive call
}

int main() {
    int n = 5;

    cout << "Printing 1 to " << n << ":" << endl;
    print1ToN(n);
    cout << endl;

    cout << "\nPrinting " << n << " to 1:" << endl;
    printNTo1(n);
    cout << endl;

    return 0;
}
