// Practice Problem: Move Zeroes to End Using Bubble Swapping
// Question: Given an array, push all the zeroes to the end of the array
// while keeping the relative order of non-zero elements same.
//
// Logic: Similar to Bubble Sort. We repeatedly compare adjacent elements.
// If the current element is 0 and the next is non-zero, we swap them.
// By repeating this for N-1 passes, all zeroes will bubble up to the end.

#include <iostream>
#include <algorithm>
using namespace std;

// Function to move zeroes to the end
void moveZeroesToEnd(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        
        // Bubble up zeroes to the right
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] == 0 && arr[j + 1] != 0) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        
        // If no swap occurred in a pass, zeroes are already pushed to end
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12, 0, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    moveZeroesToEnd(arr, n);

    cout << "After moving zeroes: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Expected: 1 3 12 8 0 0 0

    return 0;
}
