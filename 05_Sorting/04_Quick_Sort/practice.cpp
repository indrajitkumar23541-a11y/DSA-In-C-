// Practice Problem: K-th Smallest Element in an Array (Quick Select)
// Question: Given an unsorted array and an integer K, find the K-th smallest element in the array.
// Time Complexity: O(N) average case, O(N^2) worst case.
//
// Logic: Quick Select uses the partition function of Quick Sort.
// Once partitioned, the pivot element is at its correct sorted index (say p).
// - If p == K-1: We found our K-th smallest element!
// - If p > K-1: Search in the left sub-array.
// - If p < K-1: Search in the right sub-array.

#include <iostream>
#include <algorithm>
using namespace std;

// Partition function (using first element as pivot)
int partition(int arr[], int start, int end) {
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot) count++;
    }
    int pivotIndex = start + count;
    swap(arr[start], arr[pivotIndex]);

    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) i++;
        while (arr[j] > pivot) j--;
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

// Quick Select function to find K-th smallest element
int quickSelect(int arr[], int start, int end, int k) {
    // If K is valid
    if (k > 0 && k <= end - start + 1) {
        int p = partition(arr, start, end);

        // If pivot index is the same as K-1 position
        if (p - start == k - 1) {
            return arr[p];
        }

        // If pivot position is more, search left
        if (p - start > k - 1) {
            return quickSelect(arr, start, p - 1, k);
        }

        // Else search right
        return quickSelect(arr, p + 1, end, k - (p - start + 1));
    }
    return -1;
}

int main() {
    int arr[] = {12, 3, 5, 7, 4, 19, 26};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Find the 3rd smallest element (Sorted: 3, 4, 5, 7, 12, 19, 26 -> Expected: 5)

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nFinding " << k << "-th smallest element..." << endl;

    int result = quickSelect(arr, 0, n - 1, k);
    cout << "The " << k << "-th smallest element is: " << result << endl; // Expected: 5

    return 0;
}
