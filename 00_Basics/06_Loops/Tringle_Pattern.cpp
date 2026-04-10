#include<iostream> // for input and output operations
using namespace std; // to avoid writing std:: before every standard Library object
int main() { // main function - entry point of the program
    int n = 5; // variable to store the number of rows in the triangle
    for(int i = 1; i <= n; i++) { // Loop - iterates from 1 to n
        for(int j = 1; j <= i; j++) { // Loop - iterates from 1 to i

            cout << "* "; // prints an asterisk followed by a space for each iteration of the inner loop
        }
        cout << endl; // prints a newLine after each row of the triangle
    }
    return 0; // return statement - indicates that the program ended successfully
}