#include <iostream>
using namespace std;

// 1. Function to calculate Factorial (Linear Recursion)
int factorial(int n) {
    // Base Case
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive Case
    return n * factorial(n - 1);
}

// 2. Function to find Nth Fibonacci number (Tree Recursion)
int fibonacci(int n) {
    // Base Cases
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    // Recursive Case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num = 5;

    // Test Factorial
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    // Test Fibonacci
    cout << "Fibonacci number at position " << num << " is: " << fibonacci(num) << endl;

    return 0;
}
