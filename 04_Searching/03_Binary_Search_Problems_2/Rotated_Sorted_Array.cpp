#include <iostream>
using namespace std;

// Function to search in a rotated sorted array
int searchInRotatedArray(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        // Check if the left half is sorted
        if (arr[start] <= arr[mid]) {
            // Check if target lies in the sorted left half
            if (target >= arr[start] && target < arr[mid]) {
                end = mid - 1; // Search left
            } else {
                start = mid + 1; // Search right
            }
        } 
        // Otherwise, the right half must be sorted
        else {
            // Check if target lies in the sorted right half
            if (target > arr[mid] && target <= arr[end]) {
                start = mid + 1; // Search right
            } else {
                end = mid - 1; // Search left
            }
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 0;

    cout << "Rotated Sorted Array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << "\nSearching for target: " << target << endl << endl;

    int result = searchInRotatedArray(arr, size, target);

    if (result != -1) {
        cout << "Target " << target << " found at index: " << result << endl; // Expected: 4
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
