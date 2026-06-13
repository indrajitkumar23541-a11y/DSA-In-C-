#include <iostream>
using namespace std;

// Recursive function to find the sum of digits of a number
int sumOfDigits(int n) {
    // Base Case: If number is single digit, return the number itself
    if (n < 10) {
        return n;
    }
    
    // Recursive Case: Get the last digit + sum of remaining digits
    int lastDigit = n % 10;
    int remainingNum = n / 10;
    
    return lastDigit + sumOfDigits(remainingNum);
}

int main() {
    int num = 12345;
    
    cout << "Number: " << num << endl;
    cout << "Sum of digits is: " << sumOfDigits(num) << endl;
    
    return 0;
}
