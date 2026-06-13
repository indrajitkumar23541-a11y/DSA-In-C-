#include <iostream>
#include <vector>
#include <climits> // For INT_MIN
using namespace std;

// Kadane's Algorithm to find maximum subarray sum
int maxSubarraySum(vector<int> &arr) {
    int maxSum = INT_MIN; // Global maximum sum
    int currentSum = 0;   // Running sum of current subarray

    for (int i = 0; i < arr.size(); i++) {
        currentSum = currentSum + arr[i]; // Add current element

        // Update maxSum if current subarray sum is greater
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }

        // If currentSum becomes negative, discard it (reset to 0)
        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    int max_sum = maxSubarraySum(arr);
    cout << "Maximum Contiguous Subarray Sum is: " << max_sum << endl;

    return 0;
}
