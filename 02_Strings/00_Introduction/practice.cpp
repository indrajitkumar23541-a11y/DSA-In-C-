#include <iostream>
#include <string>
using namespace std;

// Question: Write a program to count the number of vowels and consonants in a given string.
// Input: str = "Hello World"
// Expected Output:
// Vowels: 3 (e, o, o)
// Consonants: 7 (H, l, l, W, r, l, d)

int main() {
    string str = "Hello World";
    int vowelsCount = 0;
    int consonantsCount = 0;

    // Traverse every character in the string
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        // Convert character to lowercase to make checking easier
        char lowerCh = tolower(ch);

        // Check if character is a letter (ignore spaces/special characters)
        if (lowerCh >= 'a' && lowerCh <= 'z') {
            // Check if it's a vowel
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
                vowelsCount++;
            } else {
                consonantsCount++;
            }
        }
    }

    cout << "String: \"" << str << "\"" << endl;
    cout << "Vowels: " << vowelsCount << endl;
    cout << "Consonants: " << consonantsCount << endl;

    return 0;
}
