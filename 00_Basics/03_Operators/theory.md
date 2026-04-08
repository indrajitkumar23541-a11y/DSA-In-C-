# ⚙️ Operators in C++

C++ operators are the symbols that operate on values to perform specific mathematical or logical computations on given values. They are the foundation of any programming language.

---

## 🧪 Basic Example

```cpp
#include <iostream>
using namespace std;
int main() {
    int a = 10 + 20;
    cout << a;
    return 0;
}
```

### ✅ Output
```
30
```

📌 **Explanation:**  
`+` is an addition operator that adds 10 and 20.

---

# 🔢 Types of Operators in C++

C++ operators are mainly divided into **6 types**:

---

## 1️⃣ Arithmetic Operators

Used for mathematical operations.

| Operator | Meaning |
|----------|--------|
| + | Addition |
| - | Subtraction |
| * | Multiplication |
| / | Division |
| % | Modulo |
| ++ | Increment |
| -- | Decrement |

### 🧪 Example

```cpp
#include <iostream>
using namespace std;
int main() {
    int a = 8, b = 3;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;
    cout << "++a = " << ++a << endl;
    cout << "b-- = " << b--;

    return 0;
}
```

---

## ⚠️ Important Points

- `%` works only with integers  
- `++a` → first increment, then use  
- `a++` → first use, then increment  

---

## 2️⃣ Relational Operators

Used for comparison (returns **true = 1, false = 0**)

| Operator | Meaning |
|----------|--------|
| == | Equal |
| > | Greater |
| < | Less |
| >= | Greater or equal |
| <= | Less or equal |
| != | Not equal |

### 🧪 Example

```cpp
int a = 6, b = 4;

cout << (a == b) << endl;
cout << (a > b) << endl;
cout << (a < b);
```

---

## 3️⃣ Logical Operators

Used to combine conditions.

| Operator | Meaning |
|----------|--------|
| && | AND |
| || | OR |
| ! | NOT |

### 🧪 Example

```cpp
int a = 6, b = 4;

cout << (a && b) << endl;
cout << (a || b) << endl;
cout << (!b);
```

---

## 4️⃣ Bitwise Operators

Operate at **binary level (bits)**.

| Operator | Meaning |
|----------|--------|
| & | AND |
| | | OR |
| ^ | XOR |
| << | Left Shift |
| >> | Right Shift |
| ~ | NOT |

### 🧪 Example

```cpp
int a = 6, b = 4;

cout << (a & b) << endl;
cout << (a | b) << endl;
cout << (a ^ b) << endl;
cout << (a << 1) << endl;
cout << (a >> 1) << endl;
cout << (~a);
```

---

## 5️⃣ Assignment Operators

Used to assign values.

| Operator | Meaning |
|----------|--------|
| = | Assign |
| += | Add and assign |
| -= | Subtract and assign |
| *= | Multiply and assign |
| /= | Divide and assign |

### 🧪 Example

```cpp
int a = 6, b = 4;

a += b;
a -= b;
a *= b;
a /= b;
```

---

## 6️⃣ Ternary Operator (Conditional)

Shortcut of if-else.

### Syntax:

```cpp
condition ? value_if_true : value_if_false;
```

### 🧪 Example

```cpp
int a = 3, b = 4;

int result = (a < b) ? b : a;
cout << result;
```

---

# 🧩 Miscellaneous Operators

### 🔹 sizeof
```cpp
sizeof(int);
```

### 🔹 Address Operator
```cpp
&x;
```

### 🔹 Dot Operator
```cpp
obj.member;
```

### 🔹 Arrow Operator
```cpp
ptr->member;
```

### 🔹 Type Casting
```cpp
(float)x;
```

---

# ⚡ Operator Precedence & Associativity

## 🔸 Precedence (Priority)

```cpp
3 * 2 + 8
```

➡️ Output:
```
14
```

✔ Multiplication first, then addition

---

## 🔸 Associativity

```cpp
50 / 25 * 2
```

➡️ Evaluated as:
```
(50 / 25) * 2 = 4
```

✔ Same precedence → Left to Right

---

# 🚀 Summary

✔ Operators perform operations  
✔ 6 main types  
✔ Used in every program  
✔ Precedence decides execution order  

---

💡 **Pro Tip:**  
Operators strong = DSA strong 💪
