#include <iostream>
using namespace std;

// Function to perform Linear Search
// Returns the index of target if found, otherwise returns -1
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        cout << "Checking index " << i << ": comparing " << arr[i] << " with " << target << endl;
        if (arr[i] == target) {
            return i; // Target found
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {3, 5, 2, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    cout << "Array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << "\nSearching for: " << target << endl << endl;

    int resultIndex = linearSearch(arr, size, target);

    if (resultIndex != -1) {
        cout << "\nTarget " << target << " found at index: " << resultIndex << endl;
    } else {
        cout << "\nTarget " << target << " not found in the array." << endl;
    }

    return 0;
}
