// Practice: Recursion Sum
#include <iostream>
using namespace std;

// Question: Write a recursive function to find the sum of first N natural numbers.
// Input: n = 5
// Expected Output: Sum = 15 (5 + 4 + 3 + 2 + 1)
//
// Recurrence Relation: Sum(N) = N + Sum(N - 1)
// Base Case: Sum(1) = 1

int recursiveSum(int n) {
    // Base Case
    if (n == 1) {
        return 1;
    }

    // Recursive call
    return n + recursiveSum(n - 1);
}

int main() {
    int n = 5;
    cout << "Finding sum of first " << n << " natural numbers..." << endl;
    cout << "Sum = " << recursiveSum(n) << endl;
    return 0;
}
