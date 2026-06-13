#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1. String Concatenation
    string s1 = "Hello";
    string s2 = "World";
    
    // Using + operator
    string combined = s1 + " " + s2;
    cout << "Concatenation using '+': " << combined << endl;

    // Using append()
    string s3 = "Coding ";
    s3.append("is Fun!");
    cout << "Concatenation using append(): " << s3 << endl;

    // 2. Extracting Substring
    string message = "ProgrammingInCpp";
    // Extract "Programming" (starts at index 0, length 11)
    string word1 = message.substr(0, 11);
    // Extract "Cpp" (starts at index 13, length 3)
    string word2 = message.substr(13, 3);

    cout << "\nOriginal String: " << message << endl;
    cout << "Substring 1 (index 0, len 11): " << word1 << endl;
    cout << "Substring 2 (index 13, len 3): " << word2 << endl;

    // 3. String Comparison
    string strA = "Apple";
    string strB = "Banana";

    cout << "\nComparing \"" << strA << "\" and \"" << strB << "\":" << endl;
    if (strA == strB) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    if (strA < strB) {
        cout << "\"" << strA << "\" comes before \"" << strB << "\" alphabetically." << endl;
    } else {
        cout << "\"" << strB << "\" comes before \"" << strA << "\" alphabetically." << endl;
    }

    return 0;
}
