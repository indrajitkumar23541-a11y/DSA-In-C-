#include <iostream>
using namespace std;

// Question: Write a program to find the maximum and minimum elements in an array.
// Input: array = {12, 5, 7, 23, 1, 18}
// Expected Output:
// Maximum element: 23
// Minimum element: 1

int main() {
    int arr[6] = {12, 5, 7, 23, 1, 18};
    int size = 6;

    // Initialize max and min with the first element of the array
    int maxVal = arr[0];
    int minVal = arr[0];

    // Traverse the array starting from the second element
    for (int i = 1; i < size; i++) {
        // If current element is greater than maxVal, update maxVal
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        // If current element is smaller than minVal, update minVal
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }

    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Maximum element: " << maxVal << endl;
    cout << "Minimum element: " << minVal << endl;

    return 0;
}
