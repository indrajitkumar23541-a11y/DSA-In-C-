# 🏆 Standard String Practice Problems

This folder contains standard coding problems on strings that are frequently asked in technical interviews.

---

## 1. Palindrome Check
### Problem Statement:
Write a function that checks if a given string is a palindrome. A string is a palindrome if it reads the same backward as forward, ignoring case and non-alphanumeric characters.

### Example:
* **Input**: `"RaceCar"`
* **Output**: `true` (since lowercase `"racecar"` is the same read backwards).

### Logic (Two-Pointer):
1. Place a pointer at the beginning (`left = 0`) and one at the end (`right = length - 1`).
2. Move them towards each other.
3. Compare characters at both pointers. If they are not equal, return `false`.
4. If pointers meet without matching failure, return `true`.

---

## 2. Reverse Words in a String
### Problem Statement:
Given an input string `s` containing words separated by spaces, reverse the order of the words.

### Example:
* **Input**: `"the sky is blue"`
* **Output**: `"blue is sky the"`

### Logic:
1. Traverse the string and extract words one by one.
2. Put the words in a stack or a dynamic array (vector).
3. Reconstruct the string by joining the words in reverse order with spaces.
