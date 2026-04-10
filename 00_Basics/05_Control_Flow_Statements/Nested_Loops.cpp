#include <iostream> // for input and output operations
using namespace std; // to avoid writing std:: before every standard Library object
int main() { // main function - entry point of the program
    for(int i=1; i<=10; i++) { // outer Loop - iterates from 1 to 10
        for(int j=1; j<=10; j++) { // inner Loop - iterates from 1 to 10 for each iteration of the outer Loop 
            cout<<i<<" x "<<j<<" = "<<i*j<<endl; // prints the multiplication table for the current variables i and j 
        }
    }
     return 0; // return statement - indicates that the program ended successfully
}