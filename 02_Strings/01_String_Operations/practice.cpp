#include <iostream>
#include <string>
using namespace std;

// Question: Write a program to extract the domain name from an email address.
// Input: email = "indrajitkumar23541@gmail.com"
// Expected Output: Domain Name = "gmail.com"
//
// Hint: Find the index of '@' using find(), then extract substring from '@' + 1 to the end.

int main() {
    string email = "indrajitkumar23541@gmail.com";

    // find() returns the index of the first occurrence of '@'
    // If not found, it returns string::npos
    size_t atIndex = email.find('@');

    if (atIndex != string::npos) {
        // Extract substring starting from index (atIndex + 1)
        // If we don't provide the length argument, substr extracts until the end of the string.
        string domain = email.substr(atIndex + 1);
        
        cout << "Email: " << email << endl;
        cout << "Domain Name: " << domain << endl;
    } else {
        cout << "Invalid Email Address!" << endl;
    }

    return 0;
}
