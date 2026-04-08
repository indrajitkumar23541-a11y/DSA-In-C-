#include <iostream>
using namespace std;
int main() {
    int a = 16, b = 24;
    cout << "a & b is " << (a & b) << endl; // Binary AND operator
    cout << "a | b is " << (a | b) << endl; // Binary OR operator
    cout << "a ^ b is " << (a ^ b) << endl; // Binary XOR operator
    cout << "a << 1 is " << (a << 1) << endl; // Left Shift operator
    cout << "a >> 1 is " << (a >> 1) << endl; // Right Shift operator
    cout << "~(a) is " << ~(a); // One’s Complement operator
    return 0;
}