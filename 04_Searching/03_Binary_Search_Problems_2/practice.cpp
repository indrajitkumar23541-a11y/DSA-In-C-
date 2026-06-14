// Practice Problem: Peak Index in a Mountain Array
// Question: An array is a mountain array if it increases then decreases.
// Find the index of the peak element (largest element).
//
// Example: arr = [0, 2, 10, 5, 2] -> Peak element is 10 at Index: 2

#include <iostream>
using namespace std;

int findPeakIndex(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1]) {
            // We are on the rising slope, so peak must be to the right
            start = mid + 1;
        } else {
            // We are on the falling slope (or at peak), peak could be at mid or to the left
            end = mid;
        }
    }
    // start and end will converge to the peak index
    return start;
}

int main() {
    int arr[] = {0, 3, 5, 8, 12, 10, 6, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Mountain Array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    int peakIdx = findPeakIndex(arr, size);
    cout << "Peak element is: " << arr[peakIdx] << " at Index: " << peakIdx << endl; // Expected: 12 at Index: 4

    return 0;
}
