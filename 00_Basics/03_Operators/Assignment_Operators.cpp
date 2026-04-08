#include <iostream>
using namespace std;
int main() {
    int a = 34, b = 22;
    cout << "a = " << a << endl; // Assignment Operator.
    cout << "a += b is " << (a += b) << endl; // Add and Assignment Operator.
    cout << "a -= b is " << (a -= b) << endl; // Subtract and Assignment Operator.
    cout << "a *= b is " << (a *= b) << endl; //  Multiply and Assignment Operator.
    cout << "a /= b is " << (a /= b) << endl; //  Divide and Assignment Operator.
    return 0;
}