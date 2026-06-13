#include <iostream>
#include <string>
#include <vector>
#include <sstream> // For stringstream
using namespace std;

// Function to reverse the words in a string
string reverseWords(string s) {
    vector<string> words;
    stringstream ss(s);
    string word;

    // Extract all words from the stream
    // stringstream automatically handles multiple spaces between words
    while (ss >> word) {
        words.push_back(word);
    }

    string result = "";
    // Reconstruct the string in reverse order
    for (int i = words.size() - 1; i >= 0; i--) {
        result += words[i];
        if (i > 0) {
            result += " "; // Add space between words
        }
    }

    return result;
}

int main() {
    string sentence = "the sky is blue";
    
    cout << "Original Sentence: \"" << sentence << "\"" << endl;
    
    string reversed = reverseWords(sentence);
    
    cout << "Reversed Words: \"" << reversed << "\"" << endl;

    return 0;
}
