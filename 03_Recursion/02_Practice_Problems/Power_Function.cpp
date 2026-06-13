#include <iostream>
using namespace std;

// 1. Simple recursive power calculation - O(N) Time Complexity
int powerSimple(int x, int n) {
    // Base Case: any number to the power of 0 is 1
    if (n == 0) {
        return 1;
    }
    
    // Recursive Case
    return x * powerSimple(x, n - 1);
}

// 2. Optimized power calculation (Binary Exponentiation) - O(log N) Time Complexity
int powerOptimized(int x, int n) {
    // Base Case
    if (n == 0) {
        return 1;
    }
    
    // Calculate power for n/2
    int halfPower = powerOptimized(x, n / 2);
    
    // If n is even: x^n = (x^(n/2))^2
    if (n % 2 == 0) {
        return halfPower * halfPower;
    } 
    // If n is odd: x^n = x * (x^(n/2))^2
    else {
        return x * halfPower * halfPower;
    }
}

int main() {
    int base = 2;
    int exponent = 10;

    cout << "Calculating " << base << "^" << exponent << ":" << endl;
    cout << "Using Simple O(N) Recursion: " << powerSimple(base, exponent) << endl;
    cout << "Using Optimized O(log N) Recursion: " << powerOptimized(base, exponent) << endl;

    return 0;
}
