#include<iostream> // for input and output operations
using namespace std; // to avoid writing std:: before every standard Library object
int main() { // main function - entry point of the program
    int n = 5; // variable to store the number of rows in the triangle
    int num = 1; // variable to store the current number to be printed, initialized to 1
    for(int i = 0; i<n; i++) { // Loop - iterates from 0 to n-1
        for(int j = 0; j<i; j++) { // Loop - iterates from 0 to i-1 for each iteration of the outer loop
            cout << " "; // prints a space for each iteration of the inner loop to create the inverted triangle pattern
        }
        for(int j = 0; j<n-i; j++) { // Loop - iterates from 0 to n-i-1 for each iteration of the outer loop
            cout << (i+1); // prints the current value of i+1 for each iteration of the inner loop to create the inverted triangle pattern
        }
        cout << endl; // prints a newLine after each row of the triangle
    }
    return 0; // return statement - indicates that the program ended successfully

} 