#include <iostream>
#include <string> // Required for using C++ string class
#include <cstring> // Required for using C-style string functions like strlen
using namespace std;

int main() {
    // 1. C-style String (Character Array)
    char cStyleStr[] = "Hello";
    cout << "C-Style String: " << cStyleStr << endl;
    cout << "Length of C-Style String: " << strlen(cStyleStr) << endl;

    // 2. C++ std::string
    string cppStyleStr = "World";
    cout << "\nC++ std::string: " << cppStyleStr << endl;
    cout << "Length of C++ string: " << cppStyleStr.length() << " (or " << cppStyleStr.size() << ")" << endl;

    // 3. Modifying a character in C++ string
    cppStyleStr[0] = 'B'; // Changing 'W' to 'B'
    cout << "Modified C++ string: " << cppStyleStr << endl;

    // 4. Traversing characters in a string
    cout << "\nTraversing characters in C++ string:" << endl;
    for (int i = 0; i < cppStyleStr.length(); i++) {
        cout << "Character at index " << i << " is: " << cppStyleStr[i] << endl;
    }

    return 0;
}
