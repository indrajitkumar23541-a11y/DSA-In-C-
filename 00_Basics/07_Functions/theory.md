# ⚙️ Functions in C++

A **function** is a reusable block of code that performs a specific task.

👉 It helps to:
- Divide program into smaller parts  
- Improve readability  
- Make code reusable & maintainable  

---

## 🧪 Example

```cpp
#include <iostream>
using namespace std;

// Function definition
int square(int x) {
    return x * x;
}

int main() {
    int result = square(5);
    cout << "Square of 5 is: " << result << endl;
    return 0;
}
```

### ✅ Output
```
Square of 5 is: 25
```

---

# 🎯 Why Use Functions?

✔ Avoid code repetition  
✔ Make code clean & modular  
✔ Easy debugging  
✔ Better organization  

---

# 🧱 Function Syntax

```cpp
return_type function_name(parameters) {
    // body
    return value;
}
```

### 📌 Components

- **Return Type** → What function returns  
- **Function Name** → Identifier  
- **Parameters** → Input values  
- **Body** → Logic  

---

# 🔄 Function Declaration vs Definition

### 🔹 Declaration

```cpp
int add(int, int);
```

👉 Only tells compiler about function

---

### 🔹 Definition

```cpp
int add(int a, int b) {
    return a + b;
}
```

👉 Actual implementation

---

## ⚠️ Important Rule

👉 Function must be **declared before use**

---

# 📞 Calling a Function

```cpp
#include <iostream>
using namespace std;

void greet() {
    cout << "Welcome to C++ Programming!" << endl;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    greet();
    int result = multiply(4, 5);

    cout << "Multiplication result: " << result << endl;
    return 0;
}
```

### ✅ Output
```
Welcome to C++ Programming!
Multiplication result: 20
```

---

# 📥 Parameters / Arguments

Functions can take input values.

### Syntax:

```cpp
return_type name(type1 param1, type2 param2) {
    return value;
}
```

---

## 🧪 Example

```cpp
#include <iostream>
using namespace std;

void printNum(int n) {
    cout << n << endl;
}

int main() {
    int num1 = 10;
    int num2 = 99;

    printNum(num1);
    printNum(num2);

    return 0;
}
```

### ✅ Output
```
10
99
```

---

## 📌 Important Notes

- Arguments must match parameters  
- Type should be same  
- Number of arguments should match  

---

# 🔢 Types of Functions

## 1️⃣ Based on Origin

### 🔹 Library Functions
Built-in functions:
- `cout`
- `sqrt()`
- `abs()`
- `getline()`

---

### 🔹 User-Defined Functions
Created by programmer

---

## 2️⃣ Based on Input & Output

| Type | Description |
|------|------------|
| No input, no return | Simple task |
| Input, no return | Takes input only |
| No input, return | Returns result |
| Input + return | Most common |

---

# 🚀 Summary

✔ Functions reduce repetition  
✔ Improve readability  
✔ Make code modular  
✔ Easy to reuse  

---

💡 **Pro Tip:**  
Functions = backbone of clean code 🔥