#include <iostream>
#include <string>
#include <algorithm> // Required for std::sort
using namespace std;

// Question: Write a program to check if two strings are Anagrams.
// Two strings are Anagrams if they contain the same characters in any order.
// Input: s1 = "listen", s2 = "silent"
// Expected Output: Anagrams!
// Input: s1 = "hello", s2 = "world"
// Expected Output: Not Anagrams.

bool isAnagram(string s1, string s2) {
    // If lengths are different, they cannot be anagrams
    if (s1.length() != s2.length()) {
        return false;
    }

    // Sort both strings
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // If they are equal after sorting, they are anagrams
    return s1 == s2;
}

int main() {
    string str1 = "listen";
    string str2 = "silent";

    cout << "String 1: " << str1 << " | String 2: " << str2 << endl;
    if (isAnagram(str1, str2)) {
        cout << "Result: They are Anagrams!" << endl;
    } else {
        cout << "Result: They are NOT Anagrams." << endl;
    }

    string str3 = "hello";
    string str4 = "world";

    cout << "\nString 1: " << str3 << " | String 2: " << str4 << endl;
    if (isAnagram(str3, str4)) {
        cout << "Result: They are Anagrams!" << endl;
    } else {
        cout << "Result: They are NOT Anagrams." << endl;
    }

    return 0;
}
