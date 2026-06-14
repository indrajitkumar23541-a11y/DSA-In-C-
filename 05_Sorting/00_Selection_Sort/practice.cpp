// Practice Problem: Alphabetical Selection Sort on Strings
// Question: Sort an array of strings in alphabetical order using Selection Sort.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to sort string array using Selection Sort
void selectionSortStrings(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        
        for (int j = i + 1; j < n; j++) {
            // Compare strings lexicographically
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Swap strings
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    string fruits[] = {"Banana", "Apple", "Mango", "Peach", "Grapes"};
    int n = sizeof(fruits) / sizeof(fruits[0]);

    cout << "Original list of strings:\n";
    for (int i = 0; i < n; i++) {
        cout << "- " << fruits[i] << endl;
    }

    selectionSortStrings(fruits, n);

    cout << "\nAlphabetically sorted list:\n";
    for (int i = 0; i < n; i++) {
        cout << "- " << fruits[i] << endl;
    }

    return 0;
}
