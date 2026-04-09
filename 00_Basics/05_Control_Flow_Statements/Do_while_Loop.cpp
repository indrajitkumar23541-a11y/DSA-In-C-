#include <iostream> 
using namespace std;
int main()
{
    int count = 1; // declare an integer variable count and initialize it to 1
    do { // use a do-while loop to execute the block of code at least once and then repeat it as long as count is less than 100 
        cout << count << endl; // print the current value of count followed by a new line 
        count++;  // increment the value of count by 1 in each iteration of the loop
    } while (count < 100); // the condition is checked after the block of code is executed, so the long as count is less than 100, the loop will continue to execute 
    return 0; // return 0 to indicate that the program ended successfully
}