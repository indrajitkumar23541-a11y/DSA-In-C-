// Practice Problem: Descending Order Insertion Sort
// Question: Modify the Insertion Sort algorithm to sort an array in descending (decreasing) order.
//
// Logic: Instead of shifting elements that are larger than temp to the right,
// we shift elements that are smaller than temp to the right.
// This pushes larger elements to the front and smaller elements to the back.

#include <iostream>
using namespace std;

// Function to sort array in descending order using Insertion Sort
void insertionSortDescending(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        
        // Shift elements that are smaller than temp
        while (j >= 0 && arr[j] < temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = temp;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSortDescending(arr, n);

    cout << "Sorted array (Descending): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Expected: 13 12 11 6 5

    return 0;
}
