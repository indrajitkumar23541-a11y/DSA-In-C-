# 🧠 String Algorithms

Working with strings often requires algorithmic techniques like using pointers, sorting, and frequency counting. Here are the core patterns:

---

## 1. Two-Pointer Technique
Just like in arrays, the two-pointer technique is extremely popular for strings.
* **How it works**: Place one pointer at index `0` (`start`) and another at the last index (`end`). Move them towards each other to compare or swap characters.
* **Use Cases**: Reversing a string, checking if a string is a palindrome.
* **Time Complexity**: $O(N)$.

---

## 2. Sorting a String
Sorting a string rearranges its characters in alphabetical (ASCII) order.
* In C++, you can use `std::sort()` from the `<algorithm>` library.
* **Syntax**:
  ```cpp
  #include <algorithm>
  string str = "edcba";
  sort(str.begin(), str.end()); // str becomes "abcde"
  ```
* **Time Complexity**: $O(N \log N)$ (where $N$ is the length of the string).
* **Use Cases**: Checking if two strings are anagrams of each other (rearranging letters to form another word, e.g., "silent" and "listen").

---

## 3. Frequency Counting (Hashing Array)
To count how many times each character appears in a string, we can use a frequency array of size 26 (since there are 26 letters in the alphabet).
* **Formula**: To map character `ch` to index `0` to `25`:
  $$\text{Index} = \text{ch} - \text{'a'}$$
* **Example**:
  * `'a' - 'a' = 0`
  * `'b' - 'a' = 1`
  * `'z' - 'a' = 25`
* **Time Complexity**: $O(N)$ to count frequencies.
