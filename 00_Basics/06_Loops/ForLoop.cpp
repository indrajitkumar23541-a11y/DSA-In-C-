#include<iostream> // for input and output operations
using namespace std; // to avoid writing std:: before every standard Library object
int main() { // main function - entry point of the program
    for(int i=100; i>=1; i--) { // Loop - iterates from 100 to 1 with a decrement of 2
        cout<<i<<" "<<endl; // prints the current value of i followed by a space
    }
    return 0; // return statement - indicates that the program ended successfully

}