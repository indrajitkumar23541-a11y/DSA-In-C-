#include <iostream>
using namespace std;

// Function to print the elements of the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert an element at a specific index
// Returns the new size of the array
int insertAt(int arr[], int size, int capacity, int element, int index) {
    // Check if the array is already full
    if (size >= capacity) {
        cout << "Error: Array is full. Cannot insert!" << endl;
        return size;
    }

    // Check if the index is valid
    if (index < 0 || index > size) {
        cout << "Error: Invalid index!" << endl;
        return size;
    }

    // Shift elements to the right to make space
    // We start from the last element and move backwards
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the element at the index
    arr[index] = element;

    // Return the updated size
    return size + 1;
}

// Function to delete an element at a specific index
// Returns the new size of the array
int deleteAt(int arr[], int size, int index) {
    // Check if the array is empty
    if (size <= 0) {
        cout << "Error: Array is empty. Cannot delete!" << endl;
        return size;
    }

    // Check if the index is valid
    if (index < 0 || index >= size) {
        cout << "Error: Invalid index!" << endl;
        return size;
    }

    // Shift elements to the left to close the gap
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Return the updated size
    return size - 1;
}

// Function to search for an element (Linear Search)
// Returns the index if found, otherwise returns -1
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found
}

int main() {
    int capacity = 10;
    int arr[10] = {10, 20, 30, 40, 50}; // Initial size is 5
    int size = 5;

    cout << "Original Array: ";
    printArray(arr, size);

    // 1. Test Insertion
    cout << "\n--- Inserting 25 at index 2 ---" << endl;
    size = insertAt(arr, size, capacity, 25, 2);
    cout << "Array after insertion: ";
    printArray(arr, size);

    // 2. Test Deletion
    cout << "\n--- Deleting element at index 4 ---" << endl;
    size = deleteAt(arr, size, 4);
    cout << "Array after deletion: ";
    printArray(arr, size);

    // 3. Test Searching
    cout << "\n--- Searching for 30 ---" << endl;
    int index = linearSearch(arr, size, 30);
    if (index != -1) {
        cout << "30 found at index: " << index << endl;
    } else {
        cout << "30 not found in the array." << endl;
    }

    return 0;
}
