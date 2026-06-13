#include <iostream>
#include <string>
#include <algorithm> // Required for std::sort and std::swap
using namespace std;

// Function to reverse a string in-place using two pointers
void reverseString(string &str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

// Function to print character frequency counts for lowercase letters
void countFrequency(string str) {
    int freq[26] = {0}; // Initialize count array to 0

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++; // Map character to index 0-25
        }
    }

    cout << "Character frequencies:" << endl;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            char ch = 'a' + i; // Map index back to character
            cout << ch << ": " << freq[i] << endl;
        }
    }
}

int main() {
    // 1. Reversing string
    string s1 = "hello";
    cout << "Original String: " << s1 << endl;
    reverseString(s1);
    cout << "Reversed String: " << s1 << endl;

    // 2. Sorting string
    string s2 = "programming";
    cout << "\nOriginal String to sort: " << s2 << endl;
    sort(s2.begin(), s2.end());
    cout << "Sorted String (alphabetical): " << s2 << endl;

    // 3. Frequency counting
    string s3 = "banana";
    cout << "\nCounting frequency in \"" << s3 << "\":" << endl;
    countFrequency(s3);

    return 0;
}
