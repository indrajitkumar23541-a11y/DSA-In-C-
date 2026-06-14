#include <iostream>
#include <algorithm>
using namespace std;

// Partition function using the last element as pivot
int partition(int arr[], int start, int end) {
    int pivot = arr[start]; // Taking first element as pivot
    int count = 0;

    // Count elements smaller than pivot
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot) {
            count++;
        }
    }

    // Place pivot at its correct position
    int pivotIndex = start + count;
    swap(arr[start], arr[pivotIndex]);

    // Handle left and right parts of pivot index
    int i = start;
    int j = end;

    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

// Recursive Quick Sort function
void quickSort(int arr[], int start, int end) {
    // Base Case
    if (start >= end) {
        return;
    }

    // Partition the array
    int p = partition(arr, start, end);

    // Sort the left part
    quickSort(arr, start, p - 1);

    // Sort the right part
    quickSort(arr, p + 1, end);
}

int main() {
    int arr[] = {24, 9, 29, 14, 19, 27};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "Sorted array:   ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
