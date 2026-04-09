#include <iostream>
using namespace std;
int main()
{
    int count = 0; // declare an integer variable count and initialize it to 0
    while (count < 100) { // use a while loop to execute the block of code as long as count is less than 100
        cout << count << endl; // print the current value of count followed by a new line 
        count++; // increment the value of count by 1 in each iteration of the loop
    }
    return 0; // return 0 to indicate that the program ended successfully
}