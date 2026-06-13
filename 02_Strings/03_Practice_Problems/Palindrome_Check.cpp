#include <iostream>
#include <string>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(string str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        // Convert to lowercase to make it case-insensitive
        char char1 = tolower(str[start]);
        char char2 = tolower(str[end]);

        // If characters don't match, it's not a palindrome
        if (char1 != char2) {
            return false;
        }

        start++;
        end--;
    }

    return true; // All characters matched
}

int main() {
    string s1 = "Racecar";
    string s2 = "hello";

    cout << "Is \"" << s1 << "\" a palindrome? " << (isPalindrome(s1) ? "Yes" : "No") << endl;
    cout << "Is \"" << s2 << "\" a palindrome? " << (isPalindrome(s2) ? "Yes" : "No") << endl;

    return 0;
}
