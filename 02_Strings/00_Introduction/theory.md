# 🧠 Introduction to Strings in C++

## 📌 What is a String?
A **String** is a sequence of characters (like letters, numbers, symbols, or spaces) stored together. For example, `"Hello"` is a string containing 5 characters.

In C++, there are two main ways to represent and work with strings:
1. **C-Style Strings** (Character Arrays)
2. **C++ Standard Library Strings** (`std::string` class)

---

## 1. C-Style Strings
A C-Style string is simply a one-dimensional array of characters that ends with a special null character `'\0'` (backslash zero). The compiler automatically adds `'\0'` at the end of the string to mark where the string ends.

### Syntax:
```cpp
char str[] = "Hello";
```
* **Memory Layout**: It occupies 6 bytes of memory (5 for "Hello" and 1 for `'\0'`).
```
Index:   |  0  |  1  |  2  |  3  |  4  |  5  |
Value:   | 'H' | 'e' | 'l' | 'l' | 'o' |'\0' |
```

---

## 2. C++ `std::string`
C++ introduced a modern, much safer, and easier way to handle strings using the **`std::string`** class.

### Syntax:
```cpp
#include <string>
string str = "Hello";
```

### Why `std::string` is better:
* **Dynamic Sizing**: You do not need to specify the size. It automatically resizes as you add or remove characters.
* **Safe**: It prevents buffer overflow issues that are common with character arrays.
* **Built-in Functions**: It provides a huge list of built-in functions like `.length()`, `.substr()`, etc.

---

## 📈 Time Complexity of Basic String Operations
* **Accessing a character** (e.g., `str[i]`): $O(1)$.
* **Finding Length**:
  * C-style string (`strlen`): $O(N)$ (requires scanning the array until `'\0'`).
  * C++ `std::string` (`.length()` / `.size()`): $O(1)$ (it stores the size separately).
