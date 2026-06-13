#include <iostream>
using namespace std;

int main() {
    // 1. Declaring and initializing an array
    int numbers[5] = {10, 20, 30, 40, 50};

    // 2. Accessing elements using indices (0-based)
    cout << "First element (index 0): " << numbers[0] << endl;
    cout << "Third element (index 2): " << numbers[2] << endl;

    // 3. Modifying an element
    numbers[1] = 25; // changing 20 to 25
    cout << "Updated second element (index 1): " << numbers[1] << endl;

    // 4. Traversing (looping through) the array
    cout << "\nAll elements in the array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << " is: " << numbers[i] << endl;
    }

    // 5. Printing memory addresses to see contiguous storage
    cout << "\nMemory addresses of elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Address of numbers[" << i << "]: " << &numbers[i] << " (Notice the +4 bytes gap)" << endl;
    }

    return 0;
}
