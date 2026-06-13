#include <iostream>
#include <vector> // Required header for using vectors
using namespace std;

int main() {
    // 1. Declare a vector of integers
    vector<int> numbers;

    cout << "--- Observing Dynamic Resizing (Size vs Capacity) ---" << endl;
    // We will push elements and see how Capacity doubles
    for (int i = 1; i <= 5; i++) {
        numbers.push_back(i * 10);
        cout << "Pushed: " << i * 10 
             << " | Size: " << numbers.size() 
             << " | Capacity: " << numbers.capacity() << endl;
    }

    // 2. Accessing elements
    cout << "\nElement at index 2: " << numbers[2] << endl;
    cout << "First element (using front()): " << numbers.front() << endl;
    cout << "Last element (using back()): " << numbers.back() << endl;

    // 3. Modifying elements
    numbers[1] = 25; // Modifying index 1
    cout << "Modified element at index 1: " << numbers[1] << endl;

    // 4. Traversing vector using a range-based loop (simple & human-like)
    cout << "\nAll elements in the vector (range-based loop):" << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // 5. Deleting the last element
    cout << "\nRemoving last element (pop_back)" << endl;
    numbers.pop_back();
    
    cout << "Vector after pop_back: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    cout << "New Size: " << numbers.size() << " | Capacity: " << numbers.capacity() << endl;

    return 0;
}
