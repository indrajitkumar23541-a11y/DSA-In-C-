#include <iostream>
using namespace std;

// Helper function to merge two sorted halves
void merge(int arr[], int start, int mid, int end) {
    int len1 = mid - start + 1;
    int len2 = end - mid;

    // Create temporary arrays
    int* first = new int[len1];
    int* second = new int[len2];

    // Copy values to temporary arrays
    int mainIndex = start;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[mainIndex++];
    }

    mainIndex = mid + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[mainIndex++];
    }

    // Merge the two temporary arrays back into arr
    int index1 = 0;
    int index2 = 0;
    mainIndex = start;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] <= second[index2]) {
            arr[mainIndex++] = first[index1++];
        } else {
            arr[mainIndex++] = second[index2++];
        }
    }

    // Copy remaining elements of first[], if any
    while (index1 < len1) {
        arr[mainIndex++] = first[index1++];
    }

    // Copy remaining elements of second[], if any
    while (index2 < len2) {
        arr[mainIndex++] = second[index2++];
    }

    // Clean up dynamic memory
    delete[] first;
    delete[] second;
}

// Recursive function to perform Merge Sort
void mergeSort(int arr[], int start, int end) {
    // Base Case: 0 or 1 element is already sorted
    if (start >= end) {
        return;
    }

    int mid = start + (end - start) / 2;

    // Sort the left half
    mergeSort(arr, start, mid);

    // Sort the right half
    mergeSort(arr, mid + 1, end);

    // Merge the sorted halves
    merge(arr, start, mid, end);
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array:   ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
