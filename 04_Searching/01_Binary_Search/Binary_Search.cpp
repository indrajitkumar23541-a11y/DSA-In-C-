#include <iostream>
using namespace std;

// 1. Iterative Binary Search
int binarySearchIterative(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        }
        else if (arr[mid] < target) {
            start = mid + 1; // Search right half
        }
        else {
            end = mid - 1; // Search left half
        }
    }
    return -1; // Target not found
}

// 2. Recursive Binary Search
int binarySearchRecursive(int arr[], int start, int end, int target) {
    if (start > end) {
        return -1; // Base case: Target not found
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == target) {
        return mid; // Base case: Target found
    }
    else if (arr[mid] < target) {
        return binarySearchRecursive(arr, mid + 1, end, target); // Search right half
    }
    else {
        return binarySearchRecursive(arr, start, mid - 1, target); // Search left half
    }
}

int main() {
    int arr[] = {2, 4, 6, 8, 12, 18, 25, 37};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 18;

    cout << "Sorted Array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << "\nSearching for: " << target << endl << endl;

    // Test Iterative Binary Search
    int iterResult = binarySearchIterative(arr, size, target);
    cout << "[Iterative] Target found at index: " << iterResult << endl;

    // Test Recursive Binary Search
    int recResult = binarySearchRecursive(arr, 0, size - 1, target);
    cout << "[Recursive] Target found at index: " << recResult << endl;

    return 0;
}
