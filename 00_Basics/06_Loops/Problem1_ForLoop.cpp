#include<iostream> // for input and output operations
using namespace std; // to avoid wrinting std:: before every standard Library object
int main() { // main function - entry point of the program
    int n; // variable to store the user input
    cout<<"Enter a number: "; // prompt the user to enter a number
    cin>>n; // read the user input and store it in variable n
    int a = 1; // variable to store the current value of the sequence, initialized to 1
    for(int i=1; i<=n; i++) { // Loop - iterates from 1 to n
        cout<<a<<" "<<endl; // prints the current value of a followed by a space
        a = a*2; // update a to the next value in the sequence by multiplying it by 2
 }
    return 0; // return statement - indicates that the program ended successfully

}