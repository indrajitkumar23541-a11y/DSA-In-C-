#include <iostream>
using namespace std;

// Question: Write a program to find the sum of all elements in an integer array.
// Input: array of size 5 -> {5, 10, 15, 20, 25}
// Expected Output: Sum = 75

int main() {
    int size = 5;
    int arr[5] = {5, 10, 15, 20, 25};
    int totalSum = 0;

    // We loop through the array and add each element to totalSum
    for (int i = 0; i < size; i++) {
        totalSum = totalSum + arr[i]; // or totalSum += arr[i]
    }

    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Sum of all elements in the array is: " << totalSum << endl;

    return 0;
}
