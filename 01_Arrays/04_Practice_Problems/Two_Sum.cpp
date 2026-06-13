#include <iostream>
#include <vector>
#include <algorithm> // For std::sort
using namespace std;

// Function to find two elements that sum up to a target
// This function assumes the array is already sorted, or sorts it first.
bool findTwoSum(vector<int> &arr, int target, int &index1, int &index2) {
    // Sort the array (required for two-pointer approach)
    sort(arr.begin(), arr.end());

    int start = 0;
    int end = arr.size() - 1;

    while (start < end) {
        int currentSum = arr[start] + arr[end];

        if (currentSum == target) {
            index1 = start;
            index2 = end;
            return true; // Found the pair!
        }
        else if (currentSum < target) {
            start++; // Need a larger sum, move start pointer right
        }
        else {
            end--; // Need a smaller sum, move end pointer left
        }
    }

    return false; // No pair found
}

int main() {
    vector<int> arr = {2, 11, 7, 15};
    int target = 9;
    int index1 = -1, index2 = -1;

    cout << "Input Array: ";
    for (int x : arr) cout << x << " ";
    cout << "\nTarget Sum: " << target << endl;

    if (findTwoSum(arr, target, index1, index2)) {
        cout << "Pair found! Elements are: " << arr[index1] << " and " << arr[index2] << endl;
        cout << "Sorted indices are: " << index1 << " and " << index2 << endl;
    } else {
        cout << "No pair found that sums up to " << target << endl;
    }

    return 0;
}
