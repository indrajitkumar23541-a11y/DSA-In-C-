// Practice Problem: Floor and Ceiling in a Sorted Array
// Question: Find the floor and ceiling of a given number X in a sorted array.
// - Floor: The largest number in the array <= X (if it doesn't exist, return -1).
// - Ceiling: The smallest number in the array >= X (if it doesn't exist, return -1).

#include <iostream>
using namespace std;

// Function to find the Floor of X
int findFloor(int arr[], int size, int x) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x) {
            return arr[mid]; // Exact match is the floor itself
        }
        else if (arr[mid] < x) {
            ans = arr[mid];  // Current element could be floor
            start = mid + 1; // Look for a larger value closer to X on the right
        }
        else {
            end = mid - 1;   // Look on the left
        }
    }
    return ans;
}

// Function to find the Ceiling of X
int findCeiling(int arr[], int size, int x) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x) {
            return arr[mid]; // Exact match is the ceiling itself
        }
        else if (arr[mid] > x) {
            ans = arr[mid];  // Current element could be ceiling
            end = mid - 1;   // Look for a smaller value closer to X on the left
        }
        else {
            start = mid + 1; // Look on the right
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    cout << "Sorted Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "\nFinding Floor and Ceiling for X = " << x << endl << endl;

    int floorVal = findFloor(arr, size, x);
    int ceilVal = findCeiling(arr, size, x);

    cout << "Floor of " << x << " is: " << floorVal << endl;     // Expected: 2 (largest number <= 5)
    cout << "Ceiling of " << x << " is: " << ceilVal << endl;  // Expected: 8 (smallest number >= 5)

    return 0;
}
