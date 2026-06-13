#include <iostream>
#include <vector>
#include <algorithm> // For std::swap
using namespace std;

// Question: Write a function to reverse a vector of integers.
// Input: v = {1, 2, 3, 4, 5}
// Expected Output: Reversed Vector = {5, 4, 3, 2, 1}

// Function to reverse vector using the Two-Pointer approach
void reverseVector(vector<int> &v) {
    int start = 0;
    int end = v.size() - 1;

    // Keep swapping elements from start and end until they meet in the middle
    while (start < end) {
        swap(v[start], v[end]); // Swapping values
        start++;                // Move start pointer forward
        end--;                  // Move end pointer backward
    }
}

int main() {
    vector<int> v = {10, 20, 30, 40, 50, 60};

    cout << "Original Vector: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    // Call the reverse function
    reverseVector(v);

    cout << "Reversed Vector: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
