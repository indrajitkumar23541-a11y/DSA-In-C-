#include <iostream>
using namespace std;
int main() {
    int a = 34, b = 43;
    int result = (a < b) ? b : a; // Conditional Operator
    cout << "The greatest number "
          "is " << result;

    return 0;
}