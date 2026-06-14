// Practice Problem: Aggressive Cows
// Question: Given an array of stall positions (sorted) and K cows.
// Assign cows to stalls such that the minimum distance between any two of them is as large as possible.
// Return the largest minimum distance.

#include <iostream>
#include <algorithm>
using namespace std;

// Helper function to check if it's possible to place K cows with at least 'mid' distance
bool isPossible(int stalls[], int n, int k, int mid) {
    int cowCount = 1;
    int lastPos = stalls[0];

    for (int i = 1; i < n; i++) {
        if (stalls[i] - lastPos >= mid) {
            cowCount++;
            if (cowCount == k) {
                return true; // Successfully placed all K cows
            }
            lastPos = stalls[i]; // Update the position of last placed cow
        }
    }
    return false;
}

// Function to find the maximized minimum distance
int aggressiveCows(int stalls[], int n, int k) {
    sort(stalls, stalls + n); // Stalls must be sorted

    int start = 1; // Minimum possible distance
    int end = stalls[n - 1] - stalls[0]; // Maximum possible distance
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (isPossible(stalls, n, k, mid)) {
            ans = mid;       // Store the potential distance
            start = mid + 1; // Try to find a larger distance
        } else {
            end = mid - 1;   // Try a smaller distance
        }
    }
    return ans;
}

int main() {
    int stalls[] = {1, 2, 8, 4, 9}; // positions of stalls
    int n = sizeof(stalls) / sizeof(stalls[0]);
    int k = 3; // Number of cows

    cout << "Stall positions: ";
    for (int pos : stalls) {
        cout << pos << " ";
    }
    cout << "\nNumber of cows: " << k << endl << endl;

    // aggressiveCows internally sorts stalls to {1, 2, 4, 8, 9}
    int result = aggressiveCows(stalls, n, k);
    cout << "The largest minimum distance possible is: " << result << endl; // Expected: 3 (Positions: 1, 4, 8 or 9)

    return 0;
}
