// Introduction to Recursion
#include <iostream>
using namespace std;

// A simple recursive function to print numbers from N down to 1
void printCountdown(int n) {
    // 1. Base Case: Stop when n is 0
    if (n == 0) {
        cout << "Base case reached (n = 0)!" << endl;
        return;
    }

    // Print current number (Winding phase - going deep into recursion)
    cout << "Winding: n = " << n << endl;

    // 2. Recursive Call with a smaller input (n - 1)
    printCountdown(n - 1);

    // This runs after the recursive call returns (Unwinding phase - returning back)
    cout << "Unwinding: n = " << n << " finished." << endl;
}

int main() {
    int n = 3;
    cout << "Starting countdown from " << n << ":" << endl;
    printCountdown(n);
    return 0;
}
