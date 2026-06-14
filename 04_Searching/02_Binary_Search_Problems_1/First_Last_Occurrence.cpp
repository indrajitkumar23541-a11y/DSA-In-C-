#include <iostream>
using namespace std;

// Function to find the First Occurrence index of a target
int firstOccurrence(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            ans = mid;       // Store potential answer
            end = mid - 1;   // Keep searching left for earlier occurrence
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}

// Function to find the Last Occurrence index of a target
int lastOccurrence(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            ans = mid;       // Store potential answer
            start = mid + 1; // Keep searching right for later occurrence
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 3, 3, 3, 3, 5, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    cout << "Sorted Array with duplicates: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << "\nSearching occurrences of target: " << target << endl << endl;

    int first = firstOccurrence(arr, size, target);
    int last = lastOccurrence(arr, size, target);

    cout << "First Occurrence Index: " << first << endl; // Expected: 2
    cout << "Last Occurrence Index: " << last << endl;   // Expected: 6

    return 0;
}
