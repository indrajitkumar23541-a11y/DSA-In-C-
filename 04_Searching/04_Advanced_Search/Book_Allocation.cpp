#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

// Helper function to check if book allocation is possible for a maximum page limit 'mid'
bool isPossible(int arr[], int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) {
            return false; // A single book exceeds the allowed page limit
        }

        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } else {
            studentCount++;
            if (studentCount > m) {
                return false; // Needs more students than available
            }
            pageSum = arr[i]; // Assign current book to the next student
        }
    }
    return true;
}

// Function to find the minimized maximum pages allocated
int allocateBooks(int arr[], int n, int m) {
    if (m > n) {
        return -1; // More students than books (not possible as per constraint 1)
    }

    int sum = 0;
    int maxVal = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int start = maxVal; // Lower bound
    int end = sum;      // Upper bound
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (isPossible(arr, n, m, mid)) {
            ans = mid;       // Store potential answer
            end = mid - 1;   // Try to find a smaller maximum page limit
        } else {
            start = mid + 1; // Increase the allowed limit
        }
    }
    return ans;
}

int main() {
    int books[] = {12, 34, 67, 90};
    int n = sizeof(books) / sizeof(books[0]);
    int students = 2;

    cout << "Books (pages): ";
    for (int x : books) {
        cout << x << " ";
    }
    cout << "\nNumber of students: " << students << endl << endl;

    int result = allocateBooks(books, n, students);
    cout << "The minimized maximum pages allocated is: " << result << endl; // Expected: 113

    return 0;
}
