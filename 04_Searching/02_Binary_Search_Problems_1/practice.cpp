// Practice Problem: Total Occurrences of an Element in a Sorted Array
// Question: Given a sorted array with duplicates, count the total number of times X appears.
//
// Logic: Total Occurrences = (Last Occurrence - First Occurrence) + 1
// If first occurrence is -1, total is 0.

#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int target) {
    int start = 0, end = size - 1, ans = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            ans = mid;
            end = mid - 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(int arr[], int size, int target) {
    int start = 0, end = size - 1, ans = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            ans = mid;
            start = mid + 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int countOccurrences(int arr[], int size, int target) {
    int first = firstOccurrence(arr, size, target);
    if (first == -1) {
        return 0; // Target is not present
    }
    int last = lastOccurrence(arr, size, target);
    return (last - first) + 1;
}

int main() {
    int arr[] = {1, 2, 3, 3, 3, 3, 3, 5, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    cout << "Sorted Array with duplicates: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << "\nTarget element: " << target << endl;

    int total = countOccurrences(arr, size, target);
    cout << "Total number of occurrences of " << target << " is: " << total << endl; // Expected: 5

    return 0;
}
