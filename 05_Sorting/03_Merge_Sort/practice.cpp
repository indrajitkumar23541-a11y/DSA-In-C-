// Practice Problem: Count Inversions in an Array
// Question: Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
// Find the total number of inversions in the array in O(N log N) time.
//
// Logic: Modify the merge step of Merge Sort. 
// When first[index1] > second[index2], it means first[index1], first[index1+1], ..., first[len1-1] 
// are all greater than second[index2] (since the first array is sorted). 
// So, we add (len1 - index1) to our inversion count.

#include <iostream>
using namespace std;

// Helper function to merge and count split inversions
long long mergeAndCount(int arr[], int start, int mid, int end) {
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int* first = new int[len1];
    int* second = new int[len2];

    for (int i = 0; i < len1; i++) first[i] = arr[start + i];
    for (int i = 0; i < len2; i++) second[i] = arr[mid + 1 + i];

    int index1 = 0, index2 = 0, mainIndex = start;
    long long inversions = 0;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] <= second[index2]) {
            arr[mainIndex++] = first[index1++];
        } else {
            arr[mainIndex++] = second[index2++];
            // All remaining elements in first[] are greater than second[index2]
            inversions += (len1 - index1);
        }
    }

    while (index1 < len1) arr[mainIndex++] = first[index1++];
    while (index2 < len2) arr[mainIndex++] = second[index2++];

    delete[] first;
    delete[] second;
    return inversions;
}

// Function to divide and count inversions
long long mergeSortAndCount(int arr[], int start, int end) {
    long long inversions = 0;
    if (start < end) {
        int mid = start + (end - start) / 2;
        
        // Inversions in the left half
        inversions += mergeSortAndCount(arr, start, mid);
        // Inversions in the right half
        inversions += mergeSortAndCount(arr, mid + 1, end);
        // Split Inversions (during merge)
        inversions += mergeAndCount(arr, start, mid, end);
    }
    return inversions;
}

int main() {
    int arr[] = {8, 4, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Inversions in [8, 4, 2, 1]: (8,4), (8,2), (8,1), (4,2), (4,1), (2,1) -> Total = 6
    long long invCount = mergeSortAndCount(arr, 0, n - 1);

    cout << "Total Inversions: " << invCount << endl; // Expected: 6

    return 0;
}
