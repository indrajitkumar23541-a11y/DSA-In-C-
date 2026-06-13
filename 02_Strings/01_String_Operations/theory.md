# ⚙️ Basic String Operations in C++

C++ `std::string` provides easy-to-use operators and built-in functions to perform operations like joining strings, extracting parts, and comparing strings.

---

## 1. String Concatenation (Joining Strings)
Concatenation means combining two or more strings together.
* In C++, you can simply use the `+` or `+=` operators.
* Alternatively, you can use the `.append()` function.

### Example:
```cpp
string firstName = "Indrajit ";
string lastName = "Kumar";
string fullName = firstName + lastName; // "Indrajit Kumar"
```

---

## 2. Extracting Substrings
A **Substring** is a contiguous part of a string. C++ provides the `.substr()` function to extract a portion of a string.

### Syntax:
```cpp
string sub = str.substr(startIndex, length);
```
* **`startIndex`**: The index from where you want to start extracting.
* **`length`**: The number of characters you want to extract.

### Example:
```cpp
string str = "HelloWorld";
string sub = str.substr(0, 5); // Extracts "Hello" (start index 0, length 5)
```

---

## 3. String Comparison
You can compare two strings lexicographically (alphabetical order, like in a dictionary) using standard comparison operators: `==`, `!=`, `<`, `>`, `<=`, `>=`.

### Example:
```cpp
string s1 = "apple";
string s2 = "banana";

if (s1 < s2) {
    // True, because "apple" comes before "banana" alphabetically
}
```

---

## 📈 Time Complexity of Operations
* **Concatenation ($S_1 + S_2$)**: $O(L_1 + L_2)$ (where $L_1$ and $L_2$ are the lengths of the two strings, because it creates a new string and copies both).
* **Substring ($S.\text{substr}(i, L)$)**: $O(L)$ (copies $L$ characters).
* **Comparison ($S_1 == S_2$)**: $O(\min(L_1, L_2))$ (checks character by character).
